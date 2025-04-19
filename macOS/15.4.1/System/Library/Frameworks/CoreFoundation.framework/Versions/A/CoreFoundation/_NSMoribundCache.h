@interface _NSMoribundCache : NSCache

- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (id)retain;
- (unsigned long long)retainCount;
- (unsigned long long)countLimit;
- (id)delegate;
- (BOOL)evictsObjectsWithDiscardedContent;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setCountLimit:(unsigned long long)a0;
- (void)setDelegate:(id)a0;
- (void)setEvictsObjectsWithDiscardedContent:(BOOL)a0;
- (void)setName:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (void)setTotalCostLimit:(unsigned long long)a0;
- (unsigned long long)totalCostLimit;

@end
