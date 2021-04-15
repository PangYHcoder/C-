#include<iostream>
using namespace std;
int main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9},i,*p;
	p=a;
	cout<<"1、"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<a[i];
	}
	cout<<endl<<"2、"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<p[i];
	}
	cout<<endl<<"3、"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<*(p+i);
	}
	cout<<endl<<"4、"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<*(a+i);
	}
	cout<<endl<<"5、"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<*p;
		p++;
	}
	cout<<endl<<"6、"<<endl;
	for(p=a;p<a+10;p++)
	{
		cout<<*p;
	}
	cout<<endl;
	return 0;
}