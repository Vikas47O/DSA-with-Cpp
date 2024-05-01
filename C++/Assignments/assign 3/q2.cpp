#include<iostream>
using namespace std;
int main (){
    int r;
    cin >>r ;
    // area = 3.14 *r *r 
    // circumference = 2 * 3.14 *r 
    int a = 3.14 *r *r ;
    int c = 2 * 3.14 *r ;
    if ( a > c ) cout << " area is larger ";
    else if (a == c )  cout << " both area and circumference is equal " ; 
    else cout << " cirference is larger" ;
}