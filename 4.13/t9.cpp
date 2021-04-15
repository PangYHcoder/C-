#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(s[j]>s[j+1])
            {
                char t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}