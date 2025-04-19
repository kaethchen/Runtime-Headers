@class NSString, NSManagedObjectContext, PLManagedAsset;

@interface PLVideoInternalResourceContext : NSObject <PLVideoResourceContext, PLVideoChoosingAssetInformation> {
    NSManagedObjectContext *_moc;
    PLManagedAsset *_asset;
}

@property (readonly, nonatomic) BOOL isWalrusEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)uuid;
- (BOOL)validateResource:(id)a0;
- (id)backingResourceForVideoResource:(id)a0;
- (BOOL)hasAdjustments;
- (id)initWithManagedObjectContext:(id)a0 asset:(id)a1;
- (BOOL)isPhotoIris;
- (id)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;
- (id)videoResourcesMatchingVersions:(id)a0;
- (BOOL)isOriginalSlomo;
- (void)repairResource:(id)a0;
- (BOOL)shouldUseNonAdjustedVersion;
- (double)sizeThresholdForHighQuality;

@end
