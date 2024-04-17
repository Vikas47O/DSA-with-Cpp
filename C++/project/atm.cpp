#include<iostream>
#include<iomanip>
using namespace std;
    void showbalance(double balance);
    double deposit();
    double withdrawn(double balance);


int main (){
    double balance = 10000.50;
    int choice = 0 ;
    int a;

    cout << "***************************\n";
    cout << "*********** ATM ***********\n";
    cout << "***************************\n";
    cout << " Enter you account no. \n";
    cin >> a ;
    do{ 
        cout << "***************************\n";
        cout << "***************************\n";
        cout << " ENTER your choice :\n";
        cout << " 1. Show balance \n";
        cout << " 2. Deposit amount \n";
        cout << " 3. Withdrawn momey\n";
        cout << " 4. Exit \n";
        cin >> choice ;

        cin.clear();
        fflush(stdin);
        switch(choice){
            case 1: showbalance(balance);
            break;

            case 2:balance += deposit();
                showbalance(balance);

            break;
            case 3:balance -= withdrawn(balance);
                showbalance(balance);
            break;

            case 4:cout << " Thank you for visiting ";
            break;

            default: cout << " invalid choice";
    }

    }while(choice!=4);
   


}
    void showbalance(double balance){
        cout << "Your balance is " << setprecision(2) << fixed << balance << " Rs" << '\n';
    }
    double deposit(){
        double amount ;
        cout << "Enter the amount you want to deposit ?\n";
        cin >> amount ;
        if (amount <= 0){
            cout << "You can't depost in negative value. \n";
            return 0;
        }
        else{
            return amount;
        }

         
    }
    double withdrawn(double balance){
        double amount = 0;
        cout << "Enter the amount to withdrawn\n";
        cin >> amount ;
        if(amount > balance){
            cout << "You have insufficient balance.\n";
            return 0;
        }
        else if (amount<=0){
            cout << "It's an invalid amount.\n";
            return 0;
        }
        else{
            return amount;
        }
        
          
    }
