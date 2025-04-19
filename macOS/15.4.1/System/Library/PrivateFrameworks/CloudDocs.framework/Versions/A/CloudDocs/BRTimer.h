@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_name;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)initWithName:(id)a0 interval:(double)a1 callbackQueue:(id)a2 block:(id /* block */)a3;

@end
