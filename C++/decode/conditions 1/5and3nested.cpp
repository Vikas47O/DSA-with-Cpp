#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << " Enter a number ";
    cin >> n ;

    if ( n % 3==0 ){
        if ( n % 5 ==0){
            cout << "This no. is divisible by 3 and 5 or 15 "; 
        } else {
            cout << "not divisible by 3 and 5  ";
        } 
    }
    else {
            cout << "not divisible by 3 and 5  ";
        } 
}