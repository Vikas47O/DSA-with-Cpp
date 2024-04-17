#include <iostream>
#include <cmath>
using namespace std;
int main () {

    float x;
    float y;
    float z;


    cout << "value of base x is " ;
    cin >> x ;
    cout << "value of height is ";
    cin >> y;

    z = sqrt(pow(x,2)+ pow(y,2) );
    cout << " so, the value of hypotenuse will be " << z; 



    return 0;
}
