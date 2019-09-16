#include <iostream>;
using namespace std;

int main (){
    string firstName;
    string lastName;
    int age;
    string town;

    cin >> firstName;
    cin >> lastName;
    cin >> age;
    cin >> town;

    cout << "You are "<< firstName << " " << lastName << ", a " << age << "-years old person from " << town << ".";

}
