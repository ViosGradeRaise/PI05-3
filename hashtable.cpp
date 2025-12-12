#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> hashTable;

    hashTable["apple"] = 3;
    hashTable["banana"] = 5;
    hashTable["orange"] = 2;

    // Выбираем значение
    std::cout << "Apples: " << hashTable["apple"] << std::endl;

    // Проверяем существование ключа
    if (hashTable.find("banana") != hashTable.end()) {
        std::cout << "Bananas: " << hashTable["banana"] << std::endl;
    }

    // Убрать ключ и значение
    hashTable.erase("orange");

    // Вывести новую таблицу
    std::cout << "Updated hash table:" << std::endl;
    for (const auto& pair : hashTable) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
