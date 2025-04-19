@class NSKeyValueGetter;

@interface NSKeyValueFastMutableArray2 : NSKeyValueFastMutableArray {
    NSKeyValueGetter *_valueGetter;
}

- (unsigned long long)count;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectsAtIndexes:(id)a0;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (id)_nonNilArrayValueWithSelector:(SEL)a0;
- (void)_proxyNonGCFinalize;

@end
