typedef int FILE;
typedef int size_t;
int NULL = 0;
int stderr = 2;
int WUNTRACED = 0;
int MAX_TOKEN_SIZE = 1024;
int MAX_INPUT_SIZE = 1024;
int MAX_NUM_TOKENS = 1024;
int BUFFER_SIZE = 1024;
char *strcpy(char *dest, char *src);
int strlen(char *s);
int strcmp(char*, char*);
void free(void *ptr);
int sprintf(char *, char *, ...);
char *getcwd(char *, int);
char *getenv(char *);
void bzero(void *s, size_t n);
char *fgets(char *, int, FILE *);
int setenv(char *, char*, int);
FILE *fopen(char *, char *);
int getchar();
int pipe(int pipefd[2]);
int fprintf(FILE *, char*, ...);
int fork();
int waitpid(int, int*, int);
int dup2(int, int);
int close(int);
int execvp(char*, char* argv);
void exit(int);

void execute_command(char **tokens, int command_start_index, int stdin_fd);
int get_next_pipe_index(char **tokens, int command_start_index);

char **tokenize(char *line)
{
  char **tokens = (char **)malloc(MAX_NUM_TOKENS * sizeof(char *));
  char *token = (char *)malloc(MAX_TOKEN_SIZE * sizeof(char));
  int i, tokenIndex = 0, tokenNo = 0;

  for(i =0; i < strlen(line); i++){

    char readChar = line[i];

    if (readChar == ' ' || readChar == 'n' || readChar == 't'){
      token[tokenIndex] = '0';
      if (tokenIndex != 0){
	tokens[tokenNo] = (char*)malloc(MAX_TOKEN_SIZE*sizeof(char));
	strcpy(tokens[tokenNo++], token);
	tokenIndex = 0;
      }
    } else {
      token[tokenIndex++] = readChar;
    }
  }
 
  free(token);
  tokens[tokenNo] = NULL;
  return tokens;
}


int main(int argc, char* argv) {
	char  line[MAX_INPUT_SIZE];
	char  **tokens;
	int i;
	char current_dir_name[BUFFER_SIZE];
	char *path_env_value;
	char new_path_env_value[BUFFER_SIZE];
	FILE* fp;

	getcwd(current_dir_name, BUFFER_SIZE);
	path_env_value = getenv("PATH");
	sprintf(new_path_env_value, "%s:%s", path_env_value, current_dir_name);
	setenv("PATH", new_path_env_value, 1);

	if(argc == 2) {
		fp = fopen(argv[1],"r");
		if(fp < 0) {
			printf("File doesn't exists.");
			return -1;
		}
	}


	while(1) {			
		bzero(line, sizeof(line));
		if(argc == 2) {
			if(fgets(line, sizeof(line), fp) == NULL) {
				break;	
			}
			line[strlen(line) - 1] = '0';
		} else {
			printf("$ ");
			scanf("%[^n]", line);
			getchar();
		}

		line[strlen(line)] = 'n';
		tokens = tokenize(line);

		execute_command(tokens, 0, 0);

		for(i=0;tokens[i]!=NULL;i++){
			free(tokens[i]);
		}
		free(tokens);

	}
	return 0;
}

void execute_command(char **tokens, int command_start_index, int stdin_fd){
	int pid;
	int status;
	int pipe_fd[2];
	int pipe_index;

	if (!tokens[command_start_index]) {
		return;
	}

	if ((pipe_index = get_next_pipe_index(tokens, command_start_index)) > 0) {
		tokens[pipe_index] = NULL;
		if (pipe(pipe_fd) == -1) {
			fprintf(stderr, "pipe() error.n");
		}
	}

	if ((pid = fork()) > 0) {
		waitpid(pid, &status, WUNTRACED);
		if (pipe_index > 0) {
			close(pipe_fd[1]);
			execute_command(tokens, pipe_index + 1, pipe_fd[0]);
			close(pipe_fd[0]);
		}
	} else if (pid == 0) {
		if (pipe_index > 0) {
			close(pipe_fd[0]);
			if (dup2(pipe_fd[1], 1) != 1) {
				fprintf(stderr, "dup2() error 2n");
			}
		}

		if (stdin_fd > 0) {
			dup2(stdin_fd, 0);
		}

		if (execvp(tokens[command_start_index], tokens + command_start_index) < 0) {
			fprintf(stderr, "SSUShell : Incorrect commandn");
			exit(1);
		}

	} else {
		fprintf(stderr, "fork() error.n");
	}

	return;
}

int get_next_pipe_index(char **tokens, int command_start_index){
	int pipe_index = -1;
	int token_index = command_start_index;

	while (tokens[token_index]) {
		if (!strcmp(tokens[token_index], "|")) {
			pipe_index = token_index;
			break;
		}
		++token_index;
	}

	return pipe_index;
}
