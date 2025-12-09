public class BinaryHeapExample {
    public static void main(String[] args) {
        // Бинарная куча через PriorityQueue
        PriorityQueue<Integer> heap = new PriorityQueue<>();

        heap.add(50);
        heap.add(20);
        heap.add(70);
        heap.add(10);
        heap.add(90);

        // Вывести и удалить элементы в куче в порядке возрастания
        System.out.println("Элементы в порядке возрастания:");
        while (!heap.isEmpty()) {
            System.out.print(heap.poll() + " ");
        }
        System.out.println();
    }
}
