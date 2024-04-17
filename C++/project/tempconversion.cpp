#include<iostream>
using namespace std;
int main (){

double temp;
char unit;

cout << " ********** TEMPERATURE CONVERTER ***********\n";

cout << "This is a temperature unit converter of F and C " << '\n' ;
cout << " F = Fahrenheit \n" ;
cout << " C = Celsius \n";
cout << " Type the unit you want to convert to : \n";
cin >> unit ;

if ( unit == 'F' || unit == 'f'){
    cout << "Enter the value of temp in C :" << '\n';
    cin >> temp;
    temp = (1.8 * temp ) + 32 ;
    cout << temp << " F " << '\n';

}
else if (unit == 'C' || unit == 'c' ){
    cout << " Enter the value of temp in F :\n";
    cin >> temp;
    temp = (temp - 32) * (5/9) ;
    cout << temp << " C "<< '\n';


}

else if (unit == 'K' || unit == 'k'){
    cout << " Enter the value of temp in C : \n";
    cin >> temp;
    temp = temp + 273;
    cout << temp << "K " << '\n';
}
else {
    cout << " This unit is not specified and invalid ." << '\n';
}






cout << " *********************************************";


}