#include <iostream>
#include <vector>
#include <climits>

// Структура узла
struct Node {
    int key;
    int degree;
    Node* parent;
    Node* child;
    Node* left;
    Node* right;
    bool mark;

    Node(int k) : key(k), degree(0), parent(nullptr), child(nullptr), mark(false) {
        left = right = this;
    }
};

// Класс кучи Фибоначчи
class FibonacciHeap {
private:
    Node* minNode;
    int totalNodes;

public:
    FibonacciHeap() : minNode(nullptr), totalNodes(0) {}

    // Вставка узла
    void insert(int key) {/* ... */}

    // Извлечение минимального узла
    int extractMin() {/* ... */}
}
