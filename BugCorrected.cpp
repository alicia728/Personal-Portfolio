#include <iostream>

using namespace std;

int main()
{
    string name, surname;
    cout<< "Enter your name "<<endl;
    getline(cin, name);
    cout<< "Enter your surname "<<endl;
    cin>>surname;
    cout<< "Hi, "<<name<<" "<<surname<<endl;
    return 0;
}
