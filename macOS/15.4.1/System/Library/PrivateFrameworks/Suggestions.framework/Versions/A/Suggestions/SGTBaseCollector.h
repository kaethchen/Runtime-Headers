@class NSString, SGTBaseCollectorReserved, NSObject;
@protocol SGTSearchQueryCollectorDelegate, OS_dispatch_queue;

@interface SGTBaseCollector : NSObject <SGTSearchQueryCollector> {
    SGTBaseCollectorReserved *_reserved;
}

@property (weak) id<SGTSearchQueryCollectorDelegate> delegate;
@property (readonly) NSObject<OS_dispatch_queue> *queryQueue;
@property (readonly) BOOL isQuerying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dispatchQueueName;

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)schedulingWarmingQueryWithQuery:(id)a0 searchScopes:(id)a1;
- (void)searchWithContext:(id)a0;

@end
