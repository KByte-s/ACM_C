#include <stdio.h>
int fun(int i, int k, int j)
{
	/*
	1.	i参数为所判断的数字
	2.	k参数为至少含几个数七 
	3.	j参数为'1'时恰含k个数七
	    j参数为'2'时至少含k个数七 
	*/
	int count = 0;
	if(i % 7 != 0){
		for(; i != 0; i /= 10){
			if (i % 10 == 7)
				count++;
		}
	}
	if(j == 1){
		if(count == k)
			return 1;
	}
	else if(j == 2){	
		if(count >= k)
			return 1;
	}
	return 0;
}
int main()
{
	int sum = 0, count = 0;
	int sum2 = 0, count2 = 0;int i;
	for (i = 10000; i < 100000; ++i){
		if(fun(i,1,2) == 1){
			count++;
			sum += i;
		}
		if(fun(i,2,1) == 1){
			count2++;
			sum2 += i;
		}
	}
	printf("%d\t%d\n", count, sum);
	printf("%d\t%d\n", count2, sum2);
	return 0;
}
