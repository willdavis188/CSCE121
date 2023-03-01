#include <iostream>
using namespace std;

void bestDonor(int sarahDonations[], int kellyDonations[]){
    int sarahCount = 0;
    bool sarahEligible = false;
    double sarahSum = 0;
    double sarahAvg = 0;
    for (int i = 0; sarahDonations[i] > 0; i++){
        sarahSum += sarahDonations[i];
        sarahCount += 1;
    }
    if ((sarahCount >= 5) && (sarahSum >= 300)){
        sarahAvg = sarahSum / sarahCount;
        sarahEligible = true;
    }

    int kellyCount = 0;
    bool kellyEligible = false;
    double kellySum = 0;
    double kellyAvg = 0;
    for (int i = 0; kellyDonations[i] > 0; i++){
        kellySum += kellyDonations[i];
        kellyCount += 1;
    }
    if ((kellyCount >= 5) && (kellySum >= 300)){
        kellyAvg = kellySum / kellyCount;
        kellyEligible = true;
    }

    cout << "sarah avg:" << sarahAvg << endl;
    cout << "kelly avg:" << kellyAvg << endl;

    if (!kellyEligible && !sarahEligible){
        cout << "nobody qualifies" << endl;
    } else if (kellyEligible && !sarahEligible){
        cout << "default kelly" << endl;
    } else if (!kellyEligible && sarahEligible){
        cout << "default sarah" << endl;
    } else if (kellyEligible && sarahEligible){
        if (sarahAvg > kellyAvg){
            cout << "sarah massive dub" << endl;
        } else if (sarahAvg < kellyAvg){
            cout << "kelly massive dub" << endl;
        } else if (sarahAvg == kellyAvg){
            if (sarahCount > kellyCount){
                cout << "sarah massive dub" << endl;
            } else if (sarahCount < kellyCount){
                cout << "kelly massive dub" << endl;
            } else {
                cout << "donation queens slayyyy" << endl;
            }
        }
    }
}


int main(){
    // int sarah[] = {100, 200, 50, 100, 100, 51, -10};
    // int kelly[] = {100, 100, 100, 100, 100, 100, 100, 100, -40};
    // cout << "sarah should win:" << endl;

    // int sarah[] = {500, 700, -100};
    // int kelly[] = {50, 100, 50, 50, 50, -100};
    // cout << "kelly should win:" << endl;

    // int sarah[] = {10, 200, 50, 10, 10, 5, -10};
    // int kelly[] = {1000, -40};
    // cout << "nobody qualifies:" << endl;

    int sarah[] = {100, 200, 50, 100, 100, 50, -10};
    int kelly[] = {10, 130, 50, 150, 70, 190, -40};
    cout << "they tie:" << endl;

    bestDonor(sarah, kelly);

    return 0;
}