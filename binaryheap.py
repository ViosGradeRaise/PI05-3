import heapq

max_heap = []

# Список с числами для работы
numbers = [50, 20, 70, 10, 90]

# Добавить отрицательные значения чисел из списка
for num in numbers:
    heapq.heappush(max_heap, -num)

# Вывести и удалить элементы в куче в порядке убывания
print("Элементы в порядке убывания:")
while max_heap:
    print(-heapq.heappop(max_heap), end=' ')
print()
