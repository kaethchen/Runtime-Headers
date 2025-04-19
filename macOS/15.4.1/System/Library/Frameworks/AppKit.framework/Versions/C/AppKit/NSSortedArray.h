@class NSMutableArray;

@interface NSSortedArray : NSMutableArray {
    NSMutableArray *_array;
    SEL _compareSelector;
    unsigned long long _cachedCount;
    id _cachedFirstObject;
}

@property SEL compareSelector;

+ (void)initialize;

- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithArray:(id)a0;
- (id)initWithArray:(id)a0 copyItems:(BOOL)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithObjects:(id)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)setArray:(id)a0;
- (void)sortUsingFunction:(void /* function */ *)a0 context:(void *)a1;
- (void)sortUsingSelector:(SEL)a0;
- (void)_insertObjectInSortOrder:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0 compareSelector:(SEL)a1;
- (id)initWithCompareSelector:(SEL)a0;

@end
