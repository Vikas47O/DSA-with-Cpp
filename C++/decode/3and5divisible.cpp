#include <iostream> 
using namespace std;
int main(){
    int n ;
    cin >> n ;
    if (n%3==0 || n%5==0){
        cout << " its divisible by 3 or 5 " ;
    }
    else {
        cout << " its not divisible by 3 or 5.";
    }
    // note if condition 1 is true, then compiler wont check for condition 2

}