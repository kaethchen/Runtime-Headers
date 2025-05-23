@protocol WBSDeallocationSentinelObserver;

@interface _WBSDeallocationSentinel : NSObject

@property (weak, nonatomic) id<WBSDeallocationSentinelObserver> observer;
@property (readonly, nonatomic) id context;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 context:(id)a1;

@end
