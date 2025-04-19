@interface __NSOrderedSetSetProxy : NSSet {
    id _orderedSet;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)member:(id)a0;
- (unsigned long long)count;
- (id)initWithOrderedSet:(id)a0;
- (id)objectEnumerator;

@end
