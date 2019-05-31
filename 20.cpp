#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct phone{
		char brand[12];
		char model[10];
		int year;
		int price;
	}; 
	struct phone name[5]={
		{"apple","xs",2018,35900},
		{"samsung","note9",2018,30900},
		{"sony","Xperia 1",2019,30990},
		{"samsung","S10+",2019,39900},
		{"huawei","P30 pro",2019,36000}};
		int i;
	for(i=0;i<5;i++)
		printf("%-8s %-9s %-5d %-8d\n",name[i].brand,name[i].model,name[i].year,name[i].price);
		
		return 0;
		system("PAUSE");
 } 
