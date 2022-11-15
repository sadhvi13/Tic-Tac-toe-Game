#include<iostream>
#include<conio.h>
using namespace std;

char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='x';
void draw()
{
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<" "<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
void input()
{
	char a;
	cout<<"enter no. to replace";
	cin>>a;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(matrix[i][j]==a)
			{
				matrix[i][j]=player;
			}
		}
	}
}
void playerchange()
{
	if(player=='x')
	player='o';
	else
	player='x';
}
void win()
{
	int countr=0,countc=0,countr1=0,countc1=0,countd1=0,countd2=0,i,j;
	char ansx='y',anso='y';
	for(j=0;j<3;j++)
	{
	
	for(i=0;i<3;i++)
	{
		if(matrix[j][i]=='x')
		{
			countr=countr+1;
			if(countr==3)
			{
				cout<<"winner x";
				exit(0);
			}
		}
		if(matrix[i][j]=='x')
		{
			countc=countc+1;
			if(countc==3)
			{
				cout<<"winner:player x";
				exit(0);
			}
			
		}
		if(matrix[0][0]=='x'&&matrix[1][1]=='x'&&matrix[2][2]=='x')
		{
			countd1=countd1+1;
			cout<<countd1;
			if(countd1==3)
			{
			cout<<"winner:player x";
				exit(0);
			}
		}
		if(ansx=='y')
		{
			ansx='n';
			if(matrix[0][2]=='x'&&matrix[2][0]=='x'&&matrix[1][1]=='x')
			{
				cout<<"winner:player x";
				exit(0);
			}
		}
		if(matrix[j][i]=='o')
		{
			countr1=countr1+1;
			if(countr1==3)
			{
				cout<<"winner:player o";
			exit(0);
			}
		}
		if(matrix[i][j]=='o')
		{
			countc1=countc1+1;
			if(countc1==3)
			{
				cout<<"winner:player o";
				exit(0);
			}
			
		}
		if(matrix[i][i]=='o')
		{
			countd2=countd2+1;
			if(countd2==3)
			{
				cout<<"winner:player o";
				exit(0);

			}
		}
		if(anso=='y')
		{
			anso='n';
			if(matrix[0][2]=='o'&&matrix[2][0]=='o'&&matrix[1][1]=='o')
			{
				cout<<"winner:player o";
				exit(0);
		
			}
		}
	}
	}
}
int main()
{
	while(1)
	{
	
	draw();
	input();
	playerchange();
	win();
	}
	return 0;
}
