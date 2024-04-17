#include <iostream>
#include <vector>

using namespace std;

int main () {

    string name;
    int age;

    cout << "What's your name ?";
    getline ( cin >> ws , name );

    cout << "what's your age?"; '\n';
    cin >> age;

    cout << "Hello my name is " << name << '\n';
    cout << "I am " << age << " years old. " ;
    


    return 0;

}