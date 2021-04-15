#include<iostream>
using namespace std;
int main()
{
    char d[][5]={{' ',' ','*',},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*' }};
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<<d[i][j];
        }
        cout<<endl;
    }
    return 0;
}