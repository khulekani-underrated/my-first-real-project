#include <iostream>

using namespace std;

int main()
{
    //this is for question 1

    string firstname, lastname;
    double weight;
    int age;

    cout << "enter your firstname,lastname,age,weight separated by space: ";
    cin >> firstname >> lastname >> age >> weight;
    cout << endl;

    cout << "your firstname: " << firstname << endl;
    cout << "your lastname: " << lastname << endl;
    cout << "age: " << age << " years old" << endl;
    cout << "weight: "<< weight << " kg";





    //this is for question 2

    double score;

    cout << "enter score between 0-100: ";
    cin >> score;
    cout << endl;

    if (score>=0 && score<60)
    {
        cout << "very bad";
    }
    else if (score>=60 && score<70)
    {
        cout << "booing";
    }
    else if (score>=70 && score<80)
    {
        cout << "average";
    }
    else if(score>=80 && score<90)
    {
        cout << "well done";
    }
    else if(score>=90 && score<=100)
    {
        cout << "awesome";
    }
    else
    {
        cout << "invalid score";
    }



    //question 3

    double a=2.0,b=3.0,c=4.1,d=6.4,e=1.1,f=2.3,g=7.1;
    int h=6;
    double sum1,sum2,sum3;

    sum1=a*b;
    sum2=c*d-e;
    sum3=f/(g*h);

    cout << "2.0*3.0= "<< sum1 << endl;
    cout << "4.1*6.4-1.1= " << sum2 << endl;
    cout << "2.3/(7.1*6)= "<< sum3 << endl;


    //question 4

    int a,b;

    cout << "enter 2 intergers separated by space: ";
    cin >> a >> b;
    cout << endl;

    cout<< "the maximum of the 2 is: " << max(a,b);

    //question 5

    int num;

    cout << "enter number between 0-7: ";
    cin >> num;
    cout << endl;

    switch(num)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        case 7:cout << "number in range.";
        break;

        default:
            cout << "number not in range.";

    }



    return 0;
}
