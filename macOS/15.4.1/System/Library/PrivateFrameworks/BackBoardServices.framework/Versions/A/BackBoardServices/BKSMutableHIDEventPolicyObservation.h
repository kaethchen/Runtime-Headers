@class BKSHIDEventDisplay, BKSHIDEventDeferringToken, BKSHIDEventDeferringEnvironment;

@interface BKSMutableHIDEventPolicyObservation : BKSHIDEventPolicyObservation

@property (nonatomic) int pid;
@property (retain, nonatomic) BKSHIDEventDisplay *display;
@property (retain, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (retain, nonatomic) BKSHIDEventDeferringToken *token;
@property (nonatomic) long long policyStatus;

- (void)setEnvironment:(id)a0;
- (void)setToken:(id)a0;
- (void)setPid:(int)a0;
- (void)setDisplay:(id)a0;
- (void)setPolicyStatus:(long long)a0;

@end
