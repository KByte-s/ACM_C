#include <stdio.h>
int main()
{
	int a, sum = 0, b;
	while(scanf("%d", &a) != EOF){
		sum = 0;
		for(int i = 0; i < a; i++){
			while(scanf("%d", &b) != EOF)
			break;
			sum += b;
		}
		printf("%d\n", sum);
	}
	return 0;
}