@interface __NSPlaceholderSet : NSMutableSet

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (oneway void)release;
- (void)dealloc;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (id)member:(id)a0;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)initWithSet:(id)a0 copyItems:(BOOL)a1;
- (id)objectEnumerator;
- (void)removeObject:(id)a0;

@end
