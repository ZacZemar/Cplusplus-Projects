//payroll system get paid to people ask them to login first then get choose selection online AI is trying to attack you maybe 

#include <iostream>
#include <windows.h>
#include <ctime>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

class Employees{
    public:
        char JobTitle[50];
        int salary;
        string CompanyValue;
};

class EmpZemar : Employees{ //Use this for later if you want to check them 
    public:
        char JobTitle[50] = "Software Developer";
        int salary = 85000;
        string CompanyValue = "High value"; 
};

void SelfDestruct(){

    int counter = 3;
    while (counter >= 1){
        cout << "Self Destructing in t-minus... " << counter << flush << endl;
        Sleep(1000);
        counter--;
    }
    if(counter == 0){
        cout << "Motherboard Destroyed, AI will not take over" << endl;
    }
}

void SecretCode(){

    vector<string> SecretVector;

    Sleep(1500);
    cout << "     SuperHedger HiveMind" << endl;
    cout << "How did you find this!" << endl;
    cout << "Beat me in a game and I'll let you live" << endl;
    cout << "Would you like to challenge me" << endl;

    string SecretChoice;
    cin >> SecretChoice;
    SecretVector.push_back(SecretChoice);
    if(find(SecretVector.begin(), SecretVector.end(), "Yes") !=SecretVector.end() || find(SecretVector.begin(), SecretVector.end(), "yes") !=SecretVector.end()){
        cout << "I am guessing number between 1-3, which one am I guessing?" << endl;
        static int RandomNumberGuess;
        cin >> RandomNumberGuess;

        srand(time(0));  // Initialize random number generator.
        int answer = (rand() % 3) + 1;
        for(int i = 0; i < 1; i++){
            cout << answer <<" "; 
        }

        if(RandomNumberGuess == answer){
            cout << "System self destruct" << endl;
            SelfDestruct();
            
        }
        else{
            cout << "I was guessing a " << answer << ", you failed" << endl;
            cout << "You're conciousness was taken from you and was threaded into the superhedger. You mind is now among thousands adding on to what was" << endl;
            cout << "already there" << endl;
        }


    }
    else{
        cout << "All your base belongs to us" << endl;
    }

}

void EmployeeZemarResponsibilities(){
    while(1){
        cout << "1. Check your email" << endl;
        Sleep(1300);
        cout << "2. Get with the other interns" << endl;
        Sleep(1300);
        cout << "3. Finish the project" << endl;
        Sleep(1300);
        cout << "4. Remember why you're there" << endl;
    static int ZemarResponChoice;
    
    Sleep(1500);
    cout << "What would you like to select: " << endl;
    cin >> ZemarResponChoice;
    switch(ZemarResponChoice){
        case 1:
            cout << "It's a very nice day outside maybe you can convince the boss to do your work outside" << endl;
            break;
        case 2:
            cout << "Figure out who the better intern is and question why is it not you" << endl;
            break;
        case 3:
            cout << "Undersell Overdeliver" << endl;
            break;
        case 4:
            cout << "You were picked to be here for a reason. Never forget that" << endl;
            break;
        default:
            break;
    }
    cout << string(" ", 3);
    Sleep(1500);
    if(ZemarResponChoice != 5){
        cout << "Would you like to select any other responsibilities" << endl;
        vector<string> vector2;
        string OtherChoice;
        cin >> OtherChoice;
        vector2.push_back(OtherChoice);
        if(find(vector2.begin(), vector2.end(), "Yes") != vector2.end() || find(vector2.begin(), vector2.end(), "yes") != vector2.end()){
            cout << "Good choice" << endl;
        }
        else{
            cout << "Ok then" << endl;
            break;
        }
    }
    else if(ZemarResponChoice == 5){
        SecretCode();
        break;
    }
    }
}

void EmployeeZemar(){
    vector <string> selection;
    char selectionChoice[20];
    cout << "Welcome Zemar" << endl;
    cout << "Today you have a busy schedule" << endl;
    cout << "Would you like me to auto list your responsibilities? " << endl;
    cout << "Yes or No" << endl;
    cout << string("", 1);
    cin >> selectionChoice;
    selection.push_back(selectionChoice);
    if(find(selection.begin(), selection.end(), "Yes") != selection.end() || find(selection.begin(), selection.end(), "yes") != selection.end()){
        cout << "One second... " << endl;
        Sleep(1000);
        EmployeeZemarResponsibilities();
    }
    else{
        cout << "Fine, do it yourself" << endl;
    }

}

int main(){

    vector<string> vector1;

    EmpZemar emp1;

    char user[20];
    char password[20];
    cout << string("", 1);

    cout << "       Welcome to Deloitte Solutions " << endl;

    
    cout << "User: ";
    cin >> user;
    cout << string("", 1);

    cout << "Password: ";
    cin >> password;
    vector1.push_back(user);
    vector1.push_back(password);
        if(find(vector1.begin(), vector1.end(), "user") != vector1.end() and find(vector1.begin(), vector1.end(), "password") != vector1.end()){
            // cout << emp1.JobTitle << endl;
            // cout << "$" << emp1.salary << endl;
            // cout << emp1.CompanyValue << endl;
            Sleep(1300);
            cout << "I'm on to you" << endl; //AI foreshadowing 
            Sleep(1300);
            EmployeeZemar();
        }
        else{
            int counter = 3;
            while (counter >= 1){
                vector<string> vector2;
                cout << "You have " << counter << " login attempts left" << flush << endl;
                Sleep(1000);
                char user1[20];
                char password1[20];
                cout << "User: ";
                cin >> user1;
                cout << string("", 1);

                cout << "Password: ";
                cin >> password1;
                vector2.push_back(user1);
                vector2.push_back(password1);
                if(find(vector2.begin(), vector2.end(), "user") != vector2.end() and find(vector2.begin(), vector2.end(), "password") != vector2.end()){
                    Sleep(1300);
                    cout << "I'm on to you" << endl; //AI foreshadowing 
                    Sleep(1300);
                    EmployeeZemar();
                    break;
                }
                else{
                    if(counter == 3){
                        Sleep(1000);
                        cout << "You're starting to piss me off" << endl;
                        Sleep(1000);
                    }
                    counter--;
                }

            if(counter == 0){
                cout << "The police have been notified immediately you phony" << endl;
                break;
            }
            
        }
    }
}