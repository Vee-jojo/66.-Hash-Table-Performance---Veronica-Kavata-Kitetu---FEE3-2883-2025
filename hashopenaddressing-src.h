#include "../include/HashOpenAddressing.h"

HashOpenAddressing::HashOpenAddressing(int cap) {
    capacity = cap;
    table.resize(capacity);
    occupied.resize(capacity, false);
}

int HashOpenAddressing::hashFunction(int key) const {
    return key % capacity;
}

void HashOpenAddressing::insert(int key) {
    int index = hashFunction(key);

    while (occupied[index]) {
        index = (index + 1) % capacity;
    }

    table[index] = key;
    occupied[index] = true;
}

bool HashOpenAddressing::search(int key) const {
    int index = hashFunction(key);
    int start = index;

    while (occupied[index]) {
        if (table[index] == key) return true;
        index = (index + 1) % capacity;
        if (index == start) break;
    }
    return false;
}
