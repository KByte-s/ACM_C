#include <stdio.h>
int main()
{
	int n, m, a, sum;
	while(scanf("%d", &n) != EOF){
		for (int i = 0; i < n; i++)
		{
			while(scanf("%d", &m) != EOF){
			sum = 0;				
				for (int j = 0; j < m; j++){
					scanf("%d", &a);
					sum += a;
				}
				printf("%d\n\n", sum);
			}
		}
	}
	return 0;
}
