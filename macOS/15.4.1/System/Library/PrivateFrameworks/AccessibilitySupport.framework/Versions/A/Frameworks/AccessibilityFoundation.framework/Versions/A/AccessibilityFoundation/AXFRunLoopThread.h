@class NSRunLoop;

@interface AXFRunLoopThread : NSThread

@property (retain, nonatomic) NSRunLoop *runLoop;

+ (id)detachNewThreadWithName:(id)a0 qualityOfService:(long long)a1;

- (void).cxx_destruct;
- (void)_spin:(double)a0;

@end
