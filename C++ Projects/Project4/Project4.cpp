//Creating an atm get options to select withdraw deposit show what you have enter name account number and its type into the system
//Update it

#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>
#include <ctime>

using namespace std;

class Bank{
    private:
        char name[10];
        int AccNum;
        char type[10];
        int withdraw;
        int deposit = 0;
        int total = 0;
    public:
        void ChoiceOne(){
            cout << "Enter your name, account number, and account type" << endl;
            cin >> name;
            cin >> AccNum;
            cin >> type;
            cout << name << " " << AccNum << " " << type << endl;
        }
        void ChoiceTwo(){
            cout << "How much money do you want to withdraw? " << endl;
            cin >> withdraw;
            cout << name << " withdrew " << withdraw << " dollars " << endl; 
        }
        void ChoiceThree(){
            cout << "How much money do you want to deposit? " << endl;
            cin >> deposit;
            cout << name << " deposited " << deposit << " dollars " << endl;
        }
        void ChoiceFour(){
            total += deposit + withdraw;
            cout << total << endl;
        }

};



int main(){

    while(1){
        cout << "           Welcome to PNC Bank" << endl;
        cout << "1. Enter name, account number, and account type" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Deposit" << endl;
        cout << "4. Show total balance" << endl;
        cout << string(" ", 1);

        cout << "What would you like to select: " << endl;
        
    Bank opt1;
    
    static int choice;

    cin >> choice;

    switch(choice){
        case 1:
            opt1.ChoiceOne();
            break;
        case 2:
            opt1.ChoiceTwo(); //Make sure they select option 1 first  
            break;
        case 3:
            opt1.ChoiceThree(); //function call 
            break;
        case 4:
            opt1.ChoiceFour(); //function call 
            break;
        default:
            cout << "Not a valid selection" << endl;
    }
    }


    return 0;
}