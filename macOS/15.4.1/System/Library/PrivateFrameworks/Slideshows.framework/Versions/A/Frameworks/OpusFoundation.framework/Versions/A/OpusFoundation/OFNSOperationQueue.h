@class NSPointerArray, NSMutableIndexSet, NSObject;
@protocol OS_dispatch_queue;

@interface OFNSOperationQueue : NSOperationQueue {
    NSObject<OS_dispatch_queue> *_operationsLookupTableQueue;
    NSPointerArray *_operationsLookupTable;
    NSMutableIndexSet *_operationsLookupTableFreeIndices;
}

- (void)dealloc;
- (id)init;
- (void)cancelSlideshowOperationWithID:(unsigned long long)a0;
- (unsigned long long)addOperation:(id)a0 withPriority:(long long)a1;
- (void)cancelAllOperationsWithContext:(id)a0;
- (void)addOperation:(id)a0 context:(id)a1 identifier:(id)a2 queuePriority:(long long)a3;
- (void)cancelAllOperationsWithContext:(id)a0 andIdentifier:(id)a1;
- (void)cancelAllOperationsWithIdentifier:(id)a0;
- (id)_operationLookupObjectForKey:(unsigned long long)a0;
- (void)_setOperationLookupObject:(id)a0 forKey:(unsigned long long)a1;
- (void)_setupOperationsLookupTable;

@end
