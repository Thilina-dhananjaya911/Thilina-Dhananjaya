#include <iostream>
using namespace std;
int main()
{
    int x, y;
    char char1;

    cout <<"Enter the two numbers : "<<endl;
    cin  >> x >> y ;
    cout <<"Enter the operator : ";
    cin  >> char1;

    if(char1 == '+')
    {
        cout<<"Adding two numbers : "<<x + y <<endl;

    }
    else if(char1 == '-')
    {
        cout<<"Subtract two numbers : "<<x - y <<endl;
    }
    else if(char1 == '*')
    {
        cout<<"Multiply two numbers : "<<x * y <<endl;

    }
    else if(char1 == '/')
    {
        cout<<"Divide two numbers : " << x / y << endl;

    }
    else
    {
        cout<<"Invalid operator";
    }
    return 0;
}
