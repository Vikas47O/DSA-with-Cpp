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
    if (a> b){
        if ( a >c ){ 
            cout <<  "a " << " is largest " ; 
        } // c > a  , a > b  - >  c > a > b 
            else { cout << "c " << " is largest " ;}
       
    }  else { 
        if ( b > c ) {
            cout <<  "b " << " is largest " ; 
        }else { cout << "c " << " is largest " ; }
        } 
}
    

