#include <stdio.h>
#include <string.h>
int main()
{
	char a[20], b;
	int n;
	while(printf(" ‰»Î£∫"),gets(a)){
		n = strlen(a);
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n-i-1; ++j){
				if(a[j]>a[j+1]){
					b = a[j];
					a[j] = a[j+1];
					a[j+1] = b;
				}
			}
		}
		printf(" ‰≥ˆ£∫");
		for (int x = 0; x < n; ++x){
			printf("%c", a[x]);
			if (x+1!=n){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
