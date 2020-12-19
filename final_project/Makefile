a.out : y.tab.o lex.yy.o my_c_func.o print.o semantic.o print_sem.o code_generator.o
	gcc -o a.out y.tab.o lex.yy.o my_c_func.o print.o semantic.o print_sem.o code_generator.o

y.tab.o : y.tab.c
	gcc -g -c y.tab.c

lex.yy.o : lex.yy.c
	gcc -g -c lex.yy.c

code_generator.o : code_generator.c
	gcc -g -c code_generator.c

semantic.o : semantic.c
	gcc -g -c semantic.c

print_sem.o : print_sem.c
	gcc -g -c print_sem.c

my_c_func.o : my_c_func.c
	gcc -g -c my_c_func.c

print.o : print.c
	gcc -g -c print.c

lex.yy.c : my_c.l type.h y.tab.h my_c.y
	lex my_c.l

y.tab.c : my_c.y type.h y.tab.h
	yacc -d my_c.y
