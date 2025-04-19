@interface CSFOnDeviceCachedIrPurgingUtils : NSObject

+ (void)cleanUpLegacyCachedIrDir:(id)a0;
+ (void)cleanUpPreviousBuildBnnsIrInCachedIrDir:(id)a0;
+ (void)purgeCachedIrForTrialAssetExcludingCurrentAsset:(id)a0 baseCachedIrDir:(id)a1;
+ (void)removeOnDeviceCachedPath;
+ (void)purgeCachedIrExceptActiveCachedIrs:(id)a0 cachedIrDir:(id)a1;

@end
