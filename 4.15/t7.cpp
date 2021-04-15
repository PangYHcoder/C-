#include<iostream>
using namespace std;
int f(char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
	}
	return i;
}
int main()
{
	char s[100];
	gets(s);
	int n=f(s);
	cout<<n<<endl;
	return 0;
}