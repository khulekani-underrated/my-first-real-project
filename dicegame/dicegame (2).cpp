#include <iostream>

using namespace std;

int main()
{
    int num;
    srand(time(NULL));
    num=(rand()%6)+1;

    switch (num)
    {
        case 1:cout << "you hit 1";
        break;

        case 2:cout << "you hit 2";
        break;

        case 3:cout << "you hit 3";
        break;

        case 4:cout << "you hit 4";
        break;

        case 5:cout << "you hit 5";
        break;

        case 6:cout << "you hit 6";
        break;
    }
    return 0;
}
