#include<iostream>
using namespace std;
int main (){
    // ascII value 
    //a - 97 to 122 
    // A - 65 - 90 
    // 0 - 48 to 57  
    char ch;
    cout << " Enter a character : ";
    cin >> ch ;
    // to change ch value to ascii value
    // char ch = int (ch )
    char ascii = int (ch);
    if ((ascii >=97 && ascii <=122 )|| (ascii >=65 && ascii <= 90) ){
        cout << " its a alphabet character";
    }
    else{
        cout << " its not a alphabet character ";
    }
}