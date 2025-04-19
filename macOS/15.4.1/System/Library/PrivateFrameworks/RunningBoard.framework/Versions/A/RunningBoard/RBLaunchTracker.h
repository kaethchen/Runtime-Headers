@class NSMutableDictionary;
@protocol RBTimeProviding;

@interface RBLaunchTracker : NSObject {
    NSMutableDictionary *_lastLaunch;
    NSMutableDictionary *_launchBeforeLast;
    id<RBTimeProviding> _timeProvider;
}

- (void).cxx_destruct;
- (id)initWithTimeProvider:(id)a0;
- (double)nextAllowedLaunchOfIdentity:(id)a0;
- (void)trackLaunchOfIdentity:(id)a0;

@end
