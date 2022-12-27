#include<iostream>
#include<math.h>
using namespace std;

int main(){
//*****************DECIMAL TO BINARY***********88
    int n;
    cout<<"enter a number"<<endl;
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans= (bit * pow(10, i) ) + ans;
        n = n >> 1;
        i++;
    }
    cout<<"Answer is "<< ans << endl;

//*****************BIANARY TO DECIMAL************
// int n;
//     cout<<"enter a number"<<endl;
//     cin >> n;
//     int ans = 0;
//     int i = 0;
//     while (n != 0)
//     {
//         int digit = n%10;
//         ans= (digit * pow(2, i) ) + ans;
//         n = n/10;
//         i++;
//     }
//     cout<<"Answer is "<< ans << endl;
//     return 0;
    
}s