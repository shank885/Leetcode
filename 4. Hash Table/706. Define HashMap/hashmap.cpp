class MyHashMap
{
public:
    vector<int> hashmap;
    int size;

    MyHashMap()
    {
        size = 1000001;
        hashmap.resize(size);
        fill(hashmap.begin(), hashmap.end(), -1);
    }

    void put(int key, int value)
    {
        hashmap[key] = value;
    }

    int get(int key)
    {
        return hashmap[key];
    }

    void remove(int key)
    {
        hashmap[key] = -1;
    }
};
