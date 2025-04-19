@class PLSandboxedURL, NSString, LSBundleRecord, PLCaptureSessionState, NSSet, PLLazyObject;
@protocol PLDaemonServices;

@interface PLAssetsdConnectionAuthorization : NSObject <PLClientAuthorization> {
    id<PLDaemonServices> _daemonServices;
    struct { unsigned int val[8]; } _auditToken;
    NSSet *_photoKitEntitlements;
    PLLazyObject *_lazyPhotosAccessAllowed;
    PLLazyObject *_lazyPhotosAddAccessAllowed;
    PLLazyObject *_lazytrustedCallerContainingBundleRecord;
    PLLazyObject *_lazyTrustedCallerDisplayName;
    PLLazyObject *_lazyTrustedCallerPhotoLibraryUsageDescription;
    PLLazyObject *_lazyFetchFilterIdentifier;
    PLLazyObject *_lazyCaptureSessionState;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_clientLimitedLibraryCapable;
    PLSandboxedURL *_clientMainBundleSandboxedURL;
}

@property (readonly) struct { unsigned int x0[8]; } clientAuditToken;
@property (readonly) int clientProcessIdentifier;
@property (readonly, copy) NSString *trustedCallerBundleID;
@property (readonly, copy) LSBundleRecord *trustedCallerContainingBundleRecord;
@property (readonly, copy) NSString *trustedCallerDisplayName;
@property (readonly, copy) NSString *trustedCallerPhotoLibraryUsageDescription;
@property (readonly, copy) NSString *fetchFilterIdentifier;
@property (readonly) BOOL photoKitEntitled;
@property (readonly) BOOL directDatabaseAccessAuthorized;
@property (readonly) BOOL directDatabaseWriteAuthorized;
@property (readonly) BOOL cloudInternalEntitled;
@property (readonly) BOOL analyticsCacheReadEntitled;
@property (readonly) BOOL analyticsCacheWriteEntitled;
@property (readonly) BOOL smartSharingCacheReadEntitled;
@property (readonly) BOOL smartSharingCacheWriteEntitled;
@property (readonly) BOOL limitedLibraryMode;
@property (getter=isClientLimitedLibraryCapable) BOOL clientLimitedLibraryCapable;
@property (readonly) BOOL clientIsSandboxed;
@property (readonly) BOOL photosDataVaultEntitled;
@property (readonly) BOOL internalDataReadWriteAuthorized;
@property (readonly) BOOL coreSceneUnderstandingTaxonomyReadAuthorized;
@property (readonly) BOOL coreSceneUnderstandingTaxonomyWriteAuthorized;
@property (readonly, getter=isClientAuthorizedForTCCServicePhotos) BOOL clientAuthorizedForTCCServicePhotos;
@property (readonly, getter=isClientAuthorizedForTCCServicePhotosAdd) BOOL clientAuthorizedForTCCServicePhotosAdd;
@property (readonly) BOOL managedSpotlightIndexReadWriteEntitled;
@property (readonly) PLCaptureSessionState *captureSessionState;
@property (readonly, getter=isClientAuthorizedForLibraryUpgrade) BOOL clientAuthorizedForLibraryUpgrade;
@property (readonly, getter=isClientEntitledForPhotoKitOrPrivatePhotosTCC) BOOL clientEntitledForPhotoKitOrPrivatePhotosTCC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isCameraClient;
- (BOOL)isClientInLimitedLibraryMode;
- (BOOL)photoKitEntitledFor:(id)a0;
- (id)_captureSessionState;
- (id)_captureSessionStateFromAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)_fetchFilterIdentifier;
- (id)_isPhotosAccessAllowed;
- (id)_isPhotosAddAccessAllowed;
- (BOOL)_isPhotosPickerClient;
- (BOOL)_isPreferencesClient;
- (void)_setupAnalyticsCacheWithConnection:(id)a0;
- (void)_setupSmartSharingCacheWithConnection:(id)a0;
- (void)_trackCAConnectionEvent;
- (id)_trustedCallerContainingBundleRecord;
- (id)_trustedCallerDisplayName;
- (id)_trustedCallerPhotoLibraryUsageDescription;
- (id)initWithConnection:(id)a0 daemonServices:(id)a1;
- (void)invalidateClientAuthorizationCache;
- (BOOL)isClientAuthorizedForSandboxExtensions;
- (BOOL)isClientInFullLibraryMode;
- (BOOL)isClientInRestrictedMode;
- (BOOL)isPhotosClient;
- (BOOL)isQuickCheckReadyForAnalysisClient;
- (void)setClientMainBundleSandboxedURL:(id)a0;

@end
