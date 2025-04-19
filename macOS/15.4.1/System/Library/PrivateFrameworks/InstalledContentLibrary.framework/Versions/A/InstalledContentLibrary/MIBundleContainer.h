@class MIBundleMetadata, NSURL, MIExecutableBundle, MIStoreMetadata;

@interface MIBundleContainer : MIContainer

@property (copy, nonatomic) MIBundleMetadata *bundleMetadata;
@property (copy, nonatomic) MIStoreMetadata *iTunesMetadata;
@property (readonly, nonatomic) MIExecutableBundle *bundle;
@property (readonly, nonatomic) unsigned int bundleMaxLinkedSDKVersion;
@property (readonly, nonatomic) NSURL *bundleMetadataURL;
@property (readonly, nonatomic) NSURL *iTunesMetadataURL;
@property (readonly, nonatomic) NSURL *referenceStorageURL;
@property (readonly, nonatomic) BOOL shouldHaveCorrespondingDataContainer;
@property (readonly, nonatomic) BOOL hasParallelPlaceholder;
@property (readonly, nonatomic) NSURL *parallelPlaceholderURL;

+ (id)allAppBundleContainersWithError:(id *)a0;
+ (id)appBundleContainerForIdentifier:(id)a0 inDomain:(unsigned long long)a1 withError:(id *)a2;
+ (id)appBundleContainerForIdentifier:(id)a0 temporary:(BOOL)a1 inDomain:(unsigned long long)a2 withError:(id *)a3;
+ (id)appBundleContainerWithIdentifier:(id)a0 createIfNeeded:(BOOL)a1 created:(BOOL *)a2 error:(id *)a3;
+ (id)pluginKitPluginBundleContainerWithIdentifier:(id)a0 createIfNeeded:(BOOL)a1 created:(BOOL *)a2 error:(id *)a3;
+ (id)tempAppBundleContainerWithIdentifier:(id)a0 error:(id *)a1;
+ (id)tempAppBundleContainerWithIdentifier:(id)a0 inDomain:(unsigned long long)a1 withError:(id *)a2;
+ (id)tempPluginKitPluginBundleContainerWithIdentifier:(id)a0 error:(id *)a1;
+ (BOOL)updateiTunesMetadata:(id)a0 forAppWithIdentifier:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithContainer:(id)a0 error:(id *)a1;
- (id)_bundleExtensionForContainerClassWithError:(id *)a0;
- (BOOL)_configureBundleWithError:(id *)a0;
- (BOOL)_writeRawiTunesMetadataData:(id)a0 error:(id *)a1;
- (BOOL)bestEffortRollbackiTunesMetadata:(id)a0 error:(id *)a1;
- (id)bundleMetadataWithError:(id *)a0;
- (BOOL)captureBundleByMoving:(id)a0 withError:(id *)a1;
- (BOOL)captureStoreDataFromDirectory:(id)a0 doCopy:(BOOL)a1 failureIsFatal:(BOOL)a2 includeiTunesMetadata:(BOOL)a3 withError:(id *)a4;
- (id)iTunesMetadataWithError:(id *)a0;
- (id)initForAppContainerWithURL:(id)a0;
- (id)initWithContainerURL:(id)a0 containingBundleWithURL:(id)a1;
- (id)initWithToken:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)makeContainerLiveReplacingContainer:(id)a0 reason:(unsigned long long)a1 waitForDeletion:(BOOL)a2 withError:(id *)a3;
- (BOOL)saveBundleMetadata:(id)a0 withError:(id *)a1;
- (BOOL)writeiTunesMetadata:(id)a0 error:(id *)a1;

@end
