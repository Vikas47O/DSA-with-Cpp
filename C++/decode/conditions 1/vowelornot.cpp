#include<iostream>
using namespace std;
int main (){
    char x ;
    cout << " enter a character ";
    cin >> x ;
    int ascii = (int) x ;
    if ( ascii >= 97 && ascii <= 122 || ascii >= 65 && ascii <= 90){
        if( x == 'a' || x == 'e' || x =='i' || x == 'o' || x =='u'){
            cout << " its a vowel ";
        } else {
            cout << " its a consonant " ;
        }
    } else {
        cout << " its not a alphabet ";
    }
}