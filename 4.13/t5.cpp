#include<iostream>
using namespace std;
int main()
{
    int a[3][4]={4,7,9,3,7,7,93,75,754,83,4,85};
    int m,i,j,x=0,y=0;
    m=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(m<a[i][j])
            {
                m=a[i][j];
                x=i;y=j;
            }
        }
    }
    cout<<m<<endl;
    return 0;
}