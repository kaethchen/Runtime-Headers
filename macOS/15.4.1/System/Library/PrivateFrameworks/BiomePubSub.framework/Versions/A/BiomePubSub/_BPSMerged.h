@class NSMutableArray;
@protocol BPSSubscriber;

@interface _BPSMerged : BMBookmarkableSubscription {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _downstreamLock;
}

@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (nonatomic) long long count;
@property (nonatomic) long long demand;
@property (nonatomic) BOOL terminated;
@property (nonatomic) long long upstreamFinished;
@property (nonatomic) BOOL finished;
@property (retain, nonatomic) NSMutableArray *subscriptions;
@property (retain, nonatomic) NSMutableArray *buffers;
@property (nonatomic) BOOL recursive;
@property (nonatomic) long long pending;
@property (retain, nonatomic) NSMutableArray *upstreamBookmarks;

- (void).cxx_destruct;
- (void)cancel;
- (id)newBookmark;
- (void)requestDemand:(long long)a0;
- (id)upstreamSubscriptions;
- (id)applyDownstreamWhileLocked:(BOOL)a0 apply:(id /* block */)a1;
- (id)initWithDownstream:(id)a0 count:(long long)a1;
- (void)receiveCompletion:(id)a0 atIndex:(long long)a1;
- (long long)receiveInput:(id)a0 atIndex:(long long)a1;
- (void)receiveSubscription:(id)a0 atIndex:(long long)a1;
- (void)updateBookmarksWhenLockedForIndex:(unsigned long long)a0;

@end
