#include<iostream>
using namespace std;
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2],i,j;
	cout<<"a:"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	cout<<"b:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;


}