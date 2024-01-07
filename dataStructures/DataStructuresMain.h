//
// Created by rikpe on 14/12/2023.
//

#ifndef BEGINNER_DATASTRUCTURESMAIN_H
#define BEGINNER_DATASTRUCTURESMAIN_H

#include <cassert>
#include "DoublyLinkedList.h"

class DataStructuresMain {
public:
    void runDoubleLinkedList() {
        DoublyLinkedList<int> list;

        // Test adding items
        list.Add(1);
        list.Add(2);
        list.Add(3);
        list.Print(); // Expected output: 1 2 3

        // Test head and tail
        int headValue = 0;
        int tailValue = 0;
        assert(list.GetHead(headValue) && headValue == 1); // Expect head to be 1
        assert(list.GetTail(tailValue) && tailValue == 3); // Expect tail to be 3

        // Test removal
        assert(list.Remove(2)); // Expect removal to succeed
        list.Print(); // Expected output: 1 3
        assert(!list.Remove(4)); // Expect removal to fail (value not in list)

        // Test head and tail after removal
        assert(list.GetHead(headValue) && headValue == 1); // Expect head to still be 1
        assert(list.GetTail(tailValue) && tailValue == 3); // Expect tail to still be 3

        // Test removal of head and tail
        assert(list.Remove(1)); // Expect removal of head to succeed
        assert(list.Remove(3)); // Expect removal of tail to succeed
        list.Print(); // Expected output: (no output, list should be empty)

        // Test head and tail on an empty list
        assert(!list.GetHead(headValue)); // Expect false, list is empty
        assert(!list.GetTail(tailValue)); // Expect false, list is empty

        std::cout << "All tests passed successfully." << std::endl;
    }
};


#endif //BEGINNER_DATASTRUCTURESMAIN_H
