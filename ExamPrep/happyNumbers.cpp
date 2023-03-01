#include <iostream>
using namespace std;

bool isHappy(int n){
    int nextNum = 0;
    for (int i = 0; i < INT32_MAX; i++){
        while (n > 0){
            int digit = n % 10;
            nextNum += (digit*digit);
            n /= 10;
        }
        if (nextNum == 1){
            return true;
        } else if (nextNum == 4){
            return false;
        } else {
            n = nextNum;
            nextNum = 0;
        }
    }
    return false;
}

int main(){
    int num;
    cout << "enter number:" << endl;
    cin >> num;

    if (isHappy(num)){
        cout << num << " is Happy!" << endl;
    } else {
        cout << num << " is on the verge of commiting heinous war crimes :(" << endl;
    }
}