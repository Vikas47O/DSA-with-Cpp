#include <iostream>
using namespace std;
int main(){
    int n ;
    cout << " enter any number " ;
    cin >> n ;
    int i =2 ;
    while (i < 100){
        if ( n % i == 0 ){
            cout << " this no. is not a prime no. " ;
        break ;  } 
    }
   
}

