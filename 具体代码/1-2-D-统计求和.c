#include <stdio.h>
int judge(int a,int n);
int judge(int a,int n)
{ 
	for(; n != 0; n /= 10)
		if(n % 10 == a)
			return 1; 
	return 0; 
}
int main()
{
	int t, a, i, sum, count; 
	scanf("%d",&t); 
	while(t--){ 
		sum = 0;count = 0;
		scanf("%d", &a);
		for(i = 1000; i < 10000; i++){ 
			if(judge(a,i) == 1 && i % a != 0){
				count++;
				sum += i; 
			} 
		}	 
	printf("%d %d\n", count, sum);
	} 
	return 0; 
} 
