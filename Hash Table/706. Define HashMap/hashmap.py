class MyHashMap(object):
    def __init__(self):
        self.size = 1000001
        self.hashmap = [-1] * self.size

    def put(self, key, value):
        """
        :type key: int
        :type value: int
        :rtype: None
        """
        self.hashmap[key] = value

    def get(self, key):
        """
        :type key: int
        :rtype: int
        """
        return self.hashmap[key]

    def remove(self, key):
        """
        :type key: int
        :rtype: None
        """
        self.hashmap[key] = -1
