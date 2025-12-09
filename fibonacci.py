# реализация через классы и кучи
class FibonacciNode:
    def __init__(self, key):
        self.key = key
        self.degree = 0
        self.mark = False
        self.parent = None
        self.child = None
        self.left = self
        self.right = self

class FibonacciHeap:
    def __init__(self):
        self.min_node = None
        self.total_nodes = 0
        selfRoots = []

    def insert(self, key):
        # реализация вставки узла
      pass

    def extract_min(self):
        # реализация извлечения минимума
      pass
