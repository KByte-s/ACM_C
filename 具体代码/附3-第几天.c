#include <stdio.h>
int main()
{
	int sum;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int yea, mon, day;
	while(1){
		sum = 0;	
		printf(" ‰»Î£∫");
		scanf("%d/%d/%d", &yea, &mon, &day);
		if((yea % 400 == 0) || (yea % 4 == 0)&&(yea % 100 != 0))
			month[1]=29;
		for(int i = 0; i < mon-1; i++)
		sum = sum + month[i];
		sum = sum + day;
		printf(" ‰≥ˆ£∫%d\n", sum);
	}
	return 0;
}