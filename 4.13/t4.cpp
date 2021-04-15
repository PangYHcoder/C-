#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int a[2][3]={1,2,3,4,5,6};
	int b[3][2],i,j;
    ofstream f("m.txt");
	f<<"a:"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			f<<a[i][j];
		}
		f<<endl;
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	f<<"b:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			f<<a[i][j];
		}
		f<<endl;
	}
	return 0;


}