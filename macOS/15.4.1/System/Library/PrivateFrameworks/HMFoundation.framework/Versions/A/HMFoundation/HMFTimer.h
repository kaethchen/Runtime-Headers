@class NSDate, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, HMFTimerDelegate;

@interface HMFTimer : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    long long _leeway;
    long long _state;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly, nonatomic) unsigned long long options;
@property (weak) id<HMFTimerDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) double timeInterval;
@property (readonly, nonatomic) unsigned long long leeway;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly, copy) NSDate *fireDate;

+ (id)shortDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)fire;
- (void)resume;
- (void)setFireDate:(id)a0;
- (void)suspend;
- (void)cancel;
- (void)__fire;
- (void)__handleExpiration;
- (id)attributeDescriptions;
- (id)initWithTimeInterval:(double)a0 options:(unsigned long long)a1;
- (void)kick;

@end
