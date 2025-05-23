@class NSString, NSDate;
@protocol BPSSubscriber;

@interface _BPSThrottleInner : NSObject <BPSSubscriber> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _getTimestamp;
}

@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (nonatomic) double interval;
@property (nonatomic) BOOL latest;
@property (retain, nonatomic) id intervalEvent;
@property (retain, nonatomic) NSDate *nextIntervalBoundary;
@property (retain, nonatomic) NSDate *startTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)receiveCompletion:(id)a0;
- (long long)receiveInput:(id)a0;
- (void)receiveSubscription:(id)a0;
- (id)initWithDownstream:(id)a0 interval:(double)a1 latest:(BOOL)a2 getTimestamp:(id /* block */)a3;

@end
