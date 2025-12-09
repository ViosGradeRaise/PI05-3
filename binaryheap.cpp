#include <iostream>
#include <queue>

int main() {
    // Бинарная куча через priority_queue
    std::priority_queue<int> heap;

    heap.push(50);
    heap.push(20);
    heap.push(70);
    heap.push(10);
    heap.push(90);

    // Вывести элементы по порядку
    std::cout << "Элементы в куче:" << std::endl;
    while (!heap.empty()) {
        std::cout << heap.top() << " "; // Вывести максимальный элемент
        heap.pop();                     // Убрать его
    }
    std::cout << std::endl;

    return 0;
}
