#include<iostream>
using namespace std;
int main (){
    int n ; 
    cout << " enter your marks " ;
    cin >> n ;

    // if ( n >= 91 ) {
    //     cout << " excellet ";
    // }
    // if ( n >= 81 && n <= 90){
    //     cout << " good "; 
    // }
    // if ( n > 70 && n <=80 ){
    //     cout << " average " ; 
    // } 
 
 // nested if else 
//     if ( n >= 91 ){
//         cout << "excellet ";
//     } else {
//         if (n >= 81){
//             cout << " good ";
//         }
//             else {if ( n >= 71){
//                 cout << "avg ";
//             }
//         }
//     }
// }

// else if 

if(n >= 91 ) cout << "excellent "; 
else if ( n >=81) cout << "good ";
else if ( n >=71) cout << " avg ";
else cout << "fail"; 
}