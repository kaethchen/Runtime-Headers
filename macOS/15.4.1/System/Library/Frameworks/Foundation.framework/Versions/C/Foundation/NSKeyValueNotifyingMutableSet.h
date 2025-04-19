@class NSMutableSet;

@interface NSKeyValueNotifyingMutableSet : NSKeyValueMutableSet {
    NSMutableSet *_mutableSet;
}

+ (id)_proxyShare;

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
- (void)_proxyNonGCFinalize;

@end
