#include <iostream>
#include <algorithm>

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
    double grade;
    double average;
    int student=0;
    double classtotal=0;
    string next="yes"; //start with yes to enter the loop
    string bestname;
    double class_highest = -1;

    cout << "################# results and average generator program ####################" << endl;
    cout << "press enter to use.... \n";
    cout << endl;


do{

     student++;

     cout <<"[student number " << student <<"]"<< endl;
     cout << "enter your name: ";
    getline(cin,name);
    cout << endl;

    cout << "enter your marks separated by space: ";
    cin >> marks1 >> marks2 >> marks3 ;
    cout << endl;

    cout << "your name is: " << name << endl;
    cout << "marks 1: " << marks1 << " %"<< endl;
    cout << "marks 2: " << marks2 << " %"<< endl;
    cout << "marks 3: " << marks3 <<" %"<< endl;
    cout << "your highest mark is: "<< max({marks1,marks2,marks3}) << endl;
    cout << "your lowest mark is: "<< min({marks1,marks2,marks3});
    cout << endl;

    average= (marks1+marks2+marks3)/3;
    cout << "the average is : "<< average << " %";
    classtotal=classtotal+average;
    cout << endl;
    cout << endl;

    //check if this student has the highest average so far
    if (average>class_highest)
    {
        class_highest=average;
        bestname =name;
    }
    cout << endl;

    //grade letter

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
    cout << endl;

    // displaying personalised message

   displaymessage(average, name);
   cout << endl;
   cout << endl;

   if (marks1<50 && marks2<50 && marks3<50)
   {
       cout << "your marks for each module should be atleast 50 and above. you failed";
   }
   else if(marks1<50 && marks2>=50 && marks3>=50)
   {
       cout << "improve results for marks1";
   }
   else if(marks1<50 && marks2<50 && marks3>=50)
   {
       cout << "improve results for marks1 and marks 2";
   }
   else if(marks1>=50 && marks2>=50 && marks3<50)
   {
       cout << "improve results for marks3";
   }
    else if(marks1>=50 && marks2<50 && marks3<50)
   {
       cout << "improve results for marks2 and marks3";
   }
    else if(marks1>=50 && marks2<50 && marks3>=50)
   {
       cout << "improve results for marks2";
   }
    else if(marks1<50 && marks2>=50 && marks3<50)
   {
       cout << "improve results for marks1 and marks 3 \n"<< endl;
   }


   else
   {
       cout << "keep up the good work \n"<< endl;
   }
   cout << endl;
   cout << "############################################################################";
   cout << endl;
   cout << endl;

   //ask if user wants to continue
   cout << "do you want to enter another student? (yes/no):";
   cin >> next;
   cout << endl;
    cin.ignore(); //crear input buffer before getting name


}while(next=="yes" || next=="Yes" || next=="YES");
//LOOP WHILE ANSWER IS YES
cout << "the number of student results recorded: " << student << endl;
cout << endl;

double classaverage=classtotal/student;
cout << "the class average is: "<< classaverage << endl;
cout << endl;
cout << "thank you for using the grade system \n"<< endl;


cout << endl;

cout << "the class highest is: "<< class_highest << " %\n" ;
cout << "achieved by: "<< bestname << endl;
cout << endl;







    return 0;
}
