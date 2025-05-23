@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface FBApplicationProcessWatchdogPolicy : NSObject <FBProcessWatchdogProviding> {
    double _deviceLaunchScale;
    double _deviceResumeScale;
    double _additionalFirstPartyScale;
    BOOL _enableThirdPartyPre9;
    int _daNotificationToken;
    NSDictionary *_watchdogPolicyExceptions;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultPolicy;
+ (double)_defaultFirstPartyAdditionalScale;
+ (double)_defaultLaunchScale;
+ (double)_defaultResumeScale;
+ (double)_scaleForGestaltKey:(struct __CFString { } *)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_queue_reloadDefaultSettings;
- (double)_queue_watchdogScalingFactorForAppInfo:(id)a0 isResume:(BOOL)a1;
- (id)watchdogPolicyForProcess:(id)a0 eventContext:(id)a1;

@end
