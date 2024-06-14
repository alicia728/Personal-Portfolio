#include <iostream>

using namespace std;

int totalNumberOfLegs(int totalChicken, int totalCow, int totalSanzuwu)
{
    int total = 0;
    totalChicken = 2 * totalChicken;
    totalCow = 4 * totalCow;
    totalSanzuwu = 3 * totalSanzuwu;
    total = totalChicken + totalCow + totalSanzuwu;

    return total;
}
int main()
{
    int numberOfChickens, numberOfCows, numberOfSanzuwu;
    cout<< "Enter the number of chickens "<<endl;
    cin>>numberOfChickens;
    cout<< "Enter the number of cows "<<endl;
    cin>>numberOfCows;
    cout<< "Enter the number of sanzuwu "<<endl;
    cin>>numberOfSanzuwu;
    cout<< totalNumberOfLegs(numberOfChickens, numberOfCows, numberOfSanzuwu);

    return 0;
}

