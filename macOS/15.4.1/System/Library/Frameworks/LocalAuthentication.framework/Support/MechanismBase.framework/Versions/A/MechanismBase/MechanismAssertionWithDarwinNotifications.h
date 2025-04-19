@class NSString;

@interface MechanismAssertionWithDarwinNotifications : MechanismAssertion {
    int _inStateToken;
    int _outStateToken;
    BOOL _isInState;
}

@property (readonly, nonatomic) NSString *inStateNotificationName;
@property (readonly, nonatomic) NSString *outStateNotificationName;

- (void).cxx_destruct;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)_notificationNameForInState:(BOOL)a0;
- (int *)_notificationTokenForInState:(BOOL)a0;
- (void)_registerDarwinNotificationForInState:(BOOL)a0;
- (void)_unregisterDarwinNotificationForInstate:(BOOL)a0;
- (id)assertInState;
- (void)handleAssertionFailureWithReason:(id)a0 error:(id)a1;
- (void)handleAssertionSuccessWithReason:(id)a0;
- (id)initWithMechanism:(id)a0 inStateNotificationName:(id)a1 outStateNotificationName:(id)a2;

@end
