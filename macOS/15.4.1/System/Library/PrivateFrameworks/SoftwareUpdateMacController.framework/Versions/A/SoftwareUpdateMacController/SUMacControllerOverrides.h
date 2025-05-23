@class NSString, NSDictionary, NSData, NSNumber;

@interface SUMacControllerOverrides : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *prerequisiteBuildVersion;
@property (retain, nonatomic) NSString *prerequisiteProductVersion;
@property (retain, nonatomic) NSString *prerequisiteRestoreVersion;
@property (retain, nonatomic) NSString *targetRestoreVersion;
@property (retain, nonatomic) NSString *installedSFRBuildVersion;
@property (retain, nonatomic) NSString *installedSFRProductVersion;
@property (retain, nonatomic) NSString *installedSFRRestoreVersion;
@property (retain, nonatomic) NSString *installedSFRReleaseType;
@property (retain, nonatomic) NSString *installedSplatBuildVersion;
@property (retain, nonatomic) NSString *installedSplatProductVersion;
@property (retain, nonatomic) NSString *installedSplatRestoreVersion;
@property (retain, nonatomic) NSString *installedSplatReleaseType;
@property (retain, nonatomic) NSString *deviceClass;
@property (retain, nonatomic) NSString *hwModelStr;
@property (retain, nonatomic) NSString *productType;
@property (retain, nonatomic) NSString *releaseType;
@property (retain, nonatomic) NSString *updateBrainLocationOverride;
@property (retain, nonatomic) NSString *recoveryOSUpdateBrainLocationOverride;
@property (nonatomic) BOOL background;
@property (nonatomic) BOOL requiresPowerPluggedIn;
@property (nonatomic) BOOL restrictToIncremental;
@property (nonatomic) BOOL restrictToFull;
@property (nonatomic) BOOL allowSameVersion;
@property (nonatomic) BOOL allowSameSplatRestoreVersion;
@property (nonatomic) BOOL checkAvailableSpace;
@property (nonatomic) long long updateType;
@property (retain, nonatomic) NSString *softwareUpdateAssetType;
@property (retain, nonatomic) NSString *sfrSoftwareUpdateAssetType;
@property (retain, nonatomic) NSString *splatAssetType;
@property (retain, nonatomic) NSString *updateBrainAssetType;
@property (retain, nonatomic) NSString *documentationAssetType;
@property (nonatomic) BOOL usesSFRSoftwareUpdates;
@property (nonatomic) BOOL usesRosettaUpdates;
@property (nonatomic) BOOL usesRecoveryOSUpdates;
@property (nonatomic) BOOL usesSplatComboUpdates;
@property (nonatomic) BOOL enablePreSUStaging;
@property (nonatomic) BOOL enablePreSUStagingForOptionalAssets;
@property (nonatomic) NSNumber *maxPreSUStagingOptionalAssetSize;
@property (nonatomic) BOOL requirePreparePackageRosettaUpdates;
@property (nonatomic) BOOL attemptPreparePackageRosettaUpdates;
@property (retain, nonatomic) NSString *rosettaVersionOverride;
@property (retain, nonatomic) NSNumber *catalogDownloadTimeoutSecs;
@property (retain, nonatomic) NSNumber *softwareUpdateAssetDownloadTimeoutSecs;
@property (retain, nonatomic) NSNumber *sfrSoftwareUpdateAssetDownloadTimeoutSecs;
@property (retain, nonatomic) NSString *updateUUID;
@property (retain, nonatomic) NSString *updateMetricContext;
@property (retain, nonatomic) NSString *targetVolumeUUID;
@property (retain, nonatomic) NSString *personalizedManifestRootsPath;
@property (retain, nonatomic) NSNumber *localAuthenticationUserID;
@property (retain, nonatomic) NSData *localAuthenticationContext;
@property (retain, nonatomic) NSString *mdmBootstrapToken;
@property (retain, nonatomic) NSData *appleConnectSsoToken;
@property (retain, nonatomic) NSString *appleConnectDAWToken;
@property (nonatomic) BOOL bridgeOSAllowTestMode;
@property (nonatomic) BOOL bridgeOSStagedUpdatesOnly;
@property (nonatomic) BOOL bridgeOSAllowAnyCatalogCertificate;
@property (nonatomic) BOOL bridgeOSIgnoreMinimumVersionCheck;
@property (retain, nonatomic) NSString *bridgeOSCatalogURL;
@property (retain, nonatomic) NSString *bridgeOSVersionOverride;
@property (retain, nonatomic) NSString *bridgeOSDownloadDirectory;
@property (retain, nonatomic) NSString *rosettaDownloadDirectory;
@property (nonatomic) BOOL enableEmbeddedOSInstall;
@property (nonatomic) BOOL enableBridgeOSInstall;
@property (nonatomic) BOOL enableOSPersonalization;
@property (retain, nonatomic) NSNumber *performPreflightEncryptedCheck;
@property (retain, nonatomic) NSNumber *performPreflightSnapshotCheck;
@property (retain, nonatomic) NSString *authenticationServiceID;
@property (retain, nonatomic) NSString *authenticationAppID;
@property (nonatomic) BOOL userInitiated;
@property (nonatomic) BOOL skipVolumeSealing;
@property (nonatomic) BOOL cancelUpdateOnClientDisconnect;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) BOOL disableRootVolumeSealCheck;
@property (nonatomic) BOOL supervised;
@property (retain, nonatomic) NSString *requestedPMV;
@property (nonatomic) BOOL MDMUseDelayPeriod;
@property (nonatomic) long long delayPeriodSecs;
@property (retain, nonatomic) NSString *liveAssetServerAudienceUUID;
@property (retain, nonatomic) NSDictionary *additionalUpdateMetricEventFields;
@property (retain, nonatomic) NSDictionary *additionalCatalogServerParams;
@property (retain, nonatomic) NSDictionary *additionalMSUUpdateOptions;
@property (retain, nonatomic) NSDictionary *additionalOverrides;

+ (id)nameForUpdateType:(long long)a0;
+ (id)stringForQoSType:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)overview;
- (id)initWithDefaultOverrides;
- (id)newSplatPolicyForClientRequest:(id)a0;
- (void)_configurePolicy:(id)a0 withClientRequest:(id)a1;
- (void)adjustBackgroundPropertyOnPolicy:(id)a0;
- (void)adjustOverridesForSSOToken;
- (void)adjustOverridesWithDescriptor:(id)a0 modifyingPolicy:(id)a1;
- (BOOL)isManagedSoftwareUpdate;
- (id)newMacUpdateBrainPolicyForMajorTargetBuild:(id)a0 minorTargetBuild:(id)a1 clientRequest:(id)a2 managedUpdateBrainOSVersion:(id)a3;
- (id)newPolicyForClientRequest:(id)a0;
- (id)newSFRPolicyWithoutExtensionsWithClientRequest:(id)a0;
- (id)newSplatRollbackPolicyForClientRequest:(id)a0;
- (BOOL)shouldScanForMajorUpdates;
- (BOOL)shouldScanForMinorUpdates;

@end
