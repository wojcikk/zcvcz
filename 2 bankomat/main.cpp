#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Witaj w nasztm banku!" << endl;
    cout << "Podaj PIN:";
    cin >> PIN;

    if(PIN=="2115")
    {
        cout <<"Poprawny PIN";
    }
    else
    {
        cout <<"Niepoprawny PIN";
    }

    return 0;
}
