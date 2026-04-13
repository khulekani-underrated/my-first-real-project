#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int num;
    char choice;
    int tries=0;
    srand(time(NULL));


    do{
        num=(rand()%6)+1;
        cout << "you rolled: "<< num << endl;
        cout << endl;
        tries++;

        if(num==6)
        {
            cout << "correct hit" << endl;
            break;
        }
        cout << "roll again? (y/n): ";
        cin >> choice;




    }while(choice == 'y' || choice== 'Y');

    cout << "games over \n" << endl;
    cout << "number of tries: "<< tries;
    cout << endl;

    return 0;
}
