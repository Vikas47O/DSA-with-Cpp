#include<iostream>
#include<cmath>
using namespace std;
int main(){

    char op;
    float num1;
    float num2;
    float result;
    cout << " *********** CALCULATOR ***********\n ";
     
    cout << " This calucator is only functional for simple mathematical operators as shown " << '\n';
    cout << "  The operators are + - * / " << '\n';
    cout << "  Enter your operator" << '\n';
     cin >> op ;

     cout << "  Enter you number 1 \n ";
     cin >>       num1;
     
     cout << "  Enter you number 2 \n ";
     cin >>       num2; 

     switch (op){
        case '+' :
        result = num1 + num2;
        cout << result << '\n';
        break;

          case '-' :
        result = num1 - num2;
        cout << result << '\n';
        break;

          case '*' :
        result = num1 * num2;
        cout << result << '\n';
        break;

          case '/' :
        result = num1 + num2;
        cout << result << '\n';
        break;

        default:
        cout << "please enter only the operators mentioned" << '\n';
        break;
     }





      cout << "**************  SOLUTION  **************";





}