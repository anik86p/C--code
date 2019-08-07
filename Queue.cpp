#include<iostream>
using namespace std;

const int size = 3;
char queue[size];
int front=-1, rear=-1, no_element=0;

void Enqueue(char x);
void Dequeue();
char Front();
void Display();

int main()
{
    Enqueue('A');
    Enqueue('I');
    Enqueue('U');
    Enqueue('B');
    cout<<"first element is "<<Front()<<endl;
    Dequeue();
    cout<<"first element is "<<Front()<<endl;
    Display();
    Enqueue('A');
    Dequeue();
    Dequeue();
    Dequeue();
    Display();

    return 0;
}

void Enqueue(char x)
{
    if(rear>=size-1)
    {
        cout<<"Error: Overflow. \n";
    }
    else
    {
        queue[++rear]=x;
        if(front==-1)front++;
        no_element++;
        cout<<"Enqueued : "<<queue[rear]<<endl;
    }
}

void Dequeue()
{
    if(front==-1 || front>rear)
    {
        cout<<"Error: Underflow. \n";
    }
    else
    {
        cout<<"Dequeued element is"<< queue[front]<<endl;
        queue[front++]=NULL;
        no_element--;
    }
}

char Front()
{
    return queue[front];
}

void Display()
{
    int i;
    cout<<"Queue: ";
    for(i=front; i<=rear; i++)
        cout<<queue[i]<<" ";																														
    cout<<endl;
}
//End of source code