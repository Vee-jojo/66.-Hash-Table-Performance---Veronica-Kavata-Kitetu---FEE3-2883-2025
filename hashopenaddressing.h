#ifndef HASH_OPEN_ADDRESSING_H
#define HASH_OPEN_ADDRESSING_H

#include <vector>

class HashOpenAddressing {
private:
    int capacity;
    std::vector<int> table;
    std::vector<bool> occupied;

    int hashFunction(int key) const;

public:
    HashOpenAddressing(int cap);

    void insert(int key);
    bool search(int key) const;
};

#endif
