#include<iostream>
using namespace std;
int main()
{
    int age;
    bool isstudent = true;

    cout << "Enter the your age : ";
    cin  >> age;

    bool x = (age > 18 && isstudent);
    bool y = (age < 18 || isstudent);
    bool z = !(age < 18 || isstudent);

    cout<<"( Age > 18 isstudent ) is : "<< x << endl;
    cout<<"( Age < 18 isstudent ) is : "<< y << endl;
    cout<<"( Age < 18 isstudent ) is : "<< z << endl;

    return 0;

}

