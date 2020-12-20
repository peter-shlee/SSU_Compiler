int a[10];

void sort(int l, int r) {
	int i, j, x, w;
	int k;

	i = 1;
	j = r;
	x = a[(l+r)/2];
	do {
		while (a[i] < x)
			i++;
		while (x < a[j])
			j--;
		if (i <= j) {
			w = a[i];
			a[i] = a[j];
			a[j] = w;
			i++;
			j--;
		}
	} while (i <= j);
	if (l < j)
		sort(l, j);
	if (i < r)
		sort(i, r);
}

void init_array() {
	a[0] = 0;
	a[1] = 1;
	a[2] = 3;
	a[3] = 5;
	a[4] = 7;
	a[5] = 9;
	a[6] = 2;
	a[7] = 4;
	a[8] = 6;
	a[9] = 8;
}

void print_array(char *msg) {
	int k;
	printf("%s :\n", msg);
	for (k = 0; k < 10; k++)
		printf("%d ", a[k]);
	printf("\n");
}

void main() {
	init_array();

	print_array("before sort");
	printf("\n");
	sort(0, 9);
	print_array("after sort");
}
