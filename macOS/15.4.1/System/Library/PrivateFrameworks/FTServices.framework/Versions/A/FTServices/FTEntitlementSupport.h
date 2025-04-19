@class NSDictionary;

@interface FTEntitlementSupport : NSObject

@property (readonly, nonatomic) BOOL faceTimeNonWiFiEntitled;
@property (readonly, nonatomic) NSDictionary *registrationState;

+ (id)sharedInstance;

- (id)init;
- (BOOL)_setupCTServerConnection;
- (void)_cleanupMachInfo;
- (BOOL)_disconnectCTServerConnection;
- (void)_entitlementStatusChanged;
- (id)_rawEntitlementValue;
- (BOOL)_reconnectCTServerConnectionIfNecessary;
- (BOOL)_registerForCTEntitlementNotifications;
- (void)_unregisterForCTEntitlementNotifications;
- (void)_updateEntitlementStatusUsingCTEntitlementsInfo:(struct __CFDictionary { } *)a0;

@end
