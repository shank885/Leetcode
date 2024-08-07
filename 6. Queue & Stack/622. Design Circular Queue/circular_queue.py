class MyCircularQueue:
    def __init__(self, k: int):
        self.head = 0
        self.tail = 0
        self.size = 0
        self.capacity = k
        self.arr = [None] * self.capacity

    def enQueue(self, value: int) -> bool:
        if self.size == self.capacity:
            return False

        self.arr[self.tail] = value
        self.tail += 1
        self.size += 1
        
        if self.tail == self.capacity:
            self.tail = 0

        return True

    def deQueue(self) -> bool:
        if self.size == 0:
            return False
        
        self.head += 1
        self.size -= 1

        if self.head == self.capacity:
            self.head = 0
        
        return True
        
    def Front(self) -> int:
        if self.size == 0:
            return -1
        return self.arr[self.head]

    def Rear(self) -> int:
        if self.size == 0:
            return -1
        
        if self.tail == 0:
            return self.arr[self.capacity-1]
        else:
            return self.arr[self.tail-1]

    def isEmpty(self) -> bool:
        if self.size == 0:
            return True
        return False
        

    def isFull(self) -> bool:
        if self.size == self.capacity:
            return True
        return False