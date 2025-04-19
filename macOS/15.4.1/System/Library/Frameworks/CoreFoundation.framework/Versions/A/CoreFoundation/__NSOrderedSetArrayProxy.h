@interface __NSOrderedSetArrayProxy : NSArray {
    id _orderedSet;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)initWithOrderedSet:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;

@end
