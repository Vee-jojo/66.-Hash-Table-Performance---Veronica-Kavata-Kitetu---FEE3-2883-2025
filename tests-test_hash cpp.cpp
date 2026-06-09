#include <cassert>
#include <iostream>
#include "../include/HashChaining.h"
#include "../include/HashOpenAddressing.h"

int main() {
    std::cout << "Running Unit Tests...\n";

    // =========================
    // TEST 1: HashChaining
    // =========================
    HashChaining chain(10);
    int value;

    chain.insert(5);
    chain.insert(15);

    assert(chain.search(5, value) == true);
    assert(chain.search(15, value) == true);
    assert(chain.search(100, value) == false);

    std::cout << "HashChaining tests passed.\n";

    // =========================
    // TEST 2: HashOpenAddressing
    // =========================
    HashOpenAddressing open(10);

    open.insert(7);
    open.insert(17);

    assert(open.search(7) == true);
    assert(open.search(17) == true);
    assert(open.search(100) == false);

    std::cout << "HashOpenAddressing tests passed.\n";

    // =========================
    // TEST 3: Edge Case (Collisions)
    // =========================
    HashChaining edge(5);

    edge.insert(0);
    edge.insert(5);
    edge.insert(10);

    assert(edge.search(0, value) == true);
    assert(edge.search(5, value) == true);
    assert(edge.search(10, value) == true);

    std::cout << "Edge case tests passed.\n";

    // =========================
    // TEST 4: Stress Test
    // =========================
    HashChaining stress(1000);

    for (int i = 0; i < 5000; i++) {
        stress.insert(i);
    }

    assert(stress.search(0, value) == true);
    assert(stress.search(1234, value) == true);
    assert(stress.search(4999, value) == true);

    std::cout << "Stress test passed.\n";

    std::cout << "\nALL UNIT TESTS PASSED SUCCESSFULLY ✔\n";

    return 0;
}
