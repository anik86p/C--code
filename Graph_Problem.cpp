//Traveling a graph
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<queue>
using namespace std;
void creatgraph();
void visiting(int x);
void bfs_traavel();
#define MAX 100
#define initial 1
#define waiting 2
#define finished 3
int adj[MAX][MAX],state[MAX];
int origin,destin,n,edges,start;
queue<int>xx;
int main()
{
    creatgraph();
    bfs_traavel();
    return 0;
}
void bfs_traavel()
{
    int l=0;
    for(l=0;l<n;l++)
    {
        state[l]=initial;
    }

    cout<<"enter start virtices"<<endl;
    cin>>start;
    visiting(start);


}
void visiting(int x)
{
    xx.push(x);
    state[x]=waiting;
    while(!xx.empty())
    {
        x=xx.front();
        cout<<x;
        xx.pop();
        state[x]=finished;
        for(int i=0;i<n;i++)
        {
            if(adj[x][i]==1 && state[i]==initial)
            {
                xx.push(i);
                state[i]=waiting;
            }
        }
        cout<<endl;
    }



}
void creatgraph()
{
    cout<<"please enter how many vertices"<<endl;
    cin>>n;
    edges=n*(n-1);
    for( int count=1; count<=edges; count++)
    {
        printf("Enter edge %d( -1 -1 to quit ) : ",count);
        scanf("%d %d",&origin,&destin);

        if((origin == -1) && (destin == -1))
            break;

        if(origin>=n || destin>=n || origin<0 || destin<0)
        {
            printf("Invalid edge!\n");
            count--;
        }
        else
        {
            adj[origin][destin] = 1;
        }
    }







