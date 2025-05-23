@interface PLPrefetchConfiguration : NSObject

@property (nonatomic) unsigned short memoryMaxPrefetchPhotosCount;
@property (nonatomic) unsigned short memoryMaxPrefetchVideosCount;
@property (nonatomic) unsigned short memoryPrefetchLimit;
@property (nonatomic) unsigned long long cloudResourcePrefetchMaxFileSize;
@property (nonatomic) double cloudResourceInitialMinimumFreeDiskSpaceForOptimizeRatio;
@property (nonatomic) unsigned long long cloudResourceMaximumSmallLibraryThreshold;
@property (nonatomic) long long memoryPrefetchAllowedIfLastViewedDateWithin;
@property (nonatomic) long long memoryPrefetchIfCreationDateWithin;
@property (nonatomic) unsigned short cloudResourceComputeSyncMaxResourcesPerFetch;
@property (readonly, nonatomic) unsigned short cloudResourceMaxPrefetchRetry;
@property (readonly, nonatomic) unsigned short cloudResourceThumbnailsMaxResourcesPerFetch;
@property (readonly, nonatomic) unsigned short cloudResourceMemoriesMaxResourcesPerFetch;
@property (readonly, nonatomic) unsigned short cloudResourceWidgetMaxResourcesPerFetch;
@property (readonly, nonatomic) unsigned short cloudResourceNonThumbnailsMaxResourcesPerFetch;
@property (readonly, nonatomic) unsigned short cloudResourceMediaMetadataOverflowMaxResourcesPerFetch;
@property (readonly, nonatomic) unsigned long long cloudResourceIntervalBetweenCheckCPLBGDownload;
@property (readonly, nonatomic) double cloudResourceIncrementalMinimumFreeDiskSpaceForOptimizeRatio;
@property (readonly, nonatomic) unsigned long long cloudResourceATVNearLowDiskThreshold;
@property (readonly, nonatomic) double cloudResourceSmallLibraryThresholdRatio;
@property (readonly, nonatomic) long long optimizedNonThumbnailInitialPrefetchDateIntervalBeforeNow;

+ (long long)_defaultPrefetchOptimizeMode;
+ (long long)defaultPrefetchOptimizeMode;
+ (id)descriptionForPrefetchOptimizeMode:(long long)a0;
+ (id)overridePrefetchOptimizeMode;

- (id)initWithPrefetchDictionary:(id)a0;
- (long long)prefetchOptimizeModeForTotalSizeOfOriginalResources:(long long)a0 totalSizeOfLocallyAvailableOriginalResources:(long long)a1 availableSpace:(long long)a2 overrideMaximumSmallLibraryThresholdGB:(long long)a3 nonThumbnailsBudget:(long long)a4;
- (unsigned long long)smallLibrarySizeThresholdForTotalSizeOfLocallyAvailableOriginalResources:(long long)a0 availableSpace:(long long)a1 overrideMaximumThresholdGB:(long long)a2;
- (void)updateValuesFromPrefetchDictionary:(id)a0;
- (void)updateValuesFromTrialIfNecessary;

@end
