#include <iostream>
using namespace std;

bool isNumericPalindrome(int n){
    if ((n < 0) || (n != 0 && n % 10 == 0)){
        return false;
    }
    int half = 0; 
    while (n > half){
        half = (half * 10) + (n % 10);
        n /= 10;
    }
    if ((n == half) || (n == half/10)){
        return true;
    }
    return false;
    
    // long long int d = n;
    // long long int m = 0;
    // long long int z;
    // for (int i = n; i > 0; i = i/10){
    //     z = i % 10;
    //     m = m * 10 + z;
    // }
    // if(d == m){
    //     return true;
    // } else {
    //     return false;
    // }
}

int main(){
    int number;
    cout << "enter number: " << endl;
    cin >> number;

    if (isNumericPalindrome(number)){
        cout << "true" << endl;
    } else{
        cout << "false" << endl;
    }

    return 0;
}