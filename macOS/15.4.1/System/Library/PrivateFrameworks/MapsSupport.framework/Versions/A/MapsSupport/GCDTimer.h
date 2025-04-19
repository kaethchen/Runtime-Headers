@class NSObject, NSDate;
@protocol OS_dispatch_source;

@interface GCDTimer : NSObject {
    NSObject<OS_dispatch_source> *_source;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic, getter=isRepeating) BOOL repeating;
@property (readonly, nonatomic) NSDate *fireDate;

+ (id)scheduledTimerWithTimeInterval:(double)a0 queue:(id)a1 block:(id /* block */)a2;
+ (id)scheduledTimerWithTimeInterval:(double)a0 queue:(id)a1 repeating:(BOOL)a2 block:(id /* block */)a3;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithTimeInterval:(double)a0 queue:(id)a1 repeating:(BOOL)a2 block:(id /* block */)a3;

@end
