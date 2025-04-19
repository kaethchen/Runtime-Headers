@class NSString, NSDictionary, CKUploadRequestConfiguration, NSArray, NSNumber, CKAccountOverrideInfo;
@protocol CKTestDeviceReferenceProtocol;

@interface CKContainerOptions : NSObject <CKPropertiesDescription, CKSQLiteItem, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long qualityOfService;
@property BOOL returnPCSMetadata;
@property (retain) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (copy) NSString *personaIdentifier;
@property BOOL returnRequestOperationProto;
@property BOOL isServiceManatee;
@property (copy) NSDictionary *fakeEntitlements;
@property BOOL holdAllOperations;
@property (copy) NSNumber *immediateUseDatabaseScopeForTesting;
@property (retain) id<CKTestDeviceReferenceProtocol> testDeviceReferenceProtocol;
@property BOOL captureResponseHTTPHeaders;
@property BOOL useZoneWidePCS;
@property (copy) CKAccountOverrideInfo *accountOverrideInfo;
@property (copy) CKAccountOverrideInfo *accountInfoOverride;
@property unsigned long long mmcsEncryptionSupport;
@property (copy) NSString *encryptionServiceName;
@property BOOL bypassPCSEncryption;
@property BOOL enforceNamedOperationGroups;
@property BOOL forceEnableReadOnlyManatee;
@property BOOL useClearAssetEncryption;
@property BOOL accountInfoCacheIsDisabled;
@property BOOL useAnonymousToServerShareParticipants;
@property BOOL encryptMergeableValueMetadata;
@property (copy) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (copy) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (copy) NSString *applicationBundleIdentifierOverrideForPushTopicGeneration;
@property (copy) NSString *applicationBundleIdentifierOverrideForTCC;
@property BOOL maintainRecordUploadOrder;
@property BOOL addDatabaseScopeToZoneIDs;
@property BOOL fetchChangesForMergeableValues;
@property BOOL prefersHiddenAllowedSharingOptionsUI;
@property BOOL acceptServerSignedRecords;
@property (copy) NSArray *supportedDeviceCapabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)CKShortDescriptionRedact:(BOOL)a0;
- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithSqliteRepresentation:(id)a0;
- (void)setApplicationBundleIdentifierOverride:(id)a0;
- (void)setUseMMCSEncryptionV2:(BOOL)a0;
- (id)sqliteRepresentation;

@end
