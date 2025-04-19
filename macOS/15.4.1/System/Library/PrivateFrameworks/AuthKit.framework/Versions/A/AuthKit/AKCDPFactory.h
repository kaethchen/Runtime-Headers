@interface AKCDPFactory : NSObject

+ (unsigned long long)walrusStatus;
+ (BOOL)cdpAccountIsICDPEnabledForDSID:(id)a0;
+ (BOOL)isEligibleToArmDeviceForPCSAuth;
+ (BOOL)isWalrusEnabled;
+ (unsigned long long)webAccessStatus;
+ (id)accountRecoveryControllerWithPresentingViewController:(id)a0;
+ (BOOL)cdpAccountIsHSA2EnabledForAltDSID:(id)a0;
+ (BOOL)cdpAccountIsOTEnabledForAltDSID:(id)a0;
+ (id)cdpErrorDomain;
+ (id)cdpIDMSRecordMIDKey;
+ (id)cdpIDMSRecordPRKKey;
+ (id)cdpStateUIController;
+ (id)cdpUIControllerWithPresentingViewController:(id)a0;
+ (id)contextForAltDSID:(id)a0;
+ (id)contextWithAuthResults:(id)a0;
+ (id)followUpController;
+ (id)followUpRepairContext;
+ (BOOL)isWebAccessEnabled;
+ (id)recoveryControllerWithContext:(id)a0;
+ (id)stateControllerWithContext:(id)a0;
+ (id)walrusStatusLiveValue;
+ (id)webAccessChangeControllerForTargetStatus:(unsigned long long)a0;
+ (id)webAccessStatusLiveValue;

- (BOOL)isCDPEnabledForDSID:(id)a0;
- (BOOL)isHSA2EnabledForAltDSID:(id)a0;
- (BOOL)isManateeAvailable;
- (BOOL)isUserVisibleKeychainSyncEnabled;

@end
