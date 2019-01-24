#include <stdio.h>
int a(int n);
int main()
{
	int n;
	while(scanf("%d", &n) != EOF ){
		if (n > 1 && n < 30){
			printf("%d\n", a(n));
		}
	}
	return 0;
}
int a(int n)
{
	int b = 1;
	if(n != 1)
		b += a(n-1) * 2 + 1;
	return b;
}