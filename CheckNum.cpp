#include <iostream>
#include <ctype.h>
#include <stdlib.h>
int CheckNum(char str[])
{
	int Num;
	bool check = false;
	for(int i=0;i<32;i++)
	{
		if(str[i]!= NULL)
		{
		if(isdigit(str[i]))
		{
			check = true;
		}
		if(!isdigit(str[i]))
		{
			check = false;
		}
	}else break;
	}
	if(check==true)
	{
		Num= atoi(str);
		std::cout<<Num;
	}
}
int main()
{
	char str[32];
	gets (str);
	CheckNum(str);
	return 0;
}
