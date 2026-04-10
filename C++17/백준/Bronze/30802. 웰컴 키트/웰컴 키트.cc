#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;

    int S, M, L, XL, XXL, XXXL;
    cin >> S >> M >> L >> XL >> XXL >> XXXL;

    int T, P;
    cin >> T >> P;

    int arr[6] = {S, M, L, XL, XXL, XXXL};

    int totalTshirts = 0;

    for (int i=0; i<6; i++) {
        totalTshirts += (arr[i] + T - 1) / T;
    }

    // Same result but different approach
    // int bundles = arr[i] / T;
    // if (arr[i] % T != 0) {
    //     bundles += 1;
    // }
    // totalTshirts += bundles;


    cout << totalTshirts << '\n';

    int bundle = N / P;
    int single = N % P;

    cout << bundle << " " << single;


    return 0;
}
