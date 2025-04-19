@class STManagementState, NSObject;
@protocol OS_dispatch_queue;

@interface FeatureAvailability : WBSFeatureAvailability {
    NSObject<OS_dispatch_queue> *_internalQueue;
    STManagementState *_managementState;
    NSObject<OS_dispatch_queue> *_screenTimeUserStateQueue;
}

@property (class, readonly, nonatomic) BOOL isTouchIDToAutoFillEnabledInUserDefaults;
@property (class, readonly, nonatomic, getter=isScreenTimeUserRestricted) BOOL screenTimeUserRestricted;
@property (class, readonly, nonatomic, getter=isScreenTimeManagedByParent) BOOL screenTimeManagedByParent;
@property (class, readonly, nonatomic, getter=isContentFilteringEnabled) BOOL contentFilteringEnabled;
@property (class, readonly, nonatomic) BOOL isSafariProfilesUIEnabled;
@property (class, readonly, nonatomic, getter=isScribbleOutEnabled) BOOL scribbleOutEnabled;
@property (class, readonly, nonatomic) BOOL areSharedTabGroupsEnabled;
@property (class, readonly, nonatomic) BOOL areProfilesSyncedAcrossDevices;
@property (class, readonly, nonatomic) BOOL isSaveWebpageWithMetadataUIEnabled;

@property (getter=isUserSignedIntoICloud) BOOL userSignedIntoICloud;
@property (getter=isSafariSyncEnabled) BOOL safariSyncEnabled;
@property (getter=isUserUsingManagedAppleID) BOOL userUsingManagedAppleID;
@property (getter=isApplePayAvailable) BOOL applePayAvailable;
@property (getter=isCloudAccountHSA2) BOOL cloudAccountIsHSA2;
@property long long cachedScreenTimeUserState;

+ (id)_sharedInstance;
+ (BOOL)isSafariSyncEnabled;
+ (BOOL)_shouldShowChineseFeatures;
+ (BOOL)_shouldShowRussianFeatures;
+ (BOOL)wantsAggressiveKeychainCredentialCaching;
+ (void)determineIfScreenTimeUserIsRestrictedWithCompletionHandler:(id /* block */)a0;
+ (void)executeBlockAfterScreenTimeUserStateDetermined:(id /* block */)a0;
+ (BOOL)isAddressBookAutoFillEnabled;
+ (BOOL)isAirDropPasswordsAvailable;
+ (BOOL)isApplePayAvailable;
+ (BOOL)isCloudTabsAvailable;
+ (BOOL)isCreditCardAutoFillEnabled;
+ (BOOL)isInterstellarEnabled;
+ (BOOL)isMiscellaneousFormsAutoFillEnabled;
+ (BOOL)isNarrowTabsEnabled;
+ (BOOL)isPasswordAutoFillEnabled;
+ (BOOL)isPasswordAutoFillFromKeychainEnabled;
+ (BOOL)isPerSitePopUpBlockingPreferenceAvailable;
+ (BOOL)isTabGroupEnabled;
+ (BOOL)isUnifiedSidebarEnabled;
+ (BOOL)isUserAllowedToEditCreditCardInformation;
+ (BOOL)isUserAllowedToToggleAddressBookAutoFillEnabledState;
+ (BOOL)isUserAllowedToToggleCreditCardAutoFillEnabledState;
+ (BOOL)isUserAllowedToToggleMiscellaneousFormsAutoFillEnabledState;
+ (BOOL)isUserAllowedToTogglePasswordsAutoFillEnabledState;
+ (BOOL)isUserSignedIntoICloud;
+ (BOOL)isUserUsingManagedAppleID;
+ (BOOL)safariIsInRecoverySystem;
+ (void)startMonitoringForAvailabilityChanges;

- (id)init;
- (void).cxx_destruct;
- (void)_accountsDidChange;
- (void)_accountsDidChange:(id)a0;
- (void)_accountsDidChangeOnInternalQueue;
- (void)_executeBlockAfterScreenTimeUserStateDetermined:(id /* block */)a0;
- (void)_updateApplePayAvailability;
- (void)isScreenTimeUserRestrictedWithCompletionHandler:(id /* block */)a0;

@end
