#include <stdio.h>
#include <string.h>
int fun(char tel[], char sho[])
{
	sho[0] = '6';
	for (int i = 6; i < 12; ++i)
		sho[i-5] = tel[i];
}
int main()
{
	char tel[11], sho[7];
	int num;
	printf("���룺");
	scanf("%d", &num);
	getchar();
	for(int i = 0; i < num; ++i)
	{
		scanf("%s", tel);
		fun(tel,sho);
		printf("��Ӧ����ǣ�");
		puts(sho);
	}
	return 0;
}
