@class NSObject;
@protocol OS_dispatch_source, SCNJittererDelegate;

@interface SCNJitterer : NSObject {
    BOOL _enabled;
    unsigned long long _state;
    unsigned long long _iteration;
    BOOL _restartSourceIsSuspended;
    id<SCNJittererDelegate> _delegate;
    NSObject<OS_dispatch_source> *_restartSource;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (void)initialize;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)update;
- (void)restart;
- (void)delegateWillDie;
- (BOOL)isAborting;
- (void)jitter;
- (void)stopIfNeeded;

@end
