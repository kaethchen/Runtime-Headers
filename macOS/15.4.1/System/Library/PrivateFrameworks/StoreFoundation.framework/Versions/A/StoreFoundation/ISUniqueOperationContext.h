@class NSMutableSet, NSMutableDictionary;

@interface ISUniqueOperationContext : NSObject {
    NSMutableSet *_operations;
    NSMutableDictionary *_uniqueOperations;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addOperation:(id)a0;
- (void)removeOperation:(id)a0;
- (BOOL)containsOperation:(id)a0;
- (unsigned long long)countOfOperations;
- (void)setUniqueOperation:(id)a0 forKey:(id)a1;
- (id)uniqueOperationForKey:(id)a0;

@end
