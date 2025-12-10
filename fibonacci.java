import java.util.ArrayList;
import java.util.List;

class FibonacciHeap {
    private Node minNode;
    private int nNodes;

    private static class Node {
        int key;
        int degree;
        Node parent;
        Node child;
        Node left;
        Node right;
        boolean mark;

        Node(int key) {
            this.key = key;
            this.degree = 0;
            this.parent = null;
            this.child = null;
            this.left = this;
            this.right = this;
            this.mark = false;
        }
    }

    public FibonacciHeap() {
        minNode = null;
        nNodes = 0;
    }

    // Вставка узла с определённым ключом
    public void insert(int key) { /* ... */ }

    // Извлечение наименьшего узла
    public Integer extractMin() { /* ... */ }
