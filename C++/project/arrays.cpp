#include<iostream>
using namespace std;

int main () {

    string cars[] = {"bmw" , "audi ", "3b"};
    int i ;
    for ( i = 0 ; i < sizeof( cars) /sizeof(string); i++ ){
        cout << cars[i] << '\n';
    }

   
    return 0;

}