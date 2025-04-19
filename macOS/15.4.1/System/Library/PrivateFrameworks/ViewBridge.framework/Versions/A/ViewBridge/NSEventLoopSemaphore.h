@interface NSEventLoopSemaphore : NSCFRunLoopSemaphore

@property (readonly) unsigned long long eventMask;

- (void)signal;
- (void)invokeLoopInModeForDuration:(double)a0 withBlock:(id /* block */)a1;
- (id)initWithMode:(struct __CFString { } *)a0 andEventMask:(unsigned long long)a1;

@end
