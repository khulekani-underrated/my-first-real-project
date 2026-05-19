#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);

int main()
{
    srand(time(0));

    char player;
    char computer;

    player = getuserchoice();
    cout << "your choice: ";
    showchoice(player);

      computer= getcomputerchoice();
      cout << "computer choice: ";
      showchoice(computer);

      choosewinner(player, computer);

    return 0;
}


char getuserchoice()
{
     char player;
    cout << "rock paper scissors game \n";

    do{
    cout << "choose one of the following:\n";

    cout << "r for rock \n";
    cout << "p for paper \n";
    cout << "s for scissors \n";
    cout << endl;
    cin >> player;
    }while(player != 'r' && player != 'p' && player !='s');




  return player;
}


char getcomputerchoice()
{
    srand(time(0));
    int num= rand()% 3+1;

    switch(num)
    {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
  return 0;
}
void showchoice(char choice)
{
  switch(choice)
{
    case 'r': cout << "rock\n";
             break;

    case 'p': cout << "paper\n";
             break;

    case 's': cout << "scissors\n";
             break;


}
}
void choosewinner(char player, char computer)
{
    switch(player)
    {
        case 'r': if(computer == 'r'){
        cout << "its a tie\n";
        }

         else if(computer == 'p'){
        cout << "its loose\n";
        }
        else if(computer == 's')
        {
            cout << "you win";
        }
        break;

        case 'p': if(computer == 'r'){
        cout << "you win\n";
        }

         else if(computer == 'p'){
        cout << "its a tie\n";
        }
        else if(computer == 's')
        {
            cout << "you loose";
        }
        break;

         case 's': if(computer == 'r'){
        cout << "you loose\n";
        }

         else if(computer == 'p'){
        cout << "you win\n";
        }
        else if(computer == 's')
        {
            cout << "its a tie";
        }
        break;
    }

}
