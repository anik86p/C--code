//the Validity checking operation of an arithmetic expression using stack**

#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

char stack[100];
int top = -1;
void pop();
void push(char);
char checkStack();
int main(){

    int i;
    char str[100];
   cout<<"Please enter the expretion"<<endl;
    gets_s(str);

    for(i = 0; i < strlen(str); i++)
	{
        if(str[i] == '(')
			push(str[i]);
        else if(str[i] == '{')
			push(str[i]);
        else if(str[i] == '[')
			push(str[i]);

        if(str[i] == ')')
		{
            if(checkStack() == '(')pop();
            else{
            cout<<"Thats a invalid expration"<<endl;
                return 0;
            }
        }
        else if(str[i] == '}')	
		{
            if(checkStack() == '{')pop();
            else{
                 cout<<"Thats a invalid expration"<<endl;
                return 0;
            }
        }
        else if(str[i] == ']'){
            if(checkStack() == '[')pop();
            else{
                 cout<<"Thats a invalid expration"<<endl;
                return 0;
            }
        }
    }
    if(top == -1)
		cout<<"valid expration "<<endl;
    else 
		 cout<<"Thats a invalid expration"<<endl;
    return 0;
}

void push(char a){
    stack[++top] = a;
}
void pop(){
    if(top == -1){
        cout<<"Thats a invalid expration"<<endl;
        return;
    }
    else --top;
}
char checkStack(){

    return stack[top];
}
//End of source code