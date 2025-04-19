@class NSTimer;
@protocol SecureWindow;

@interface SecureWindowLockPolicyEnforcer : NSObject {
    id<SecureWindow> _secureWindow;
    id _windowStateNotificationToken;
    NSTimer *_lockingTimer;
    id _keybagLockStatusChangedObservationToken;
    BOOL _lockPolicyEnforced;
    BOOL _windowToSecureIsMainWindow;
}

@property (readonly, nonatomic) double windowFocusLostLockingGracePeriod;

- (void).cxx_destruct;
- (void)_secureWindowDidBecomeKeyNotification:(id)a0;
- (void)_secureWindowDidResignKeyNotification:(id)a0;
- (void)cancelSecureWindowLockingEvent;
- (id)initWithSecureWindow:(id)a0;
- (void)scheduleSecureWindowLockingEvent;
- (void)startEnforcingLockPolicy;
- (void)stopEnforcingLockPolicy;

@end
