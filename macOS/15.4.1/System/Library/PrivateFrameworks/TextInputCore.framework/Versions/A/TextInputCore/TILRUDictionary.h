@class TILRUDictionaryNode;

@interface TILRUDictionary : NSObject {
    struct __CFDictionary { } *_dictionary;
    unsigned long long _maxCount;
    TILRUDictionaryNode *_head;
    TILRUDictionaryNode *_tail;
}

+ (id)dictionaryWithMaximumCapacity:(unsigned long long)a0;

- (void)dealloc;
- (id)description;
- (id)allKeys;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (unsigned long long)linkedListCount;
- (void)_addNodeToFront:(id)a0;
- (void)_moveNodeToFront:(id)a0;
- (void)_removeNode:(id)a0;
- (void)_removeNodeFromLinkedList:(id)a0;
- (id)allKeysInLRUOrder;
- (id)allValuesInLRUOrder;
- (id)initWithMaximumCapacity:(unsigned long long)a0;
- (id)objectForKeyWithoutAffectingLRU:(id)a0;

@end
