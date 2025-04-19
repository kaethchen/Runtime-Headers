@interface CWFAssetPowerTable : NSObject {
    unsigned long long numberOfCallsToCopyAsset;
    unsigned long long numberOfTimesAssetExisted;
    unsigned long long numberOfSuccessfullAssetCopy;
}

@property (nonatomic) BOOL allowTestingOnUnSupportedChipset;

+ (id)assetSpecifierToTrack;
+ (id)currentLatestAssetVersion;
+ (id)getDeviceSKU;
+ (id)hashedChipsetName;
+ (BOOL)isSupportedChipset;
+ (BOOL)isSupportedDeviceClass;
+ (BOOL)isSupportedOTAPTUpdate;
+ (BOOL)shouldAllowTestingOnUnSupportedChipset;

- (id)description;
- (id)init;
- (void)createTopLevelDir;
- (void)garbageCollectWithNewAsset:(id)a0 prevAsset:(id)a1;
- (void)processLocalAsset:(id)a0;
- (id)transferAssetFromSrc:(id)a0 toDst:(id)a1 withAsseID:(id)a2 withVersion:(id)a3 firstSupportedBuild:(id)a4 lastSupportedBuild:(id)a5;

@end
