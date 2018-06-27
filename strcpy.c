#include<stdio.h>
char *my_strcpy(char *s1,char *s2)
{
	char *p1,*p2;
	p1=s1;
	p2=s2;
	while(*p1=*p2)
	{
		p1++;
		p2++;
	}
	return s1;
}
