//Make battleship game or nuke launching codes user to to pick row and column to launch it off

#include <iostream>
#include <ctime>
#include <windows.h>
#include <vector>
#include <algorithm>

using namespace std;

void TsarLaunchTime(){
    int counter = 5; //amount of seconds
    while (counter >= 1)
    {
        cout << "Launching in... " << counter << flush << endl;
        Sleep(1000);
        counter--;
    }
    if(counter == 0){
        cout << "Nuke Launched, you made Stalin proud" << endl;
    }
}

void TsarBombaLaunchCodes(){
    vector<string> TsarVector;
    string TsarLaunch;
    cout << "Type Exactly what you see" << endl;
    cout << "DLG2209TVX" << endl;
    cout << "Code: " << endl;
    cin >> TsarLaunch;
    TsarVector.push_back(TsarLaunch);
    if(find(TsarVector.begin(), TsarVector.end(), "DLG2209TVX") !=TsarVector.end()){
        cout << "Code sucessful, brace for impact" << endl;
        TsarLaunchTime(); 
    }
    else{
        cout << "Wrong" << endl;
    }

}

void CommunismChoice(){
    cout << "The operatives will be very happy" << endl;
    cout << "Now, I need you to tell me the launch codes" << endl;
    vector<string > CommunismVector;
    string RevealCode;
    cin >> RevealCode;
    CommunismVector.push_back(RevealCode);
    if(find(CommunismVector.begin(), CommunismVector.end(), "EO1066") !=CommunismVector.end()){
        TsarBombaLaunchCodes(); 
    }
    else{
        cout << "Order Failed" << endl;
    }
}


void LaunchTime(){
    int counter = 5; //amount of seconds
    while (counter >= 1)
    {
        cout << "Launching in... " << counter << flush << endl;
        Sleep(1000);
        counter--;
    }
    if(counter == 0){
        cout << "Nuke Launched, great job Petrov" << endl;
    }
}

int main(){

    vector<string> ReasonForNo;

    int arr[4][2] = {
        {1,2},
        {5,4},
        {6,3},
        {9,7}
    };

    cout << "You are Stanislav Petrov. You are given the opportunity to send nukes to the US" << endl;
    cout << "If you do, WW3 will soon ensue. Do you want to give them the Tsar Bomba for  the US disrespecting Joseph Stalin" << endl;
    cout << "Type 1 for yes" << endl << "Type 2 for no" << endl;

    static int decision;

    cin >> decision;
    if(decision == 1){
        cout << "Here are the launch codes" << endl;
        cout << "I want you to tell me what you see on row 2 column 1" << endl;
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 2; j++){
                cout << "\t" << arr[i][j];
            }
        cout << endl;
        }
        int flag = 0;
        static int digit_guess;
        while(flag == 0){
            cin >> digit_guess;
            if(digit_guess == 5){
                flag = 1;
                cout << "Good, now I want you to tell me what you see on row 2 column 2" << endl;
                break;
            }
            else{
                cout << "No, try again. You must not want to Nagasaki them" << endl;
            } 
        }
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 2; j++){
                cout << "\t" << arr[i][j];
            }
        cout << endl;
        }
        int flag2 = 0;
        static int digit_guess2;
        while(flag2 == 0){
            cin >> digit_guess2;
            if(digit_guess2 == 4){
                flag2 = 1;
                cout << "Good, the launch code is " << arr[1][1] << ". We are ready to launch." << endl;
                Sleep(1000);
                break;
            }
            else{
                cout << "No, try again. You must not want to Hiroshima them" << endl;
            } 
        }
        LaunchTime();
        
        
    }

    else if(decision == 2){
        string reason;
        cout << "Why did you select no?" << endl;
        cin >> reason;
        ReasonForNo.push_back(reason);

        if(find(ReasonForNo.begin(), ReasonForNo.end(), "Communism") !=ReasonForNo.end()){
            cout << "Im glad you had a change of heart" << endl;
            CommunismChoice();
        }
        else{
            cout << "Your reason is not good enough. Russian Sleep Experiment #0013527 failed" << endl;
        }
    }

    return 0;
}