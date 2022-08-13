// #include<iostream>
// using namespace std;

// int power(){
//     int a, b;
//     cin >> a >> b;

//     int ans = 1;

//     for(int i = 1; i<=b; i++){
//         ans = ans * a;
//     }
//     return ans;
// }

// int main()
// {
//     int answer = power();
//     cout << "Answer is: " << answer << endl;

//     answer = power();
//     cout << "Answer is: " << answer << endl;

//     answer = power();
//     cout << "Answer is: " << answer << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void evenOrOdd(int n){
//     if(n%2==0){
//         cout << "Even " << endl;
//     }
//     else{
//         cout << "odd" <<endl;
//     } 
// }
// int main()
// {
//     int n;
//     cin >> n;
//     evenOrOdd(n);
//     return 0;
// }

#include<iostream>
using namespace std;
int evenOrOdd(int n){
    if(n&1){
        return 0;
    }
    return 1;
}
int main()
{  
    int n ;
    cin >> n;
    evenOrOdd(n);
    return 0;
}