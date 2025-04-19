@class NSString, LSBundleRecord, PLCaptureSessionState;

@interface PLAssetsdCrashRecoveryClientAuthorization : NSObject <PLClientAuthorization>

@property (readonly) struct { unsigned int val[8]; } clientAuditToken;
@property (readonly) int clientProcessIdentifier;
@property (readonly, copy) NSString *trustedCallerBundleID;
@property (readonly, copy) LSBundleRecord *trustedCallerContainingBundleRecord;
@property (readonly, copy) NSString *fetchFilterIdentifier;
@property (readonly, copy) NSString *trustedCallerDisplayName;
@property (readonly, copy) NSString *trustedCallerPhotoLibraryUsageDescription;
@property (readonly) BOOL photoKitEntitled;
@property (readonly) BOOL directDatabaseAccessAuthorized;
@property (readonly) BOOL directDatabaseWriteAuthorized;
@property (readonly) BOOL cloudInternalEntitled;
@property (readonly) BOOL analyticsCacheReadEntitled;
@property (readonly) BOOL analyticsCacheWriteEntitled;
@property (readonly) BOOL smartSharingCacheReadEntitled;
@property (readonly) BOOL smartSharingCacheWriteEntitled;
@property (readonly) BOOL limitedLibraryMode;
@property (readonly, getter=isClientLimitedLibraryCapable) BOOL clientLimitedLibraryCapable;
@property (readonly) BOOL clientIsSandboxed;
@property (readonly) BOOL photosDataVaultEntitled;
@property (readonly) BOOL internalDataReadWriteAuthorized;
@property (readonly, getter=isClientAuthorizedForTCCServicePhotos) BOOL clientAuthorizedForTCCServicePhotos;
@property (readonly, getter=isClientAuthorizedForTCCServicePhotosAdd) BOOL clientAuthorizedForTCCServicePhotosAdd;
@property (readonly) BOOL coreSceneUnderstandingTaxonomyReadAuthorized;
@property (readonly) BOOL coreSceneUnderstandingTaxonomyWriteAuthorized;
@property (readonly) PLCaptureSessionState *captureSessionState;
@property (readonly) BOOL managedSpotlightIndexReadWriteEntitled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
