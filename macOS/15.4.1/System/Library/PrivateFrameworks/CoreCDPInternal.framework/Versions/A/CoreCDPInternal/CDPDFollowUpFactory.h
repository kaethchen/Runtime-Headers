@class LAEnvironment;

@interface CDPDFollowUpFactory : NSObject

@property (retain, nonatomic) LAEnvironment *currentUser;

+ (id)contextToIdentifierMap;

- (void).cxx_destruct;
- (unsigned long long)secretType;
- (id)_localizedStringForKey:(id)a0;
- (BOOL)_supportsFaceID;
- (id)_adpStateHealingFollowUpAction;
- (id)_baseFollowUpItemWithContext:(id)a0;
- (id)_baseFollowUpNotificationWithContext:(id)a0;
- (void)_configureConfirmExistingSecretFollowUpItem:(id)a0;
- (void)_configureRepairFollowUpItem:(id)a0;
- (void)_configureWalrusRepairFollowUpItem:(id)a0;
- (id)_confirmExistingSecretFollowUpAction;
- (id)_createPasscodeDismissNoteFollowUpAction;
- (id)_createPasscodeFollowUpAction;
- (id)_createPasscodeNoteFollowUpAction;
- (id)_deviceCapabilityProvider;
- (id)_followUpActionForRecoveryKeyRepair;
- (id)_followUpForADPStateHealingWithContext:(id)a0;
- (id)_followUpForConfirmExistingSecretWithContext:(id)a0;
- (id)_followUpForOfflineSecretChangeWithContext:(id)a0;
- (id)_followUpForRecoveryKeyRepairWithContext:(id)a0;
- (id)_followUpForRepairWithContext:(id)a0;
- (id)_followUpForSecureTermsWithContext:(id)a0;
- (id)_followUpForSettingUpBiometricsWithContext:(id)a0;
- (id)_followUpItemForEDPOnlyRepairWithContext:(id)a0;
- (id)_followUpItemForRecoveryKeyMismatchHealing:(id)a0;
- (id)_followUpItemForSOSCompatibilityMode:(id)a0;
- (id)_followUpItemForWalrusCreatePasscodeWithContext:(id)a0;
- (BOOL)_isBiometricAuthEnrolled;
- (BOOL)_isBiometricAuthEnrolledWithLAEnvironment:(id)a0;
- (BOOL)_isBiometricCapable;
- (BOOL)_isManateeAvailable;
- (BOOL)_isManateeAvailableForAltDSID:(id)a0;
- (BOOL)_isWalrusEnabled;
- (id)_offlineSecretChangeFollowUpAction;
- (id)_secureTermsFollowUpAction;
- (id)_userInfoForPrefPaneWithCommandKey:(id)a0;
- (id)followUpItemWithContext:(id)a0;
- (id)identifierForContext:(id)a0;

@end
