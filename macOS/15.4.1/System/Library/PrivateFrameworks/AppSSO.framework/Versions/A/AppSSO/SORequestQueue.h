@class NSString, NSMutableArray;
@protocol SOQueueItem;

@interface SORequestQueue : NSObject {
    NSString *_identifier;
    NSMutableArray *_queue;
    id<SOQueueItem> _processingItem;
}

@property (copy, nonatomic) id /* block */ processItemBlock;

+ (id)debugDescription;
+ (void)removeQueueWithIdentifier:(id)a0;
+ (id)requestQueueWithIdentifier:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)enqueueRequest:(id)a0;
- (void)_itemCompleted;
- (void)_processItem:(id)a0;
- (void)processNextRequest;
- (unsigned long long)queueCount;
- (void)removeAllRequestsWithBlock:(id /* block */)a0;
- (void)removeRequestWithIdentifier:(id)a0 block:(id /* block */)a1;

@end
