@class NSMutableArray;

@interface _PASLowValueCardinalityMutableDictionary : NSMutableDictionary {
    NSMutableArray *_objectsAndKeys;
    unsigned long long _count;
}

- (void).cxx_destruct;
- (id)allKeysForObject:(id)a0;
- (id)allValues;
- (unsigned long long)count;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
