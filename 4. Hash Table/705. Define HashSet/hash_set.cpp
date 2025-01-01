class MyHashSet
{
private:
    vector<bool> hash_set;

public:
    MyHashSet()
    {
        hash_set.resize(1000001, false);
    }

    void add(int key)
    {
        hash_set[key] = true;
    }

    void remove(int key)
    {
        hash_set[key] = false;
    }

    bool contains(int key)
    {
        return hash_set[key];
    }
};
