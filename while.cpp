#include<iostream>
using namespace std;

// int main()
// {
//     int n,i=1;
//     cin >> n;
//     while (i<=n){
//         cout << i << endl;
//         i += 1;
//     }
//     return 0;
// }

// int main(){
//     int i = 1, n;
//     int sum = 0;
//     cout << "Enter n: ";
//     cin >> n;

//     while(i<=n){
//         sum = sum + i;
//         i = i + 1;
//     }
//     cout << sum << endl;
//     return 0;
// }
// sum of even numbers: 
// int main ()
// {
//     int i=1,n;
//     int sum = 0;
//     cout << "Enter n:";
//     cin >> n;

//     while(i<=n){
//         if(i%2==0){
//             cout << i << endl;
//             sum = sum + i;
//         }
//         i = i + 1;
//     }
//     cout << "sum: " << sum;
//     return 0;
// }
// printing celsius to farenheit conversion table --> 
// int main()
// {
//     int i=1,n;
//     cout << "Enter n : ";
//     cin >> n;
//     float cel, farh;
//     while(i<=n){
//         cout << "enter the cel: " << i << endl;
//         cin >> cel;
//         farh = cel * (9.0/5.0) + 32.0;
//         i = i + 1;
//         cout << "celcius : " << cel <<endl;
//         cout << "farenheit : " << farh << endl;
//     }   
//     return 0;
// }
// prime no question -->
int main()
{
    int n;
    int i=2;
    cin >> n;
    while (i<n){
        if(n%i==0){
            cout << "Not a prime no.";
        }
        if(n%i!=0){
            cout << "Prime no.";
            break;
        }
        i = i + 1;
    }
}

