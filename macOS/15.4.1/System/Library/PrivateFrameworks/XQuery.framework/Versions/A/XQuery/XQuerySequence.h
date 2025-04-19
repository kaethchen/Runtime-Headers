@class NSMutableArray;

@interface XQuerySequence : NSMutableArray {
    NSMutableArray *_array;
    id _value;
}

+ (id)sequence;
+ (id)sequenceWithItem:(id)a0;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;

@end
