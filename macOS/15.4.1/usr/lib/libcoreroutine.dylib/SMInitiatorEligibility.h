@interface SMInitiatorEligibility : NSObject

+ (id)_getRegulatoryDomainCountryCodes;
+ (long long)cellularEligibilityFailureStatusForPlatform:(id)a0;
+ (BOOL)checkAirplaneModeEnabledWithQueue:(id)a0;
+ (BOOL)checkCellularDataEnabledWithQueue:(id)a0;
+ (void)checkCellularEnabledWithQueue:(id)a0 handler:(id /* block */)a1;
+ (BOOL)checkCellularWatchToggleEnabledWithQueue:(id)a0;
+ (BOOL)checkDevicePlatformEnabled;
+ (BOOL)checkHasSimWithQueue:(id)a0;
+ (void)checkIMessageAccountEnabledWithQueue:(id)a0 handler:(id /* block */)a1;
+ (void)checkInitiatorEligibilityWithQueue:(id)a0 authorizationManager:(id)a1 effectivePairedDevice:(id)a2 isHandoff:(BOOL)a3 defaultsManager:(id)a4 platform:(id)a5 appDeletionManager:(id)a6 handler:(id /* block */)a7;
+ (BOOL)checkIsInternalInstall;
+ (void)checkLocationAuthorizationWithQueue:(id)a0 handler:(id /* block */)a1;
+ (BOOL)checkLocationServicesEnabledWithAuthorizationManager:(id)a0;
+ (void)checkManateeEnabledWithQueue:(id)a0 handler:(id /* block */)a1;
+ (void)checkNetworkReachabilityWithQueue:(id)a0 handler:(id /* block */)a1;
+ (BOOL)checkRegulatoryDomainPassedWithQueue:(id)a0;
+ (BOOL)deviceHasBaseband;
+ (BOOL)shouldSkipCellularEligibilityCheckWithEffectivePairedDevice:(id)a0 isHandoff:(BOOL)a1 defaultsManager:(id)a2;

@end
