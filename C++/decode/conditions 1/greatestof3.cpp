#include<iostream>
using namespace std;
int main(){
    int a , b , c ;
    cout << "Enter 1st no. ";
    cin >> a ;
    cout << "Enter 2nd no. ";
    cin >> b;
    cout << "Enter 3rd no. ";
    cin >> c;
    if (a> b && a > c){
        cout << "a " << " is largest " ;
    }
    if (b >a && b > c){
        cout << "b "  << " is largest" ;
    }
    if (c >a && c > b){
        cout << "c "  << " is largest" ;
    }
    // similarly other case

}