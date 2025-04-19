@class NSEnumerator;
@protocol BPSSubscriber;

@interface _BPSSequenceInner : BMBookmarkableSubscription {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (nonatomic) long long pendingDemand;
@property (nonatomic) BOOL recursion;
@property (retain, nonatomic) id next;
@property (retain, nonatomic) NSEnumerator *enumerator;

- (void).cxx_destruct;
- (void)cancel;
- (void)requestDemand:(long long)a0;
- (id)upstreamSubscriptions;
- (id)initWithDownstream:(id)a0 enumerator:(id)a1;

@end
