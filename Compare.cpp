#include <iostream>

using namespace std;

int main()
{
    int largestValue(int num1, int num2, int num3);
    cout<< "1, 2, 3"<<endl;
    cout<< "The largest value is "<< largestValue(1, 2, 3)<<endl;
    cout<< "26, 2, 14"<<endl;
    cout<< "The largest value is "<< largestValue(26, 2, 14)<<endl;
    cout<< "10, 100, 67"<<endl;
    cout<< "The largest value is "<< largestValue(10, 100, 67)<<endl;

    return 0;
}

int largestValue(int num1, int num2, int num3)
{
    return num1 > num2 ? (num1 > num2 ? num1 : num3) : (num2 > num3 ? num2 : num3);
}



