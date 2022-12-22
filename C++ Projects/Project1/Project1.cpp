//Ask the user to input their height and place of origin
//Take real world data and compare them to the user inputs
//Print out whether the height is short, average, above average, or tall
//US, Angola, India

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

void MaleUSHeight(int x, string y){
    if(y == "Male" || "male"){
        if(x > 69 and x <= 73){
            cout << "you are above average height";
        }
        else if(x == 69){
            cout << "you are average height";
        }
        else if(x < 69){
            cout << "you are below average height";
        }
        else if(x >= 74){
            cout << "you are tall";
        }
    }
}

void FemaleUSHeight(int x,  string y){
    if(y == "Female" || "female"){
        if(x > 64 and x < 66){
            cout << "you are above average height";
        }
        else if(x == 64){
            cout << "you are average height";
        }
        else if(x < 64){
            cout << "you are below average height";
        }
        else if(x >= 66){
            cout << "you are tall";
        }
    }
}

void MaleIndiaHeight(int x, string y){
    if(y == "Male" || "male"){
        if(x > 66 and x <= 69){
            cout << "you are above average height";
        }
        else if(x == 66){
            cout << "you are average height";
        }
        else if(x < 66){
            cout << "you are below average height";
        }
        else if(x >= 70){
            cout << "you are tall";
        }
    }
}
void FemaleIndiaHeight(int x, string y){
    if(y == "Female" || "female"){
        if(x > 61 and x <= 64){
            cout << "you are above average height";
        }
        else if(x == 61){
            cout << "you are average height";
        }
        else if(x < 61){
            cout << "you are below average height";
        }
        else if(x >= 65){
            cout << "you are tall";
        }
    }
}

void MaleAngolaHeight(int x, string y){
    if(y == "Male" || "male"){
        if(x > 66 and x <= 69){
            cout << "you are above average height";
        }
        else if(x == 66){
            cout << "you are average height";
        }
        else if(x < 66){
            cout << "you are below average height";
        }
        else if(x >= 70){
            cout << "you are tall";
        }
    }
}

void FemaleAngolaHeight(int x, string y){
    if(y == "Female" || "female"){
        if(x > 62 and x < 64){
            cout << "you are above average height";
        }
        else if(x == 62){
            cout << "you are average height";
        }
        else if(x < 62){
            cout << "you are below average height";
        }
        else if(x >= 64){
            cout << "you are tall";
        }
    }
}


int main(){

    vector<int> vector1;
    vector<int> ::iterator iter;

    vector<string> vector2;
    vector<string> ::iterator iter2;

    vector<string> GenderVector;

    int height = 0; 
    char country[20];
    char gender[20];
    cout << "Are you male or female: " << endl;
    cin >> gender;

    cout << "What is your height in inches: " << endl;
    cin >> height;
    cout << "What is your country of origin: " << endl;
    cin >> country;

    GenderVector.push_back(gender);
    vector1.push_back(height);
    vector2.push_back(country);
    //if (std::find(v.begin(), v.end(), "abc") != v.end())
    if(find(GenderVector.begin(), GenderVector.end(), "Male") != GenderVector.end() || find(GenderVector.begin(), GenderVector.end(), "male") != GenderVector.end()){
        if(find(vector2.begin(), vector2.end(), "US") != vector2.end()){ //Could also use sets or any_of
            cout << "Based on this ";
            MaleUSHeight(height, gender);
        }
        else if(find(vector2.begin(), vector2.end(), "India") != vector2.end() || find(vector2.begin(), vector2.end(), "india") != vector2.end()){
            cout << "Based on this ";
            MaleIndiaHeight(height, gender);
        }
        else if(find(vector2.begin(), vector2.end(), "Angola") != vector2.end() || find(vector2.begin(), vector2.end(), "angola") != vector2.end()){
            cout << "Based on this ";
            MaleAngolaHeight(height, gender);
        }
    }

    if(find(GenderVector.begin(), GenderVector.end(), "Female") != GenderVector.end() || find(GenderVector.begin(), GenderVector.end(), "female") != GenderVector.end()){
        if(find(vector2.begin(), vector2.end(), "US") != vector2.end() || find(vector2.begin(), vector2.end(), "USA") != vector2.end()){ //Could also use sets or any_of
            cout << "Based on this ";
            FemaleUSHeight(height, gender);
        }
        else if(find(vector2.begin(), vector2.end(), "India") != vector2.end() || find(vector2.begin(), vector2.end(), "india") != vector2.end()){
            cout << "Based on this ";
            FemaleIndiaHeight(height, gender);
        }
        else if(find(vector2.begin(), vector2.end(), "Angola") != vector2.end() || find(vector2.begin(), vector2.end(), "angola") != vector2.end()){
            cout << "Based on this ";
            FemaleAngolaHeight(height, gender);
        }
    }

    return 0;
    
}
