#include<iostream>
using namespace std;
void f(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int main()
{
	int a=1,b=2;
	f(&a,&b);
	cout<<a<<" "<<b<<endl;
	return 0;
}