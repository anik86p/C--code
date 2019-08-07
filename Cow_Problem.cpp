Cow problem..........
#include <iostream>
#include <algorithm>
using namespace std;
class cow{
public:
    int u;                //number of cow
    int p;                //price
    double up;            //unit price
    void input();
}s[10];
void cow::input()
{
    for(int i=0; i<5; i++)
    {
        cin>>s[i].u>>s[i].p;
        s[i].up=(double)s[i].p/s[i].u;
    }
}
bool cmp(cow A,cow B)
{
    if(A.up<B.up)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int k=30;
    int n=k;
    double sum=0;
    s[10].input();
    sort(s,s+5,cmp);
    /**for(int i=0; i<5; i++)
    {
        cout<<s[i].u<<" "<<s[i].p<<" "<<s[i].up<<endl;
    }**/
    int j=0;
    while(k>s[j].u && j<5)
    {
        sum+=s[j].p;
        k-=s[j].u;
        ++j;
    }
    if(k>0)
    {
        if(j>=5)
        {
            cout<<"I can manage only: "<<n-k<<" cows at price:"<<sum<<" BDT."<<endl;
            return 0;
        }
        else
        {
            sum+=s[j].up*k;
        }
    }
    cout<<"Total price is: "<<sum<<endl;
    return 0;
}