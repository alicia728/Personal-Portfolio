#include <iostream>

using namespace std;

class Animal
{
private:
    string name;
    string color;
    string sound;
    int age;

public:
    void setName(string);
    void setColor(string);
    void setSound(string);
    void setAge(int);
    string getName();
    string getColor();
    string getSound();
    int getAge();
};
void Animal::setName(string firstName)
{
    name = firstName;
}
void Animal::setColor(string colorType)
{
    color = colorType;
}
void Animal::setSound(string soundType)
{
    sound = soundType;
}
void Animal::setAge(int num)
{
    age = num;
}
string Animal::getName()
{
    return name;
}
string Animal::getColor()
{
    return color;
}
string Animal::getSound()
{
    return sound;
}
int Animal::getAge()
{
    return age;
}
int main()
{
    Animal cow;
    cow.setName("Duke");
    cow.setColor("brown");
    cow.setSound("moo");
    cow.setAge(5);
    cout<< "Name: "<<cow.getName()<<endl;
    cout<< "Color type: "<<cow.getColor()<<endl;
    cout<< "Sound type: "<<cow.getSound()<<endl;
    cout<< "Age: "<<cow.getAge()<<endl;

    return 0;
}
