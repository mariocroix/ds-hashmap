#include "hashmap.h"

int main() {
    Hashmap* myMap = createHashmap(5);

    insert(&myMap, "apple", 10);
    insert(&myMap, "banana", 5);
    insert(&myMap, "orange", 8);
    insert(&myMap, "kiwi", 34);
    insert(&myMap, "mandarin", 20);
    insert(&myMap, "passionfruit", 52);
    insert(&myMap, "melon", 81);
    insert(&myMap, "blueberry", 4);

    if (contains(myMap, "banana")) {
        printf("Key 'banana' exists in the hashmap.\n");
    } else {
        printf("Key 'banana' does not exist in the hashmap.\n");
    }

    uint appleValue = getValue(myMap, "apple");
    printf("The value associated with key 'apple' is: %u\n", appleValue);

    const char* valueKey = getKey(myMap, 8);
    printf("The key associated with value 8 is: %s\n", valueKey);

    print(myMap);

    freeHashmap(myMap);

    return 0;
}
