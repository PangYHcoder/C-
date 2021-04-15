#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	const n=5;
	int a[n]={1,2,3,4,5};
	int *p=a,*q=a+n-1;
	ofstream f("reverse.txt");
	for(;p<q;p++,q--)
	{
		int t=*p;
		*p=*q;
		*q=t;
	}
	for(int i=0;i<n;i++)
	{
		f<<a[i]<<" ";
		
	}
    return 0;
}