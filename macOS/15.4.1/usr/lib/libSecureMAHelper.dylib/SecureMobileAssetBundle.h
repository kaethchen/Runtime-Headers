@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SecureMobileAssetBundle : NSObject {
    NSString *_assetBundlePath;
    NSString *_assetType;
    NSString *_assetSpecifier;
    NSDictionary *_assetInfoPlist;
    NSDictionary *_cryptexInfoPlist;
    NSDictionary *_assetAttributes;
}

@property (class, readonly) NSObject<OS_dispatch_queue> *personalizationQueue;

@property (readonly) NSString *secureAssetDataPath;
@property (readonly) NSString *graftPath;
@property (readonly) NSString *cryptexPath;
@property (readonly) NSString *secureInfoPlistPath;
@property (readonly) NSString *insecureInfoPlistPath;
@property (readonly) NSString *ticketPath;
@property (readonly) NSString *stagedPersonalizedManifestPath;
@property (readonly) unsigned int graftdmgType;
@property (readonly) NSString *rootHashPath;
@property (readonly) NSString *trustCachePath;
@property (readonly) NSDictionary *insecureInfoPlist;
@property (readonly) NSDictionary *assetAttributes;
@property (readonly) NSString *assetType;
@property (readonly) NSString *assetSpecifier;
@property (nonatomic) BOOL darwinOnly;
@property (readonly, nonatomic) NSString *assetBundlePath;
@property (readonly, nonatomic) BOOL isSecureMobileAsset;
@property (readonly, nonatomic) BOOL isPersonalized;
@property (readonly, nonatomic) BOOL isPersonalizedManifestStaged;
@property (readonly, nonatomic) BOOL isAccessible;
@property (readonly, nonatomic) NSString *accessPath;
@property (readonly, nonatomic) NSDictionary *secureInfoPlist;

+ (BOOL)commitStagedManifestsForSelectors:(id)a0 error:(id *)a1;
+ (BOOL)fsTag:(unsigned int *)a0 forAssetType:(id)a1 specifier:(id)a2;
+ (BOOL)clearGraftList:(id *)a0;
+ (BOOL)assetIsSecureMobileAsset:(id)a0;
+ (BOOL)commitStagedManifestsForSelectors:(id)a0 darwinOnly:(BOOL)a1 error:(id *)a2;
+ (id)copyGraftList:(id *)a0;
+ (id)getGraftListLock;
+ (id)getSigningServerURL:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (BOOL)isMounted;
- (BOOL)mount:(id *)a0;
- (BOOL)unmount:(id *)a0;
- (BOOL)isPersonalized:(long long *)a0;
- (BOOL)_generateNonceProposalForHandle:(unsigned long long)a0 digest:(id *)a1 nonce:(id *)a2 error:(id *)a3;
- (id)_manifestDataFromFullyFormedTicket:(id)a0;
- (BOOL)_personalize:(id)a0 error:(id *)a1;
- (id)_personalizedBundleTicketData;
- (BOOL)_shouldForcePersonalizationFailure;
- (BOOL)_storeManifest:(id)a0 stage:(BOOL)a1 error:(id *)a2;
- (id)assetValues;
- (id)attach:(id)a0 error:(id *)a1;
- (BOOL)beginAccess:(long long)a0 error:(id *)a1;
- (BOOL)beginAccess_nowait:(long long)a0 error:(id *)a1;
- (BOOL)depersonalize:(id *)a0;
- (id)devnodesForDiskImageID:(id)a0 error:(id *)a1;
- (BOOL)endAccess:(long long)a0 error:(id *)a1;
- (BOOL)endAccess_nowait:(long long)a0 error:(id *)a1;
- (BOOL)graft:(id *)a0;
- (BOOL)graftOrMount:(id *)a0;
- (id)integrityCatalogPath;
- (BOOL)isGrafted;
- (BOOL)isGraftedPath:(id)a0;
- (BOOL)isMappableToExclaves:(unsigned int *)a0;
- (BOOL)isPersonalizedManifestStaged:(long long *)a0;
- (BOOL)mapToExclaves:(id *)a0;
- (void)personalize:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (BOOL)personalize:(id)a0 error:(id *)a1;
- (void)recordAssetGraftStateForEarlyBootTask:(BOOL)a0;
- (BOOL)ungraft:(id *)a0;
- (BOOL)ungraftOrUnmount:(id *)a0;
- (BOOL)unmapFromExclaves:(id *)a0;

@end
