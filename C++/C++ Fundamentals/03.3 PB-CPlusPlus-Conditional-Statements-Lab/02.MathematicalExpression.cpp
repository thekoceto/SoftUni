#include <iostream>
#include <string>
using namespace std;

bool check (string &input);

int main (){
    string input;
    getline (cin, input);

    if (check(input)){
        cout <<  "correct" << endl;
    }else{
        cout <<  "incorrect" << endl;
    }
    return 0;
}
bool check (string &input){
    int counter = 0;
    bool check = true;
    for (int i = 0; i<input.size(); ++i){
        char ch = input[i];
        if (ch=='('||ch==')'){
            if (counter==0 && ch==')')
                return false;

            check=!check;
            ++counter;
        }
    }
    return check;
}
