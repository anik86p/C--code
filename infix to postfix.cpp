//infix to postfix*****

#include<iostream>
#include<stack>
#include<string>
int pro(char);
using namespace std;
int main()
{
	string infix;
	char postfix[35];
	char ch;
	int j=0;
	cout<<"please enter your infix "<<endl;
	getline(cin,infix);
	stack<char>s1;
	s1.push('$');
	for(int i=0;infix[i]!='\0';i++)
	{
		ch=infix[i];
		if(ch=='(')
			s1.push(ch);
		else if(ch==')')
		{
			while(s1.top()!='(')
			{
				postfix[j++]=s1.top(); //delate untill (
			s1.pop();
			}
			s1.pop(); //delate (
		}
		else if(ch=='+' || ch== '-' || ch== '*' || ch== '/' || ch=='^')
		{
			if(pro(ch)<=pro(s1.top()))
			{
              postfix[j++]=s1.top();    //add high priority operator and dlate from stack;
				  s1.pop();

			}
			s1.push(ch);              //add ch to stack
		}
		else
		{
			postfix[j++]=ch;
		}

	}
	while(s1.top()!='$')
	{
		postfix[j++]=s1.top();
		s1.pop();

	}
	postfix[j]='\0';
	 cout<<"Piostfix: "<<postfix<<endl;

}
int pro(char x)
{
	if(x=='$' || x== '(')
		return 1;
	else if(x=='+' || x=='-')
		return 2;
	else if(x=='*' || x=='/')
		return 3;
	else if(x=='^')
		return 4;
}

//End of source code
