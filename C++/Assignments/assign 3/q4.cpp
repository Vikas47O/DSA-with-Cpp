#include<iostream>
using namespace std;
int main (){
    int x , y ;
    cin >> x >> y ;
    int a = x * y ;
    int p = 2 * ( x + y );
    if ( a > p ) cout << " a is larger " ;
    else if ( a < p ) cout << " a is smaller ";
    else cout << " both are equal";
}