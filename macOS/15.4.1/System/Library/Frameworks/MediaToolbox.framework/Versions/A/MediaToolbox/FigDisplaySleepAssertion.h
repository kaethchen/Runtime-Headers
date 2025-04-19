@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface FigDisplaySleepAssertion : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    NSString *_reason;
    unsigned int _displaySleepPreventionIOPMAssertionID;
    long long _lastIdleTimerResetTime;
}

- (void)dealloc;
- (id)initWithReason:(id)a0 queue:(id)a1 expirationHandler:(id /* block */)a2;
- (unsigned char)resetIdleTimer;

@end
