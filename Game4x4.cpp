#include <iostream>
#include <stdlib.h>
#include <ctime>
void MixingMas(int GameMas[4][4])
{
	srand(time(NULL));
	bool check;
	int GenMas[16];
 	for(int i=0;i<15;)
 	{
 		check=false;
 		int RandNum=1+rand()%15;
 		for(int j=0;j<i;j++)
 		{
 			if(GenMas[j]==RandNum)
			{
				check=true;
				break;
			}
		}
		if(!check)
		{
			GenMas[i]=RandNum;
			i++;
		}
	}
	GenMas[16]=0;
	int CheckNum;
	int Correct=0;
	for(int i=0;i<14;i++)
	{
		CheckNum=GenMas[i];
		for(int j=0;j<15;j++)
		{
			if(CheckNum>GenMas[j])
			{
				Correct++;
			}
		}
	}
	if(Correct % 2==1)
	{
		int num =GenMas[13];
		GenMas[13]=GenMas[14];
		GenMas[14]=num;
	}
	
	
	

	int a =0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			GameMas[i][j]=GenMas[a];
			a++;
		}
	}
}
void SlideNum(int GameMas[4][4])
{
	int x,y;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(GameMas[i][j]==0)
			{
				x=j;
				y=i;
			}
		}
	}
	char simbol=getchar();
	system("cls");
	switch(simbol)
	{
		case 'w':
			{
				if(y!=0)
				{
					int n=GameMas[y][x];
					GameMas[y][x]=GameMas[y-1][x];
					GameMas[y-1][x]=n;
				}
				break;
			}
		case 's':
			{
				if(y!=3)
				{
					int n=GameMas[y][x];
					GameMas[y][x]=GameMas[y+1][x];
					GameMas[y+1][x]=n;	
				}
				break;
			}
		case 'a':
			{
				if(x!=0)
				{
					int n=GameMas[y][x];
					GameMas[y][x]=GameMas[y][x-1];
					GameMas[y][x-1]=n;
				}
				break;
			}
		case 'd':
			{
				if(x!=3)
				{
					int n=GameMas[y][x];
					GameMas[y][x]=GameMas[y][x+1];
					GameMas[y][x+1]=n;
				}
				break;
			}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			std::cout<<GameMas[i][j]<<"\t";
		}
		std::cout<<"\n";
	}
}
void CheckWin(int mask[4][4],int GameMas[4][4])
{
	bool Win=false;
	for(int i =0;i<4;i++)
	{
		for(int j =0;j<4;j++)
		{
			if(mask[i][j]==GameMas[i][j])
			{
				Win=true;
			}
			else if(mask[i][j]!=GameMas[i][j])
			{
				Win=false;
				i=4;
				break;
			}
		}
	}
	if(Win==false)
	{	SlideNum(GameMas);
		CheckWin(mask,GameMas);
	}else std::cout<<"You WIN";
}
int main() 
{
	int mask[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0};
	int GameMas[4][4];
	MixingMas(GameMas);
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			std::cout<<GameMas[i][j]<<"\t";
		}
		std::cout<<"\n";
	}
	CheckWin(mask,GameMas);
	return 0;
}
