﻿/*
小蓝要为一条街的住户制作门牌号。
这条街一共有2020位住户，门牌号从1到2020编号。小蓝制作门牌的方法是先制作0到9
这几个数字字符，最后根据需要将字符粘贴到门牌上，例如门牌 1017 需要依次粘贴字符1、0、1、7，即需要1个字符0，2个字符1，1个字符7。请问要制作所有的1到2020号门牌，总共需要多少个字符2？
*/
#include<stdio.h>
int main()
{
	int a = 0, num = 0;
	for (a = 1; a <= 2020; a++)
	{
		if (a % 10 == 2)//个位
			num++;
		if (a / 10 % 10 == 2)//十位
			num++;
		if (a / 100 % 10 == 2)//百位
			num++;
		if (a / 1000 == 2)//千位
			num++;
	}
	printf("%d", num);
	return 0;
}