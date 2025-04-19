@class NSData, NSString, HMDNaturalLightingContext, NSDate, HMDHomeKitVersion, NSDictionary, HMDHomeNFCReaderKey, NSTimeZone, NSNumber;

@interface HMDHomeModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *encodedNaturalLightingContext;
@property (retain, nonatomic) NSData *hh2EncodedNfcReaderKey;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *ownerName;
@property (retain, nonatomic) NSString *ownerUserID;
@property (retain, nonatomic) NSString *ownerUUID;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *firstHAPAccessoryAddedDate;
@property (retain, nonatomic) NSString *defaultRoomUUID;
@property (retain, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (retain, nonatomic) NSNumber *presenceComputeStatus;
@property (retain, nonatomic) NSData *ownerPublicKey;
@property (retain, nonatomic) NSData *homeLocationData;
@property (retain, nonatomic) NSString *primaryResidentUUID;
@property (copy, nonatomic) HMDHomeKitVersion *sharedHomeSourceVersion;
@property (retain, nonatomic) NSNumber *networkProtectionMode;
@property (copy, nonatomic) NSNumber *multiUserEnabled;
@property (copy, nonatomic) NSData *matCredGRK;
@property (copy, nonatomic) NSNumber *soundCheckEnabled;
@property (copy, nonatomic) NSNumber *siriPhraseOptions;
@property (copy, nonatomic) NSNumber *hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property (copy, nonatomic) NSNumber *hasOnboardedForAccessCode;
@property (copy, nonatomic) NSNumber *hasOnboardedForWalletKey;
@property (copy, nonatomic) HMDNaturalLightingContext *naturalLightingContext;
@property (copy, nonatomic) NSNumber *chipFabricID;
@property (copy, nonatomic) NSNumber *chipFabricIndex;
@property (copy, nonatomic) NSNumber *chipLastNodeID;
@property (copy, nonatomic) NSData *chipRootCertificate;
@property (copy, nonatomic) NSData *chipOperationalCertificate;
@property (copy, nonatomic) NSData *chipIntermediateCertificate;
@property (copy, nonatomic) NSDictionary *chipKeyValueStore;
@property (copy, nonatomic) NSNumber *locationServicesEnabled;
@property (copy, nonatomic) NSNumber *didOnboardLocationServices;
@property (copy, nonatomic) NSNumber *residentSyncClientDidSync;
@property (copy, nonatomic) NSNumber *owned;
@property (copy, nonatomic) HMDHomeNFCReaderKey *nfcReaderKey;
@property (copy, nonatomic) NSNumber *residentSelectionVersion;
@property (copy, nonatomic) NSNumber *didOnboardEventLog;
@property (copy, nonatomic) NSNumber *eventLogHomeSettingEnabled;
@property (copy, nonatomic) NSNumber *eventLogDuration;
@property (copy, nonatomic) NSNumber *matterControllerNodeID;
@property (copy, nonatomic) NSNumber *matterFabricID;
@property (copy, nonatomic) NSData *threadOperationalDataset;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSNumber *numberOfCameras;

+ (id)properties;
+ (id)cd_getHomeFromUUID:(id)a0;

- (id)cd_generateValueForModelObjectFromManagedObject:(id)a0 modelObjectField:(id)a1 modelFieldInfo:(id)a2;
- (id)cd_generateValueForProperty:(id)a0 managedObjectField:(id)a1 context:(id)a2;

@end
