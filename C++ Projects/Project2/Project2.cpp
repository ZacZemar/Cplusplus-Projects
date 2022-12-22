//Animal guessing game
//Three clues based on whichever species you want (Bird, Mammal, Insect)
//Can get more complex (country, type of animal, big cats, location, etc)
//Command line arguments based of the three species (can make more advanced by species then type)
//Classes, CLAs, maybe a map
//maybe put a timer between each hint to see if they can guess from there
//To run, g++ Project2.cpp -o Project2 .\Project2.exe Start

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;

class Animals{
    public:
        string answer_key;
        string appearance;
        string brief_description;
        string fun_fact;
};

class Birds : public Animals{
    public:
        string appearance;
        string brief_description;
        string fun_fact;
};

class Ostrich : public Birds{
    public:
        string answer_key = "Ostrich";
        string appearance = "It is 7 feet tall";
        string brief_description = "It cannot fly";
        string fun_fact = "It has the largest eggs in the world";
};

class WoodPecker : public Birds{
    public:
        string answer_key = "Woodpecker";
        string appearance = "They have sharp beaks and have a red head";
        string brief_description = "They peck their food";
        string fun_fact = "He had his own cartoon";
};

class Dog: public Animals{
    public:
        string appearance = "They have four legs";
        string brief_description = "They bark";
        string fun_fact = "They have a really good sense of smell";

};

class Ant: public Animals{
    public:
        string appearance = "They have mandables";
        string brief_description = "They have a queen";
        string fun_fact = "They can lift 50x their body weight";

};

int main(int argc, char **argv){

    vector<string> vector1;
    vector<string> vector2;
    vector<string> vector3;

    Birds obj1;
    Ostrich Ost;
    WoodPecker Wood;
    Dog obj2;
    Ant obj3;

    string arg = argv[1];

    if(arg == "Start"){
        vector<string> AnswerVector;
        string answer;
        cout << "Pick one of the following: " << endl;
        cout << string(1, '\n');
        cout << "Bird" << endl;
        cout << "Mammal" << endl;
        cout << "Insect" << endl;
        cout << string(1, '\n');
        cout << "Type in the species you want to guess: ";
        cout << string(1, '\n');
        cin >> answer;
        AnswerVector.push_back(answer);
        
        if(find(AnswerVector.begin(), AnswerVector.end(), "Bird") !=AnswerVector.end() || find(AnswerVector.begin(), AnswerVector.end(), "bird") !=AnswerVector.end()){
            srand(time(0));  // Initialize random number generator.
            int answer1 = (rand() % 1) + 1;
            for(int i = 0; i < 1; i++){
                cout << answer1 <<" "; 
            }
            if(answer1 == 1){
                cout << "      Animal Description" << endl;
                char Ostrich_Answer[20];
                cout << string(1, '\n');
                cout << Ost.appearance << endl << Ost.brief_description << endl << Ost.fun_fact << endl;
                cout << string(1, '\n');
                cout << "What animal do you think this is? " << endl;
                cin >> Ostrich_Answer;
                vector1.push_back(Ostrich_Answer);
                if(find(vector1.begin(), vector1.end(), "Ostrich") !=vector1.end() || find(vector1.begin(), vector1.end(), "ostrich") !=vector1.end()){
                    cout << "Correct";
                }
                else{
                    int flag = 0;
                    while(flag == 0){
                        vector<string> OstrichRedemption;
                        char OstRedemp[20];
                        cout << "Wrong, try again" << endl;
                        cin >> OstRedemp;
                        OstrichRedemption.push_back(OstRedemp);
                        if(find(vector1.begin(), vector1.end(), "Ostrich") !=vector1.end() || find(vector1.begin(), vector1.end(), "ostrich") !=vector1.end()){
                            cout <<"Correct" << endl;
                            break;
                        }
                        else{
                            vector<string> GuessVector;
                            int counter = 3;
                            while (counter >= 1){
                            vector<string> vector2;
                            cout << "You have " << counter << " guesses left" << flush << endl;
                            cout <<"Wrong, try again" << endl;
                            Sleep(1000);
                            char user1[20];
                            
                        
                            cin >> user1;
                            cout << string("", 1);

                            
                            
                            vector2.push_back(user1);
                            if(find(vector2.begin(), vector2.end(), "Ostrich") != vector2.end() and find(vector2.begin(), vector2.end(), "ostrich") != vector2.end()){
                            
                                cout << "Correct" << endl;  
                            
                                break;
                            }
                            else{
                                counter--;
                            }
                            }
                            if(counter == 0){
                                cout << "The answer was " << Ost.answer_key << endl;
                                break;
                            }
                        }
                            
                }
            }
            }
            else if(answer1 == 2){
                cout << "      Animal Description" << endl;
                char WoodPeckerAnswer[20];
                cout << string(1, '\n');
                cout << Wood.appearance << endl << Wood.brief_description << endl << Wood.fun_fact << endl;
                cout << string(1, '\n');
                cout << "What animal do you think this is? " << endl;
                cin >> WoodPeckerAnswer;
                vector1.push_back(WoodPeckerAnswer);
                if(find(vector1.begin(), vector1.end(), "Woodpecker") !=vector1.end() || find(vector1.begin(), vector1.end(), "woodpecker") !=vector1.end()){
                    cout << "Correct";
                }
                else{
                    cout <<"Wrong" << endl;
                }
            }
        }
        else if(find(vector1.begin(), vector1.end(), "Mammal") !=vector1.end() || find(vector1.begin(), vector1.end(), "mammal") !=vector1.end()){
            cout << "      Animal Description" << endl;
            char Dog_Answer[20];
            cout << string(1, '\n');
            cout << obj2.appearance << endl << obj2.brief_description << endl << obj2.fun_fact << endl;
            cout << string(1, '\n');
            cout << "What animal do you think this is? " << endl;
            cin >> Dog_Answer;
            vector2.push_back(Dog_Answer);
            if(find(vector2.begin(), vector2.end(), "Dog") !=vector2.end() or find(vector2.begin(), vector2.end(), "dog") !=vector2.end()){
                cout << "Correct";
            }
        }
        else if(find(vector1.begin(), vector1.end(), "Insect") !=vector1.end() || find(vector1.begin(), vector1.end(), "insect") !=vector1.end()){
            cout << "      Animal Description" << endl;
            char Ant_Answer[20];
            cout << string(1, '\n');
            cout << obj3.appearance << endl << obj3.brief_description << endl << obj3.fun_fact << endl;
            cout << string(1, '\n');
            cout << "What animal do you think this is? " << endl;
            cin >> Ant_Answer;
            vector3.push_back(Ant_Answer);
            if(find(vector3.begin(), vector3.end(), "Ant") !=vector3.end()){
                cout << "Correct";
            }
        }

    }

    return 0;
}