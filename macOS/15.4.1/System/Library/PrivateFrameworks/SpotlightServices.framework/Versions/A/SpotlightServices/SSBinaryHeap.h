@interface SSBinaryHeap : NSObject {
    struct __CFBinaryHeap { } *_binaryHeap;
    id /* block */ _comparator;
    unsigned long long _maxCount;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;
- (unsigned long long)countForObject:(id)a0;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)removeAllObjects;
- (id)minimumValue;
- (id)initWithComparator:(id /* block */)a0 maxCount:(unsigned long long)a1;
- (void)removeMinimumValue;

@end
