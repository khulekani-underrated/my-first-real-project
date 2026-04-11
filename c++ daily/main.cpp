#include <iostream>

using namespace std;

int main()
{
    string name;
    double marks1,marks2,marks3;
    double average;

    cout << "################# results and average generator program ####################" << endl;
    cout << endl;

    cout << "enter your name: ";
    getline(cin,name);
    cout << endl;

    cout << "enter your marks separated by space: ";
    cin >> marks1 >> marks2 >> marks3 ;
    cout << endl;

    cout << "your name is: " << name << endl;
    cout << "marks 1: " << marks1 << endl;
    cout << "marks 2: " << marks2 << endl;
    cout << "marks 3: " << marks3 << endl;
    cout << endl;

    average= (marks1+marks2+marks3)/3;
    cout << "the average is : "<< average;
    cout << endl;
    return 0;
}
