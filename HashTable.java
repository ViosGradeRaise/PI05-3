import java.util.HashMap;

public class HashTable {
    public static void main(String[] args) {
        HashMap<String, Integer> hashTable = new HashMap<>();

        hashTable.put("apple", 3);
        hashTable.put("banana", 5);
        hashTable.put("orange", 2);

        // Выбираем значение
        System.out.println("Number of apples: " + hashTable.get("apple"));

        // Проверяем существование ключа
        if (hashTable.containsKey("banana")) {
            System.out.println("Bananas count: " + hashTable.get("banana"));
        }

        // Удаляем ключ и значение
        hashTable.remove("orange");
        System.out.println("Updated hash table: " + hashTable);
    }
}
