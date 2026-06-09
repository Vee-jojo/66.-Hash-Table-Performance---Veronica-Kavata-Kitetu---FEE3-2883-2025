#include <iostream>
#include <chrono>
#include <unordered_map>
#include "../include/HashChaining.h"
#include "../include/HashOpenAddressing.h"

using namespace std;
using namespace std::chrono;

int main() {
    int n = 10000;

    HashChaining chaining(10007);
    HashOpenAddressing openAddr(10007);
    unordered_map<int, int> stdMap;

    // Random input
    auto start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        chaining.insert(i);
    }
    auto end = high_resolution_clock::now();
    cout << "Chaining Insert Time: "
         << duration_cast<milliseconds>(end - start).count() << " ms\n";

    start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        openAddr.insert(i);
    }
    end = high_resolution_clock::now();
    cout << "Open Addressing Insert Time: "
         << duration_cast<milliseconds>(end - start).count() << " ms\n";

    start = high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        stdMap[i] = i;
    }
    end = high_resolution_clock::now();
    cout << "unordered_map Insert Time: "
         << duration_cast<milliseconds>(end - start).count() << " ms\n";

    return 0;
}
