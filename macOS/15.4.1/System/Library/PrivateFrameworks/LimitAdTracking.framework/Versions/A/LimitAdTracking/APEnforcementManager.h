@interface APEnforcementManager : NSObject

- (BOOL)loggingEnabled;
- (id)disabledReasons;
- (BOOL)adServicesEnabled:(id /* block */)a0;
- (BOOL)shouldShowTCCWithAds;

@end
