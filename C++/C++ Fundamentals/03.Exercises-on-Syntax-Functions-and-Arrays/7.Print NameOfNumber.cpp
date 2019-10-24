#include<iostream>
#include <vector>
using namespace std;


void printDigitToText(int digit, bool isOneDigit)
{
    if (isOneDigit){
        switch(digit){
			case 1: cout<<"one ";  break;
			case 2: cout<<"two ";  break;
			case 3: cout<<"three ";break;
			case 4: cout<<"four "; break;
			case 5: cout<<"five "; break;
			case 6: cout<<"six ";  break;
			case 7: cout<<"seven ";break;
			case 8: cout<<"eight ";break;
			case 9: cout<<"nine "; break;
        }
    }
    else{
        switch(digit){
            case 0: cout<<"";          break;
            case 10: cout<<"ten";      break;
            case 11: cout<<"eleven";   break;
            case 12: cout<<"twelve";   break;
            case 13: cout<<"thirteen"; break;
            case 14: cout<<"fourteen"; break;
            case 15: cout<<"fifteen";  break;
            case 16: cout<<"sixteen";  break;
            case 17: cout<<"seventeen";break;
            case 18: cout<<"eighteen"; break;
            case 19: cout<<"nineteen"; break;

            case 20: cout<<"twenty " ; break;
            case 30: cout<<"thirty " ; break;
            case 40: cout<<"fourty ";  break;
            case 50: cout<<"fifty ";   break;
            case 60: cout<<"sixty ";   break;
            case 70: cout<<"seventy "; break;
            case 80: cout<<"eighty ";  break;
            case 90: cout<<"ninty ";   break;
        }
    }
}
std::vector <int> readInput(int number)
{
    std::vector<int> vec { 0, 0, 0, 0 };
    int i = 0;

    while(number>0)
    {
        vec[i] = number%10;
        number /=10;
        i++;
    }

    return vec;
}

int main()
{
	int num;
	cin>>num;

    std::vector<int> vec;

    vec = readInput(num);


	return 0;
}
