@class NSKeyValueSetter, NSKeyValueGetter;

@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet {
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
    BOOL _treatNilValuesLikeEmptySets;
    char _padding[3];
}

- (void)setSet:(id)a0;
- (id)member:(id)a0;
- (void)addObject:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (unsigned long long)count;
- (void)intersectSet:(id)a0;
- (void)minusSet:(id)a0;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)removeObject:(id)a0;
- (void)unionSet:(id)a0;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (id)_createMutableSetValueWithSelector:(SEL)a0;
- (void)_proxyNonGCFinalize;
- (void)_raiseNilValueExceptionWithSelector:(SEL)a0;
- (id)_setValueWithSelector:(SEL)a0;

@end
