@class NSMutableArray;

@interface MTRAsyncWorkQueue : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id _context;
    NSMutableArray *_items;
    unsigned long long _runningWorkItemCount;
    unsigned long long _width;
}

- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (unsigned long long)itemCount;
- (id)initWithContext:(id)a0;
- (void)enqueueWorkItem:(id)a0;
- (void)enqueueWorkItem:(id)a0 description:(id)a1;
- (void)enqueueWorkItem:(id)a0 descriptionWithFormat:(id)a1;
- (BOOL)hasDuplicateForTypeID:(unsigned long long)a0 workItemData:(id)a1;
- (id)initWithContext:(id)a0 width:(unsigned long long)a1;

@end
