class MyCircularQueue
{
public:
    int head, tail, size;
    int capacity;
    vector<int> arr;

    MyCircularQueue(int k)
    {
        head = 0;
        tail = 0;
        size = 0;
        capacity = k;
        vector<int> v(k);
        arr = v;
    }

    bool enQueue(int value)
    {
        if (size == capacity)
        {
            return false;
        }
        arr[tail++] = value;
        // tail++;

        if (tail == capacity)
        {
            tail = 0;
        }
        size++;
        return true;
    }

    bool deQueue()
    {
        if (size == 0)
        {
            return false;
        }
        head++;

        if (head == capacity)
        {
            head = 0;
        }
        size--;
        return true;
    }

    int Front()
    {
        if (size == 0)
        {
            return -1;
        }
        return arr[head];
    }

    int Rear()
    {
        if (size == 0)
        {
            return -1;
        }
        if (tail == 0)
        {
            return arr[capacity - 1];
        }
        return arr[tail - 1];
    }

    bool isEmpty()
    {
        if (size == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (size == capacity)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
