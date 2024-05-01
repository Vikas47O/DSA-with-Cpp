#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << " Enter a number ";
    cin >> n ;
    // if ( (n%3==0 || n%5==0) && n%15 != 0)
    // cout << "no. is divisible by 3 or 5 but not by 15  " ;
    // else {
    //     cout << " its divisible by all 3 no. " ;
    // }

  // nested if else 
  if ( n % 3 == 0 || n % 5 == 0 ){
    if (n %15 != 0) {
        cout <<  "no. is divisible by 3 or 5 but not by 15  " ;
    }
    else{ cout << "its divisible by all 3 no. " ; }
  }
  else{ cout << " divisible by neither no. " ; } 
}