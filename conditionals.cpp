#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the character or the number -- ";
    cin >> ch;

    if (ch >= 'a' && ch <='z'){
        cout << "the character is in lowercase";
    }
    else if (ch >='A' && ch <='Z'){
        cout << "the character is in uppercase";
    }
    else{
        cout << "The character is numeric";
    }
    return 0;
}