@class NSMutableSet;

@interface GDPersonEntityTagEventIDSet : NSMutableSet {
    NSMutableSet *_internalSet;
}

- (void).cxx_destruct;
- (id)member:(id)a0;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void)removeObject:(id)a0;
- (void)addEventId:(long long)a0;
- (id)initWithEventId:(long long)a0;

@end
