@class CSPolicy;

@interface CSSelfTriggerDetectorUseAVVCEnabledPolicyASMac : CSPolicy

@property (retain, nonatomic) CSPolicy *selfTriggerEnabledPolicyMac;

- (id)init;
- (void).cxx_destruct;
- (void)_addSelfTriggerDetectorEnabledConditions;
- (void)_subscribeEventMonitors;

@end
