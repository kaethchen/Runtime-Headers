@protocol PushButtonDelegate;

@interface PushButtonMonitor : NSObject {
    unsigned long long _lastTap;
    unsigned long long _lastDoubleTap;
    id /* block */ _axDoubleTapExpirationBlock;
    struct __IOHIDEventSystemClient { } *_hidClient;
}

@property (nonatomic) BOOL doubleTapDetected;
@property (nonatomic) BOOL axDoubleTapDetected;
@property (weak, nonatomic) id<PushButtonDelegate> delegate;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)start;
- (void)stop;
- (void)doubleTappedAt:(id)a0;
- (void)adviseDoubleTap;
- (id)prearmAssertion;
- (BOOL)startWithError:(id *)a0;
- (void)_consumeDoubleTapWithReason:(id)a0 includingAX:(BOOL)a1;
- (double)_defaultExpirationTimeout;
- (void)_expireDoubleTap:(unsigned long long)a0;
- (void)_restartWithReactivationDelay:(double)a0;
- (void)_scheduleDoubleTapExpiration;
- (void)axApplePayConfirmation;
- (void)consumeDoubleTapWithReason:(id)a0;

@end
