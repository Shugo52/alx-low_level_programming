#include <stdio.h>
int main(void)
{
	int n;
	n = 10;
	int *p;
	p = &n;
	int *o;
	o = p;
	printf("&n =%p\n", &n);
	printf("p = %p\n", p);
	printf("o = %p\n", o);
	return (0);
}
