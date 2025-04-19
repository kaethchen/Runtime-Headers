@class NSMutableDictionary;

@interface FPOneToManyWeakMap : NSObject {
    NSMutableDictionary *_backingDictionary;
}

- (id)init;
- (void).cxx_destruct;
- (void)addObject:(id)a0 forKey:(id)a1;
- (id)removeObject:(id)a0;
- (void)removeObjectsForKey:(id)a0;
- (id)anyObjectForKey:(id)a0;

@end
