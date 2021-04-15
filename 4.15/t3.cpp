#include<iostream>
using namespace std;
void input(int *a,int *b)
{
	int x,y;
	cin>>x>>y;
	*a=x;*b=y;
}
void output(int *a,int *b)
{
	cout<<*a**a+*b**b<<endl;
}
int main()
{
	int a,b;
	input(&a,&b);
	output(&a,&b);
	return 0;


}