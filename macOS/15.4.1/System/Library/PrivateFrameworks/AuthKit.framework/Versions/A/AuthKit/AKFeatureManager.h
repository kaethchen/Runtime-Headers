@interface AKFeatureManager : NSObject {
    BOOL _cachedIsLisbonAvailable;
    BOOL _cachedIsAppleIDPasskeyFeatureEnabled;
    BOOL _cachedIsTiburonU13Enabled;
    BOOL _cachedIsHawksbillEnabled;
    BOOL _cachedIsChildPasscodeEnabled;
    BOOL _cachedSiwaCredentialSharingEnabled;
    BOOL _cachedIsDTOEnabled;
    BOOL _cachedIsForgotPasswordNativeTakeoverEnabled;
    BOOL _cachedIsDeviceListCacheEnabled;
    BOOL _cacheIsDeviceListCacheEnableDryMode;
    BOOL _cachedIsSiwaInPasswordsFeatureEnabled;
    BOOL _cachedIsConvertToMAIDEnabled;
    BOOL _cachedPltUpgradeEnabled;
    BOOL _cachedAuthenticatedRequestSerializationEnabled;
    BOOL _cachedSilentAuthenticationRequestSerializationEnabled;
    BOOL _adpExpansionViaCFUEnabled;
    BOOL _baaSupportedForVirtualMachines;
    BOOL _cachedSignInSecurityRedesignEnabled;
    BOOL _cacheIsServerBackoffEnabled;
    BOOL _cachedAgeAttestationPhase1Enabled;
}

@property (readonly, nonatomic, getter=isLisbonAvailable) BOOL lisbonAvailable;
@property (readonly, nonatomic, getter=isAppleIDPasskeyFeatureEnabled) BOOL appleIDPasskeyFeatureEnabled;
@property (readonly, nonatomic, getter=isTiburonU13Enabled) BOOL tiburonU13Enabled;
@property (readonly, nonatomic, getter=isHawksbillEnabled) BOOL enableHawksbill;
@property (readonly, nonatomic, getter=isChildPasscodeEnabled) BOOL childPasscodeEnabled;
@property (readonly, nonatomic, getter=isDTOEnabled) BOOL DTOEnabled;
@property (readonly, nonatomic, getter=isForgotPasswordNativeTakeoverEnabled) BOOL forgotPasswordNativeTakeoverEnabled;
@property (readonly, nonatomic, getter=isAppleIDSessionTelemetryEnabled) BOOL appleIDSessionTelemetryEnabled;
@property (readonly, nonatomic, getter=isDeviceListCacheEnabled) BOOL deviceListCacheEnabled;
@property (readonly, nonatomic, getter=isDeviceListCacheEnableDryMode) BOOL deviceListCacheEnableDryMode;
@property (readonly, nonatomic, getter=isSimpleProfilesEnabled) BOOL simpleProfilesEnabled;
@property (readonly, nonatomic, getter=isAgeAttestationPhase1Enabled) BOOL AgeAttestationPhase1Enabled;
@property (readonly, nonatomic, getter=isBackgroundiCloudSignInEnabled) BOOL backgroundiCloudSignInEnabled;
@property (readonly, nonatomic, getter=isTokenCacheEnabled) BOOL tokenCacheEnabled;
@property (readonly, nonatomic) BOOL isSiwaCredentialSharingEnabled;
@property (readonly, nonatomic, getter=isSiwaInPasswordsFeatureEnabled) BOOL siwaInPasswordsFeatureEnabled;
@property (readonly, nonatomic, getter=isConvertToMAIDEnabled) BOOL convertToMAIDEnabled;
@property (readonly, nonatomic, getter=isTokenCreationTimeEnabled) BOOL tokenCreationTimeEnabled;
@property (readonly, nonatomic, getter=isPltUpgradeEnabled) BOOL pltUpgradeEnabled;
@property (readonly, nonatomic, getter=isAuthenticatedRequestSerializationEnabled) BOOL authenticatedRequestSerializationEnabled;
@property (readonly, nonatomic, getter=isSilentAuthenticationRequestSerializationEnabled) BOOL silentAuthenticationRequestSerializationEnabled;
@property (readonly, nonatomic, getter=isUplevelSignInWithAppleEnabled) BOOL uplevelSignInWithAppleEnabled;
@property (readonly, nonatomic, getter=isADPExpansionViaCFUEnabled) BOOL adpExpansionViaCFUEnabled;
@property (readonly, nonatomic, getter=isBAASupportedForVirtualMachines) BOOL baaSupportedForVirtualMachines;
@property (readonly, nonatomic, getter=isSignInSecurityRedesignEnabled) BOOL isSignInSecurityRedesignEnabled;
@property (readonly, nonatomic, getter=isServerBackoffEnabled) BOOL serverBackoffEnabled;

+ (id)sharedManager;
+ (BOOL)isEasyDependentSignInEnabled;
+ (BOOL)isEnforceMDMPolicyEnabled;
+ (BOOL)isProxAuthEnabled;
+ (BOOL)isProxForAuthkitEnabled;
+ (BOOL)isYorktownEnabled;

- (id)init;
- (BOOL)backgroundiCloudSignInEnabled;

@end
