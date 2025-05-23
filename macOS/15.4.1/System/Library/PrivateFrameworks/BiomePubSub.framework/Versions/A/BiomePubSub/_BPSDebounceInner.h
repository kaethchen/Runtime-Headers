@class NSString, NSDate;
@protocol BPSSubscriber;

@interface _BPSDebounceInner : NSObject <BPSSubscriber> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _getTimestamp;
}

@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (nonatomic) double dueTime;
@property (retain, nonatomic) id lastEvent;
@property (retain, nonatomic) NSDate *lastArrivalTimestamp;
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
- (id)initWithDownstream:(id)a0 for:(double)a1 getTimestamp:(id /* block */)a2;

@end
