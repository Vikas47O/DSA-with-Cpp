#include<iostream>

using namespace std;
int main (){

    int num ;
    int guess;
    int tries = 0 ;

    srand(time (NULL));
    num = (rand() % 100) +1 ;

    cout << " ********* Number guessing Game **********"<< '\n';
    do{
        cout << " Enter your guess ? ";
        cin >> guess ;
        tries++ ;

        if(guess < num) { 
            cout << " Your guess is too low \n";
        }
        else if (guess > num){
            cout << "Your guess is too high\n";

        }
        else {cout << " your guess is correct \n no of tries :" << tries << '\n';
        }
 } while (guess !=num );

}