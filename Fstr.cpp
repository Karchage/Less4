#include <iostream>
#include <cstring>
//#include <string>
#include <stdio.h>
void StrLen() // ++
{
	int size=0;
	char str[]={"Hello World"};
	//std::string str;
	//std::cout<<"Please write string: ";
	//std::cin>>str;
	for(int i=0;str[i]!='\0';i++)
	{
		size++;
	}	
	std::cout<<"String size: "<<size;
}
void StrCmp() // ++
{
	bool ChStr;
	char str1[]={"Hello World"};
	char str2[]={"Hello World"};
	//std::string str1,str2;
	//std::cout<<"Please write string1 and string2: ";
	//std::cin>>str1>>str2;
	for(int i=0;str1[i]!='\0'||str2[i]!='\0';i++)
	{
		if(str1[i]==str2[i])
		{
			ChStr = true;
		}else ChStr = false;
	}
	std::cout<<"New string: "<<ChStr;
}
void StrChr() //++ 
{
	char simbol='l';
	char str[]={"Hello World"};
	char *p;
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
void StrCpy() // ++
{
	char str1[]={"Hello World"};
	char str2[]={" "};
	for(int i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	std::cout<<"String2: "<<str2;
}
void StrCat() // soedin 2 string
{
	char str1[]={"Hello"};
	char str2[]={"World"};
	char str3[]={" "};
	int count;
	for(int i=0;str1[i]!='\0';i++)
	{
		str3[i]=str1[i];
		count++;
	}
	for(int i=0;str2[i]!='\0';i++)
	{
		str3[count]=str2[i];
		count++;
	}
	//std::string str1,str2;
	//std::cout<<"Please write string1 and string2: ";
	//std::cin>>str1>>str2;
	//str1+=str2;
	std::cout<<"New string: "<<str3;
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
