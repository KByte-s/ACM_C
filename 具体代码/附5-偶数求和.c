#include<stdio.h>
void geta(int a[])
{
	int i;
	for(i = 1; i <= 100; i++)
		a[i-1] = i * 2;
}
int main()
{
	int a[100], i;
	int n, m, count;
	float sum;
	geta(a);
	while(printf("ÊäÈë£º"), scanf("%d %d",&n, &m) != EOF){
		count = 0;sum = 0;
		printf("Êä³ö£º");
		for(i = 0; i < n; i++){
			sum += a[i];
			count++;
			if(count == m || i == n-1){
				printf("%.f ",sum/count);
				sum = 0;
				count = 0;
			}
		}
		printf("\n");
	}
	return 0;
}
