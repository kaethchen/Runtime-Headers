@class NSArray;

@interface HMDConfigurationLogEvent : HMMLogEvent

@property (readonly, nonatomic) unsigned long long instanceId;
@property (readonly, nonatomic) NSArray *homeConfigurations;
@property (readonly, nonatomic) unsigned long long totalHomes;
@property (readonly, nonatomic) unsigned long long totalNonEmptyHomes;
@property (readonly, nonatomic) unsigned long long totalOwnedHomes;
@property (readonly, nonatomic) unsigned long long totalResidentEnabledHomes;
@property (readonly, nonatomic) unsigned long long totalHomeCategoryBitMask;
@property (readonly, nonatomic) unsigned long long totalAppleMediaCategoryBitMask;
@property (readonly, nonatomic) unsigned long long totalThirdPartyMediaCategoryBitMask;
@property (readonly, nonatomic) long long totalUsers;
@property (readonly, nonatomic) long long totalAdminUsers;
@property (readonly, nonatomic) long long totalRestrictedGuests;
@property (readonly, nonatomic) unsigned long long totalUserPrivilegeBitMask;
@property (readonly, nonatomic) unsigned long long currentUserPrivilegeBitMask;
@property (readonly, nonatomic) unsigned long long totalAccessories;
@property (readonly, nonatomic) unsigned long long totalCertifiedAccessories;
@property (readonly, nonatomic) unsigned long long totalSmartHomeAccessories;
@property (readonly, nonatomic) unsigned long long totalHAPAccessories;
@property (readonly, nonatomic) unsigned long long totalHAPIPAccessories;
@property (readonly, nonatomic) unsigned long long totalHAPBTAccessories;
@property (readonly, nonatomic) unsigned long long totalCHIPAccessories;
@property (readonly, nonatomic) unsigned long long totalThreadAccessories;
@property (readonly, nonatomic) unsigned long long totalBridgedAccessories;
@property (readonly, nonatomic) unsigned long long totalTelevisionServiceAccessories;
@property (readonly, nonatomic) unsigned long long totalCameraAccessories;
@property (readonly, nonatomic) unsigned long long totalCameraAccessoriesRecordingEnabled;
@property (readonly, nonatomic) unsigned long long totalAppleMediaAccessories;
@property (readonly, nonatomic) unsigned long long totalAppleAudioAccessories;
@property (readonly, nonatomic) unsigned long long totalAppleTVAccessories;
@property (readonly, nonatomic) unsigned long long totalThirdPartyMediaAccessories;
@property (readonly, nonatomic) unsigned long long totalWholeHouseAudioAccessories;
@property (readonly, nonatomic) unsigned long long totalHAPSpeakerAccessories;
@property (readonly, nonatomic) unsigned long long totalEnabledResidents;
@property (readonly, nonatomic) unsigned long long totalScenes;
@property (readonly, nonatomic) unsigned long long totalTriggers;
@property (readonly, nonatomic) unsigned long long totalActiveTriggers;
@property (readonly) long long totalWidgets;
@property (readonly, nonatomic) unsigned int databaseSize;
@property (readonly, nonatomic) unsigned int metadataVersion;
@property (readonly, nonatomic) BOOL isResidentCapable;
@property (readonly, nonatomic) BOOL isResidentEnabled;
@property (readonly, nonatomic) BOOL isPrimaryResidentForSomeHome;
@property (readonly, nonatomic) BOOL isResidentFirstEnabledAnyHome;
@property (readonly, nonatomic) BOOL isResidentElectionV2EnabledAnyHome;
@property (readonly, nonatomic) unsigned long long totalResidentElectionBitMask;
@property (readonly, nonatomic) BOOL isFMFDevice;
@property (readonly, nonatomic) BOOL isTelevisionOnlyConfiguration;
@property (readonly, nonatomic) BOOL isMediaOnlyConfiguration;
@property (readonly, nonatomic) BOOL isResidentSelectionEnabledAnyHome;
@property (readonly, nonatomic) BOOL isResidentSelectionModeAutoAnyHome;
@property (readonly, nonatomic) BOOL isResidentSelectionModeCoordinationAnyHome;
@property (readonly, nonatomic) BOOL isResidentSelectionModeManualAnyHome;
@property (readonly, nonatomic) BOOL isStandaloneWatch;

- (void).cxx_destruct;
- (id)initWithHomeConfigurations:(id)a0 widgetDataSource:(id)a1 isFMFDevice:(BOOL)a2 isStandaloneWatch:(BOOL)a3;
- (id)initWithHomeManager:(id)a0 widgetDataSource:(id)a1 metadataVersion:(unsigned int)a2;
- (BOOL)isSubmitted;

@end
