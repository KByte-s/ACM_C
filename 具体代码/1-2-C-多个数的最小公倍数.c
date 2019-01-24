#include <stdio.h>
int main()
{
	int t, n, m, k, a, x, y, b, c;
	scanf("%d", &a);
	for (int j = 0; j < a; j++){
		scanf("%d", &n);
		k = 1;
		for(int i = 0; i < n; i++){
			scanf("%d", &m);
			// if(k>m){
			// 	t=k;k=m;m=t;
			// }
			for(t=k;t%k||t%m;t+=1){}
			k = t;
		}
		printf("%d\n", k);
	}
	return 0;
}
