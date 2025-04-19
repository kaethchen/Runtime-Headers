@interface _AMSystemEventsSecurityPreferencesObject : SBObject <_AMSystemEventsGenericMethods>

@property BOOL automaticLogin;
@property BOOL logOutWhenInactive;
@property long long logOutWhenInactiveInterval;
@property BOOL requirePasswordToUnlock;
@property BOOL requirePasswordToWake;
@property BOOL secureVirtualMemory;

- (void)delete;
- (void)moveTo:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
