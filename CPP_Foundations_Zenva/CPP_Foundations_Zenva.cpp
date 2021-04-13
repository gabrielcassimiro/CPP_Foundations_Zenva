#include <iostream>

using namespace std;

void variables();

int main(int argc, char* argv[])
{
    variables();
    return 0;
}

//Basics Variables
void variables()
{
    int age = 22;
    float weight = 80.5f;
    double money = 5000.68;
    bool isActiveAccount = true;
    string name = "Gabriel Cassimiro";
    char firstLetterName = name[0];

    auto convertBoolToString = isActiveAccount ? "true" : "false";

    cout << "User: " << name << ", first letter name: " << firstLetterName << "age: " << age << ", weight: " <<
        weight << "Money: " << money << ", user account is active? "<< convertBoolToString;
}
