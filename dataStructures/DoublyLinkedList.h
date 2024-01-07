//
// Created by rikpe on 14/12/2023.
//

#ifndef BEGINNER_DOUBLYLINKEDLIST_H
#define BEGINNER_DOUBLYLINKEDLIST_H


#include <iostream>

template<typename T>
struct Node {
    T value;
    Node* next;
    Node* prev;

    Node(T val) : value(val), next(nullptr), prev(nullptr) {}
};

template<typename T>
class DoublyLinkedList {
public:
    Node<T>* head;
    Node<T>* tail;

    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    ~DoublyLinkedList() {
        while (head != nullptr) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void Add(T value) {
        Node<T>* newNode = new Node<T>(value);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    bool Remove(T value) {
        Node<T>* temp = head;
        while (temp != nullptr) {
            if (temp->value == value) {
                if (temp->prev != nullptr) temp->prev->next = temp->next;
                if (temp->next != nullptr) temp->next->prev = temp->prev;
                if (temp == head) head = temp->next;
                if (temp == tail) tail = temp->prev;

                delete temp;
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    bool GetHead(T& value) {
        if (head == nullptr) return false;
        value = head->value;
        return true;
    }

    bool GetTail(T& value) {
        if (tail == nullptr) return false;
        value = tail->value;
        return true;
    }

    void Print() const {
        Node<T>* temp = head;
        while (temp != nullptr) {
            std::cout << temp->value << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

#endif //BEGINNER_DOUBLYLINKEDLIST_H
