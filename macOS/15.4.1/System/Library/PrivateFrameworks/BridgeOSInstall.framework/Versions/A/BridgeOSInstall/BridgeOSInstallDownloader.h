@class NSString, NSArray, PKDistribution, BOSDevice, NSURL, BOSPredicateUpdateProductManager, NSNumber, MSUProduct;

@interface BridgeOSInstallDownloader : NSObject

@property (retain) BOSPredicateUpdateProductManager *productManager;
@property (retain) BOSDevice *deviceForUnitTesting;
@property (readonly) NSArray *remotePackageSpecifiers;
@property (readonly) PKDistribution *distribution;
@property (readonly) MSUProduct *product;
@property (readonly) NSString *productBridgeVersion;
@property (readonly) NSNumber *productDownloadSize;
@property (readonly) NSNumber *productExtractedSize;
@property (readonly) NSURL *bridgeOSSoftwareUpdateEventRecordingServiceURL;

- (id)init;
- (void).cxx_destruct;
- (void)cancelDownload;
- (void)downloadProductToDirectory:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)findProductWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)requirementSatisfiedForMinimumBridgeVersion:(id)a0;
- (unsigned long long)requirementSatisfiedForProductBridgeVersionToMinimumBridgeVersion:(id)a0;
- (void)setCatalogURL:(id)a0 options:(unsigned long long)a1;
- (void)setMacOSInstallationAuxInfo:(id)a0;
- (void)setStagedUpdatesOnly:(BOOL)a0;
- (void)_setDeviceForUnitTesting:(id)a0;
- (void)addDownloadCacheWithURL:(id)a0;
- (unsigned long long)compareProductBridgeVersionToRunningBridgeVersion;
- (void)setCatalogURL:(id)a0 isDevelopmentCatalog:(BOOL)a1;
- (void)stopDownloadQueue;

@end
