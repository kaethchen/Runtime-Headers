@class NSMutableDictionary, NSDictionary, NSDate, NSObject;
@protocol BMLibraryNode, OS_dispatch_queue;

@interface BMComputeSubscriptionSubstreamManager : NSObject {
    id<BMLibraryNode> _library;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _domain;
    NSDate *_dateOverride;
    NSDictionary *_subscriptions;
    BOOL _initialCheckinsComplete;
    NSMutableDictionary *_checkins;
}

- (void).cxx_destruct;
- (double)timestamp;
- (void)_checkinTimeout;
- (BOOL)supportsStream:(id)a0;
- (id)_initWithDomain:(unsigned long long)a0 queue:(id)a1 library:(id)a2;
- (id)_loadSubscriptionsFromSubscriptionsSubstreams;
- (void)_removeSubscriptionsPassingTest:(id /* block */)a0;
- (id)_subscriptionSourceForStream:(id)a0;
- (void)addSubscription:(id)a0;
- (id)initWithDomain:(unsigned long long)a0 queue:(id)a1;
- (void)initialCheckinsComplete;
- (void)removeSubscription:(id)a0;

@end
