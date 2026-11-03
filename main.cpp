#include <iostream>
#include <string>
using namespace std;

// f(x) = x^2 +2
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s , int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }

    void printDetails()
    {
        cout << "The name of our 1 employee is " << this->name << " and his salary is " << this->salary << " dollars " << endl;
    }

    void getsecretPassword()
    cout<<"The secret password of employee is " <<this->secretPasswor;

private:
    int secretPassword;
};

class programmer : public Employee
{
    public:
    int errors;
}

int main()
{
    // cout<<"hello world"<<endl;
    // cout<<"next";
    // int a,b,c;
    // short _sabcvng = 9;
    // cout<<_sabcvng;

    // camelCase notation
    //  int marksInmaths=83;
    //  cout<<"The marks of the student in maths is " <<marksInmaths;

    // short a;
    // int b = 56;
    // long c;
    // long long d;
    // float const score = 45.23;   // upto two decimal
    // double score2 = 45.32;
    // long double score3 = 423.356;
    ////score = 41;
    // b = 90;
    // cout<<"The score is " <<score;

    // string harry = "harry"

    // int a,b;
    // cout<<"Enter first number"<<endl;
    // cin>>a;

    // cout<<"Enter second number"<<endl;
    // cin>>b;

    // cout<<"the a + b is "<<a + b<<endl;
    // cout<<"the a - b is "<<a - b<<endl;
    // cout<<"the a * b is "<<a * b<<endl;
    // cout<<"the a / b is "<<(float) a / b<<endl;

    // int age;
    // cout << "enter your age " << endl;
    // cin >> age;
    

    // switch (age)
    // {
    // case 12:
    //     cout << "you are 12 years old  ";
    //     break;
    // case 18:
    //     cout << "you are 18 years old ";
    //     break;

    // default:
    //     cout << "you is neither 12 nor 18 years old ";
    //     break;
    // }

    // if (age>150 || age <4)
    // {
    //     cout<<"Invalid age ";
    // }

    // else if (age>=18) {
    //     cout<<"you can vote ";

    // }

    // else
    // {
    //     cout<<"you cannot vote ";

    // }

    // int index = 0;
    // while(index<34)
    // {
    //     cout<<"We are index number "<<index<<endl;
    //     index = index + 1;

    // }

    // do {

    //     cout<<"We are at index number "<<index<<endl;
    //     index = index + 1;

    // } while(index < 33);

    // for (int i = 1; i < 34; i++)
    // {
    //     cout<<"The value of i is "<<i<<endl;
    // }

    // int a,b;
    // cout<<"Enter first number"<<endl;
    // cin>>a;

    // cout<<"Enter second number"<<endl;
    // cin>>b;
    // cout<<"The function returned "<<sum(a,b);

    //     int arr[] = {1,3,6};
    // //   array index 0 1 2

    //     cout<<arr[1];
    // int marks[6];

    // for (int i = 0; i < 6; i++)
    // {
    //   cout<<"Enter the marks of "<<i<<"th student"<<endl;
    //   cin>>marks[i];
    // }

    // for (int i = 0; i < 6; i++)
    // {
    //   cout<<"Marks of "<<i<<"th student is "<<marks[i]<< endl;

    // }

    //    int arr2d[2][3] = {
    //      {1,2,3},
    //      {4,5,6}
    //    };
    //     for (int i = 0; i < 2; i++)
    //     {
    //         for (int j = 0; j < 3; j++)
    //         {
    //             cout<<"The value at "<<i<<" "<<j<<" is " <<arr2d[i][j]<<endl;
    //         }

    //     }

    //   int a =343;
    //   float b = 87.94
    //   cout<<(float) a/34 <<endl;

    //   cout<<(int) b ;

    //  string name = "Harry";

    //  cout<<"The name is "<<name<<endl;
    //  cout<<"The length of name is "<<name.length()<<endl;
    //  cout<<"The name is "<<name.substr(0,3)<<endl;
    //  cout<<"The name is "<<name.substr(2,3);

Employee har("Harry constructor", 344 , 3355);
    // har.name = "Harry";
    // har.salary = 100;
    har.printDetails();
    har.getsecretPassword();
    // cout<<har.secretPassword;
    // cout<<"The name of our 1 employee is "<< har.name << " and his salary is " << har.salary<< " dollars " <<endl;

    return 0;
}
