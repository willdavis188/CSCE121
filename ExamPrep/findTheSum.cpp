#include <iostream>
using namespace std;

int main(){
    const int n = 8;
    int list[n] = {1,2,3,4,5,6,7,8};
    int k = 8;
    int count = 0;

    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            if ((list[i] + list[j] == k) && (list[i] != list[j])){
                cout << list[i] << " " << list[j] << endl;
                count += 1;
            }
        }
    }

    if (count == 0){
        cout << "none" << endl;
    }

    return 0;
}