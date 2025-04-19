@interface ATTrackingManager : NSObject

@property (class, readonly, nonatomic) unsigned long long trackingAuthorizationStatus;

+ (BOOL)_userAllowedToChangeSettings;
+ (id)_TCCServer;
+ (BOOL)_applicationHasDisqualifyingEntitlement;
+ (BOOL)_isCrossAppTrackingAllowed;
+ (void)_performTCCAccessRequest:(id /* block */)a0;
+ (unsigned long long)_performTCCPreflightRequest;
+ (BOOL)_restrictionProfileInstalled;
+ (void)_sendRequestTrackingAnalytic:(unsigned long long)a0 prompted:(BOOL)a1 deniedReason:(unsigned long long)a2;
+ (void)_sendTrackingStatusAnalytic:(unsigned long long)a0 prompted:(BOOL)a1 deniedReason:(unsigned long long)a2;
+ (unsigned long long)_trackingAuthorizationStatus;
+ (BOOL)applicationStateActive;
+ (BOOL)isApplicationExtension;
+ (void)requestTrackingAuthorizationWithCompletionHandler:(id /* block */)a0;

@end
