#include<iostream>
using namespace std;
void swap(int *p1,int *p2)
{
	int t;
	t=*p1;
	*p1=*p2;
	*p2=t;
}
int main()
{
	int *p1,*p2,a,b;
	cin>>a>>b;
	p1=&a;p2=&b;
	if(a<b)swap(p1,p2);
	cout<<"max="<<a<<"min="<<b<<endl;
	return 0;
}
