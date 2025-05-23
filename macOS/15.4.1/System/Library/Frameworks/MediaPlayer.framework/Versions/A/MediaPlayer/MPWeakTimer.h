@class NSObject;
@protocol OS_dispatch_source;

@interface MPWeakTimer : NSObject {
    NSObject<OS_dispatch_source> *_timerSource;
}

+ (id)timerWithInterval:(double)a0 repeats:(BOOL)a1 queue:(id)a2 block:(id /* block */)a3;
+ (id)timerWithInterval:(double)a0 block:(id /* block */)a1;
+ (id)timerWithInterval:(double)a0 queue:(id)a1 block:(id /* block */)a2;
+ (id)timerWithInterval:(double)a0 repeats:(BOOL)a1 block:(id /* block */)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithInterval:(double)a0 queue:(id)a1 block:(id /* block */)a2;
- (id)initWithInterval:(double)a0 repeats:(BOOL)a1 queue:(id)a2 block:(id /* block */)a3;

@end
