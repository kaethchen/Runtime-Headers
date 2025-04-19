@class NSObject;
@protocol OS_dispatch_source;

@interface _NSHMDDisplayLink : NSHMDDisplayLink {
    id /* block */ _displayTimingBlock;
    NSObject<OS_dispatch_source> *_timer;
    _Atomic unsigned long long _suspensions;
}

- (void)dealloc;
- (id)init;
- (BOOL)isValid;
- (void)invalidate;
- (void)resume;
- (void)suspend;
- (id)initWithDisplayTiming:(id /* block */)a0 handler:(id /* block */)a1;

@end
