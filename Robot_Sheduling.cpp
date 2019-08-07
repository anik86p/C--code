robot sheduling...

#include <iostream>
using namespace std;
int a[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
void input()
{
    int start;
    int end;
    for(int i=0; i<7; i++)
    {
        cin>>start>>end;
        a[start]++;
        a[end]--;
    }
}
int main()
{
    int res=0,c=0;
    input();
    for(int i=8; i<18; i++)
    {
        res+=a[i];
        if(res>c)
        {
            c=res;
        }
    }
    cout<<c;
}
