#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1;
    int num2;
    char choice;
    cin>>num1>>num2>>choice;
    switch(choice)
    {
        case '+':
            cout<<num1+num2;
            break;
        case '-':
            cout<<num1-num2;
            break;
        case '*':
            cout<<num1*num2;
            break;
        case '/':
            cout<<num1/num2;
            break;         
    }
}
