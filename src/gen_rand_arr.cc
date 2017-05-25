#include <iostream>
#include <vector>
#include <time.h>
#include "stdlib.h"

using namespace std;


void randomArray(int min, int max, int n) {
    int len = max - min + 1;
    if (max < min || n > len) {
        return ;
    }

    vector<int> source;
    for (int i = min; i < len + min; i++) {
        source.push_back(i);
    }

    vector<int> result;

    for (int i = 0; i < n; i++) {
        int idx = rand() %len--;
        result.push_back(source[idx]);
        source[idx] = source[len];
        cout << result[i] << endl;
    }
}


int main() {

//    double x;
//    srand((unsigned) time(NULL));
//
//    x = rand();
//    x = x/RAND_MAX;
//    cout << x << endl;
//    return 0;
    int min = 0;
    int max = 10;
    int n = 5;

    randomArray(min, max, n);

    return 0;
}
