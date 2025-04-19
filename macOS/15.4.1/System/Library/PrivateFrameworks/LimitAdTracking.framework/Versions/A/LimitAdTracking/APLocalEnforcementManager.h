@interface APLocalEnforcementManager : APEnforcementManager

- (BOOL)loggingEnabled;
- (id)disabledReasons;
- (id)accountStorefront;
- (BOOL)adServicesEnabled:(id /* block */)a0;
- (id)appTrackingServiceProxy:(id)a0;
- (id)appTrackingXPCConnection:(id /* block */)a0 withInvalidation:(id /* block */)a1;
- (BOOL)deviceRegionStorefrontEnabled;
- (BOOL)isU13MAIDEDU;
- (BOOL)shouldShowTCCWithAds;

@end
