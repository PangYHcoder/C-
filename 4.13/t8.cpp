#include<iostream>
#include<string>
using namespace std;
int n;
string name[50],num[50];
void input_data()
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<i+1<<':';
        cin>>name[i]>>num[i];
    }
}
void search(string find_name)
{
    int i;
    bool flag=false;
    for(i=0;i<n;i++)
    {
        if(name[i]==find_name)
        {
            cout<<name[i]<<"->"<<num[i]<<endl;
            flag=true;
            break;
        }
        if(flag==false)cout<<"no"<<endl;
    }
}
int main()
{
    string find_name;
    cout<<"number";
    cin>>n;
    input_data();
    cout<<"find";
    cin>>find_name;
    search(find_name);
    return 0;
}