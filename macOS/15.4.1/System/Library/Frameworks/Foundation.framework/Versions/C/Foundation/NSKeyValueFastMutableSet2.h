@class NSKeyValueGetter;

@interface NSKeyValueFastMutableSet2 : NSKeyValueFastMutableSet {
    NSKeyValueGetter *_valueGetter;
}

- (id)member:(id)a0;
- (unsigned long long)count;
- (id)objectEnumerator;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (id)_nonNilSetValueWithSelector:(SEL)a0;
- (void)_proxyNonGCFinalize;

@end
