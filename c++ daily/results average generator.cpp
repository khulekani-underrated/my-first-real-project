#include <iostream>

using namespace std;

void displaymessage(double average, string name)
{
  if (average>=0 && average<40)
    {
        cout << "you seriously need to pull up your socks "<<"("<< name <<")" ;
    }
    else if(average>=40 && average<50)
    {
        cout << "with a little effort you could be getting good grades " <<"("<< name << ")";
    }
    else if(average>=50 && average<65)
    {
        cout << "almost there, you just need to believe in yourself " <<"("<< name <<")";
    }
    else if(average>=65 && average<75)
    {
        cout << "amazing " <<"("<< name<<")";
    }
    else if (average>=75 && average<=100)
    {
        cout << "awesome, you are the best " <<"("<< name<<")";
    }
    else
    {
        cout << "score entered is invalid check it again";
    }
}

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

    if (average>=0 && average<40)
    {
        cout << "Overall You got a E";
    }
    else if(average>=40 && average<50)
    {
        cout << "Overall Got a D";
    }
    else if(average>=50 && average<65)
    {
        cout << "Overall Got a C";
    }
    else if(average>=65 && average<75)
    {
        cout << "Overall Got a B";
    }
    else if (average>=75 && average<=100)
    {
        cout << "Overall Got an A ";
    }
    else
    {
        cout << "score entered is invalid check it again \n";
    }

    cout << endl;

   displaymessage(average, name);
   cout << endl;

    return 0;
}
