@class MPDocument, NSMutableDictionary, MPCluster, NSDate;

@interface MPClusterController : NSObject {
    NSMutableDictionary *mSlides;
    NSMutableDictionary *mSlideClusters;
    MPCluster *mAllSlidesCluster;
    double mMinimumRequiredClusterRating;
    MPDocument *mAuthoredDocument;
    NSDate *mOldestSlideTimestamp;
    NSDate *mNewestSlideTimestamp;
}

+ (id)sharedController;
+ (void)releaseSharedController;

- (void)dealloc;
- (id)init;
- (void)flush;
- (void)createLocationClustersForPaths:(id)a0;
- (void)updateRatingsForKeywordClusters;
- (id)dayOfYearClusterForAssetAtPath:(id)a0;
- (id)keywordClusters;
- (id)roundedFiveMinuteOfYearClusters;
- (void)_removeAllSingleSlideClustersForClusterCategory:(id)a0;
- (void)addKeywords:(id)a0 forSlide:(id)a1;
- (void)addPaths:(id)a0 toUserDefinedCluster:(id)a1;
- (long long)addSlideForPath:(id)a0 withIndex:(long long)a1;
- (id)allSlides;
- (id)allSlidesSortedByPaths:(id)a0;
- (id)allSlidesSortedByUsage;
- (id)allSlidesSortedChronologically;
- (id)clusterSlidesSortedByUserDefinedSortOrder:(id)a0 userDefinedSlideOrder:(id)a1;
- (id)clusterSlidesSortedChronologically:(id)a0;
- (id)clustersBasedOnOrderedPaths:(id)a0;
- (id)dayOfYearClusters;
- (void)dumpClustersStatistics;
- (void)dumpSlidesStatistics;
- (id)findBestChronologicalCluster:(id)a0 startingWithSlide:(id)a1;
- (id)findBestCluster:(id)a0;
- (id)findBestCluster:(id)a0 withMaxEffectSize:(long long)a1 idealEffectSize:(long long)a2;
- (id)findBestClusterBasedOnUserDefinedSlideOrder:(id)a0 startingWithSlide:(id)a1;
- (void)flushClusters;
- (id)hourOfYearClusterForAssetAtPath:(id)a0;
- (id)hourOfYearClusters;
- (id)locationClusters;
- (id)minuteOfYearClusterForAssetAtPath:(id)a0;
- (id)minuteOfYearClusters;
- (id)monthClusterForAssetAtPath:(id)a0;
- (id)monthClusters;
- (id)monthOfYearClusterForAssetAtPath:(id)a0;
- (id)monthOfYearClusters;
- (id)nextLeastUsedSlides:(long long)a0 forLayer:(id)a1 markAsUsed:(BOOL)a2;
- (id)orderedAndPrioritizedSlideClusters;
- (id)prioritizedSlideClustersDictionary;
- (void)removeAllSingleSlideClusters;
- (void)resetAllUsageCounters;
- (id)roundedFifteenMinuteOfYearClusterForAssetAtPath:(id)a0;
- (id)roundedFifteenMinuteOfYearClusters;
- (id)roundedFiveMinuteOfYearClusterForAssetAtPath:(id)a0;
- (void)setAuthoredDocument:(id)a0;
- (id)slideForPath:(id)a0;
- (void)sortClusterSlidesChronologically:(id *)a0;
- (void)updateAllSlidesClusterWithSlide:(id)a0;
- (void)updateClusterRatings;
- (void)updateDayOfYearClustersWithDate:(id)a0 ofSlide:(id)a1;
- (void)updateHourOfYearClustersWithDate:(id)a0 ofSlide:(id)a1;
- (void)updateMinuteOfYearClustersWithDate:(id)a0 ofSlide:(id)a1;
- (void)updateMonthClustersWithDate:(id)a0 ofSlide:(id)a1;
- (void)updateMonthOfYearClustersWithDate:(id)a0 ofSlide:(id)a1;
- (void)updateRatingsForDayOfYearClusters;
- (void)updateRatingsForHourOfYearClusters;
- (void)updateRatingsForLocationClusters;
- (void)updateRatingsForMinuteOfYearClusters;
- (void)updateRatingsForMonthClusters;
- (void)updateRatingsForMonthOfYearClusters;
- (void)updateRatingsForRoundedFifteenMinuteOfYearClusters;
- (void)updateRatingsForRoundedFiveMinuteOfYearClusters;
- (void)updateRatingsForYearClusters;
- (void)updateRoundedFifteenMinuteOfYearClustersWithDate:(id)a0 ofSlide:(id)a1;
- (void)updateRoundedFiveMinuteOfYearClustersWithDate:(id)a0 ofSlide:(id)a1;
- (void)updateYearClustersWithDate:(id)a0 ofSlide:(id)a1;
- (id)userProvidedClusters;
- (id)yearClusterForAssetAtPath:(id)a0;
- (id)yearClusters;

@end
