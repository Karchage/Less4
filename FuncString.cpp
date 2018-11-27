#include <iostream>
#include <cstring>
#include <stdio.h>
void StrLen()
{
	int size=0;
	std::string str;
	std::cout<<"Please write string: ";
	std::cin>>str;
	for(int i=0;str[i]!='\0';i++)
	{
		size++;
	}	
	std::cout<<"String size: "<<size;
}
void StrCmp()
{
	bool ChStr;
	std::string str1,str2;
	std::cout<<"Please write string1 and string2: ";
	std::cin>>str1>>str2;
	if(str1==str2)
	{
		ChStr = true;
	}	
	else ChStr = false;
	std::cout<<"New string: "<<ChStr;
}
void StrChr()
{
	char simbol;
	std::string str;
	char *p;
	std::cout<<"Please write string and simbol: ";
	std::cin>>str>>simbol;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==simbol)
		{
			p=&str[i];
			break;
		}
	}
	std::cout<<p<<"\n"<<*p<<"\n"<<&p<<"\n";
}
void StrCpy()
{
	std::string str1,str2;
	std::cout<<"Please write string: ";
	std::cin>>str1;
	str2=str1;
	std::cout<<"String2: "<<str2;
}
void StrCat()
{
	std::string str1,str2;
	std::cout<<"Please write string1 and string2: ";
	std::cin>>str1>>str2;
	str1+=str2;
	std::cout<<"New string: "<<str1;
}
int main ()
{
	int a;
	std::cout<<"1) strlen\n"<<"2) strcpy\n"<<"3) strcmp\n"<<"4) strcat\n"<<"5) strchr\n";
	std::cin>>a;
	switch(a)
	{
		case 1:
			StrLen();
			break;
		case 2:
			StrCpy();
			break;
		case 3:
			StrCmp();
			break;
		case 4:
			StrCat();
			break;
		case 5:
			StrChr();
			break;
	}
  return 0;
}
