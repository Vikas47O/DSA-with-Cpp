#include <iostream>
using namespace std;
int main (){
    // cout << "fint the absolute value ? \n";
    // cout << "Enter a number : ";
    // int n;
    // cin >> n;
    // if (n>0){
    //     cout << n;
    // }
    // else {
    //     cout << -n;
    // }
    //    cout << n ;

    // the value printed above is absolute but the real value or the input value is still -n 
    // alternate version : problem is with -n so we will solve that, 

    cout << "fint the absolute value ? \n";
    cout << "Enter a number : ";
    int n;
    cin >> n;
    if (n<0){
        n = -n;
    }
    //else {
    //     cout << n;
    // }
       cout << n ;
}