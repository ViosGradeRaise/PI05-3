hash_table = {}

hash_table["apple"] = 3
hash_table["banana"] = 5
hash_table["orange"] = 2

# Выбираем значение
print("Number of apples:", hash_table["apple"])

# Проверяем существование ключа
if "banana" in hash_table:
    print("Bananas count:", hash_table["banana"])

# Удаляем ключ и значение
del hash_table["orange"]
print("Updated hash table:", hash_table)
