#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int cube = 0;
    cout << "Enter a number: ";
    cin >> number;
    cube = number * number * number;
    if (number == 0){
        cout << "The cube of " << number << " is " << cube << "." << endl;
    }
    else if(cube / number / number == number){
        cout << "The cube of " << number << " is " << cube << "." << endl;
    }
    else{
        cout << "Error! The cube of " << number << " is not " << cube << "." << endl;
    }

}
