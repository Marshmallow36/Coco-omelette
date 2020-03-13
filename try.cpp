#include<stdio.h>
int main()
{
	while(1)//闰年数i，计算总天数all。智力z，一月一日至生日天数x，至测定天数y
	{
		int y1,y2,m1,m2,d1,d2,z,all,i,j,x,y;
		printf("————人体生物节律————\n");
		printf("请输入您的出生日期（例如出生于1988年11月13日输入：1988,11,13）：\n");
		scanf("%d,%d,%d,",&y1,&m1,&d1);
		fflush(stdin);