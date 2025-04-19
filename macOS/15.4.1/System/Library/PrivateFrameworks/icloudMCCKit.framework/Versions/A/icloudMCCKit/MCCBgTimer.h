@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MCCBgTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _interval;
}

- (BOOL)isValid;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (id)initWithTimeIntervalSinceNow:(double)a0 block:(id /* block */)a1;
- (id)initWithTimeIntervalSinceNow:(double)a0 queue:(id)a1 block:(id /* block */)a2;

@end
