#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int i,j;
    if(s2>s3)
    {
        string s=s2;s2=s3;s3=s;
    }
    if(s2>s3)cout<<s1<<' '<<s2<<' '<<s3<<endl;
    else if(s1<=s3)cout<<s2<<' '<<s1<<' '<<s3<<endl;
    else cout<<s2<<' '<<s3<<' '<<s1<<endl;
    return 0;
}