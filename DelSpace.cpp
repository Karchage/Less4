#include <iostream>
#include <ctype.h>
void DelSpace(char str[],int &size)
{
	int space=0;
	for(int i=0;i<size;i++)
	{	
		if(isspace(str[i]))
		{
			space++;	

		}
		if(!isspace(str[i]))
		{
			space=0;
		}
		if(space>1)
		{
			for(int j=i;j<size;j++)
			{
				str[j]=str[j+1];
			}
			i--;
		}
	}
}
int main() 
{
	char str[]="How  much \t\n\n is         the\t\t\t\tfish";
	int size = sizeof(str)-1;
	std::cout<<str;
	DelSpace(str,size);
	std::cout<<"\n";
	std::cout<<str;
	return 0;
}
