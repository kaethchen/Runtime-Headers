@class NSString;

@interface HMDFeaturesDataSource : NSObject <HMDFeaturesDataSource>

@property (class, readonly, nonatomic) HMDFeaturesDataSource *defaultDataSource;

@property (readonly, getter=isPersistentBulletinRegistrationsFeatureEnabled) BOOL persistentBulletinRegistrationsFeatureEnabled;
@property (readonly, getter=isUserActivityStateDetectionFeatureEnabled) BOOL userActivityStateDetectionFeatureEnabled;
@property (readonly, getter=isHH2AutoMigrationEnabled) BOOL hh2AutoMigrationEnabled;
@property (readonly, getter=isHH2MigrationDryRunEnabled) BOOL hh2MigrationDryRunEnabled;
@property (readonly, getter=isNativeMatterEnabled) BOOL nativeMatterEnabled;
@property (readonly, getter=isRVCEnabled) BOOL RVCEnabled;
@property (readonly, getter=isMatterPincodesEnabled) BOOL matterPincodesEnabled;
@property (readonly, getter=isMatterTTUEnabled) BOOL matterTTUEnabled;
@property (readonly, getter=isSHADEREnabled) BOOL SHADEREnabled;
@property (readonly, getter=isSHADERMercuryEnabled) BOOL SHADERMercuryEnabled;
@property (readonly, getter=isDemoModeV2Enabled) BOOL demoModeV2Enabled;
@property (readonly, getter=isDemoModeV2EnabledAndActive) BOOL demoModeV2EnabledAndActive;
@property (readonly, getter=isDemoModeV2WithoutCKEnabled) BOOL demoModeV2WithoutCKEnabled;
@property (readonly, getter=isStereoOdeonTTSUBypassingPrimaryEnabled) BOOL stereoOdeonTTSUBypassingPrimaryEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isResidentSelectionEnabledForHomeUUID:(id)a0;

@end
