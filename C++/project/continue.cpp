#include <iostream>
using namespace std;
int main(){
    int i ;
    i = 1 ;
    while ( i <= 5 ){
        if(i==3){
            i++;
            continue;
        }
        cout << i++;
    }
}

