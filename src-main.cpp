#include <iostream>
#include "../include/HashChaining.h"
#include "../include/HashOpenAddressing.h"

using namespace std;

int main() {
    // Create hash tables
    HashChaining chaining(10);
    HashOpenAddressing openAddr(10);

    cout << "=== DEMO: Hash Tables ===\n\n";

    // 🔹 Insert values
    cout << "Inserting values: 5, 15, 25\n";

    chaining.insert(5);
    chaining.insert(15);
    chaining.insert(25);

    openAddr.insert(5);
    openAddr.insert(15);
    openAddr.insert(25);

    // 🔹 Search values
    cout << "\nSearching for values...\n";

    int value;
    if (chaining.search(15, value))
        cout << "Chaining: Found key 15\n";
    else
        cout << "Chaining: Key 15 not found\n";

    if (openAddr.search(15))
        cout << "Open Addressing: Found key 15\n";
    else
        cout << "Open Addressing: Key 15 not found\n";

    // 🔹 Search for missing value
    cout << "\nSearching for key 100...\n";

    if (chaining.search(100, value))
        cout << "Chaining: Found key 100\n";
    else
        cout << "Chaining: Key 100 not found\n";

    if (openAddr.search(100))
        cout << "Open Addressing: Found key 100\n";
    else
        cout << "Open Addressing: Key 100 not found\n";

    cout << "\n=== Demo Complete ===\n";

    return 0;
}
