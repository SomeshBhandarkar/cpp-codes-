#include<iostream>
using namespace std;

// int main()
// {
//     int num = 1;
//     char ch = '1';

//     while(true){
//        switch(num){
//         case 1:
//             cout << "this is case 1 " <<endl;
//             break;

//         case '1' : 
//             switch (num)
//             {
//             case 1: 
//                 cout << "this is switch inside switch case " << endl;
//                 break;
            
//             default:
//                 cout << "this is default case inside switch case" << endl;
//                 break;
//             }
//         break;

//         default:
//             cout << "this is default case" << endl;
//             break;
//         }
//         exit(0); 
//     }
    
//     return 0;
// }

int main(){
    int a,b,c;
    char ch;

    cout << "Put the values of a and b: " << endl;
    cin >> a >> b;

    cout << "Enter your choice : " << endl;
    cin >> ch;

    switch(ch){
        case '+' :
            c = a + b;
            cout << "addition is: " << c << endl;
            break;

        case '-' :
            c = a - b;
            cout << "subtraction is: " << c << endl;
            break;

        case '*' :
            c = a * b;
            cout << "multiplication is: " << c << endl;
            break;

        case '/' :
            c = a / b;
            cout << "division is: " << c << endl;
            break;

        default:
            cout << "Some default case it is ! " << endl;

    }
}