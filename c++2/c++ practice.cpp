

#include <iostream>
using namespace std;

/*class BankAccount {
private:
    double balance;
    string ownerName;

public:
    BankAccount(string name) {
        ownerName = name;
        balance = 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: R" << amount << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: R" << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }

    void displayBalance() {
        cout << "Account owner: " << ownerName << endl;
        cout << "Current balance: R" << balance << endl;
    }
};*/

int main() {
   /* string name;
    cout << "Enter your name: ";
    getline(cin, name);

    BankAccount myAccount(name);

    int choice;
    double amount;

    do {
        cout << "\n### BANK MENU ###" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter amount to deposit: R";
                cin >> amount;
                myAccount.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: R";
                cin >> amount;
                myAccount.withdraw(amount);
                break;
            case 3:
                myAccount.displayBalance();
                break;
            case 4:
                cout << "Thank you for banking with us!" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);*/




/*
int main()
{
  int row;
  int column;
  char symbol;

  cout << "enter row: ";
  cin >> row;
  cout << endl;

  cout << "enter column: ";
  cin >> column;
  cout << endl;

  cout << "enter symbol: ";
  cin >> symbol;
  cout << endl;

  for (int i=1;i<=row;i++)
  {
      for(int j=1;j<=column;j++)
      {
          cout << symbol << " ";
      }
      cout << endl;
  }*/

  string questions[]={"1. what year was c++ created?: ",
                       "2. who invented c++?: ",
                       "3. what is the predecessor of c++?: ",
                       "4. is the earth flat?: "};

  string options[][4]= {{"a. 1969","b. 1975", "c. 1985", "d. 1989"},
                      {"a. Guido Van Rossum","b. Bjarne stroustrup","c. john carmen","d. albert newton"},
                      {"a. c","b. c+","c. c--","b++"},
                      {"a. yes","b. no","c. sometimes","d. maybe"}};

  char answerkey[] = {'c','b','a','b'};

  int size= sizeof(questions)/sizeof(questions[0]);
  char guess;
  int score;

  for(int i=0; i< size; i++)
  {
      cout << questions[i]<< endl;

      for(int j=0; j< sizeof(options[i])/sizeof(options[i][0]);j++)
      {
          cout << options[i][j] << '\n';
      }

      cin >> guess;
      guess = toupper(guess);

      if(guess == answerkey[i])
        {
            cout <<"correct\n";
            score++;
        }
        else
        {
            cout << "wrong\n";
            cout << "answer: "<< answerkey[i]<< '\n';
        }
  }


 cout << "results\n";
 cout << "correct guesses: "<< score<< '\n';





    return 0;
}
