@class NSString, USVideoUsage, NSObject;
@protocol OS_dispatch_source;

@interface FigVideoUsageAssertion : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    NSString *_reason;
    USVideoUsage *_usage;
    long long _lastIdleTimerResetTime;
}

- (void)dealloc;
- (id)initWithReason:(id)a0 queue:(id)a1 expirationHandler:(id /* block */)a2;
- (unsigned char)resetIdleTimer;

@end
