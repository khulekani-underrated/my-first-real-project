#include <iostream>

using namespace std;

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
  }
    return 0;
}
