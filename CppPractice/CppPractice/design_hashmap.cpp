#include<stdio.h>
#include<iostream>

using namespace std;
class MyHashMap {
public:
	/** Initialize your data structure here. */
	int save[1000002];
	MyHashMap() {
		memset(save, -1, sizeof(save));
	}

	/** value will always be non-negative. */
	void put(int key, int value) {
		save[key] = value;
	}

	/** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
	int get(int key) {
		return save[key];
	}

	/** Removes the mapping of the specified value key if this map contains a mapping for the key */
	void remove(int key) {
		save[key] = -1;
	}
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */