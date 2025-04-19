@class NSObject;
@protocol OS_dispatch_source;

@interface _BEBurnableBlock : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    id /* block */ _block;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_cancelTimerIfNeeded;
- (id)initWithTimeout:(double)a0 block:(id /* block */)a1 defaultInputProvider:(id /* block */)a2;
- (BOOL)performWithInput:(id)a0;

@end
