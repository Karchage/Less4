#include <stdio.h>
#include <iostream>
void FName(char buffer[],char FileName[])
{
	for(int i=100;i>0;i--)
	{
		if(buffer[i] == 92 )
		{
			i++;
			for(int j=0;j<100;j++)
			{
				FileName[j] = buffer[i];
				i++; 
			}
			break;
		}
	}
}
int main()
{  	
	char buffer[100];
	char FileName[100];
	printf("Enter a string with spaces: ");
	gets (buffer);
	FName(buffer,FileName);
	std::cout<<buffer;
	std::cout<<"\n"<<FileName;
	return 0;
}
