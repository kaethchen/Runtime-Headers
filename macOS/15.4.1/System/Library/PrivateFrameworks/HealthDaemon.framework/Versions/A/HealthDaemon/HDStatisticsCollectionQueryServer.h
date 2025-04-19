@class NSDate, NSString, _HKDateIntervalCollection, HKStatisticsCollectionCacheSettings, NSMutableDictionary, NSDateInterval, HDStatisticsCollectionCalculator, HDSampleAggregateCachingSession, HDStatisticsCollectionCalculatorDefaultSourceOrderProvider, HKQuantityType;
@protocol HDStatisticsCollectionQueryServerDataSource;

@interface HDStatisticsCollectionQueryServer : HDQueryServer <HDQuantitySeriesObserver> {
    _HKDateIntervalCollection *_intervalCollection;
    id<HDStatisticsCollectionQueryServerDataSource> _dataSource;
    HDStatisticsCollectionCalculatorDefaultSourceOrderProvider *_sourceOrderProvider;
    HDStatisticsCollectionCalculator *_calculator;
    NSMutableDictionary *_pendingQuantitiesBySeries;
    BOOL _addedSamplesRequireProtectedData;
    BOOL _requiresFetch;
    BOOL _hasScheduledUpdate;
    BOOL _deliversUpdates;
    unsigned long long _mergeStrategy;
    NSDateInterval *_resultsDateInterval;
    HKQuantityType *_quantityType;
    HKStatisticsCollectionCacheSettings *_cacheSettings;
    HDSampleAggregateCachingSession *_cachingSession;
    long long _cacheHits;
}

@property (copy, nonatomic) id /* block */ unitTest_queryServerStatisticsEnumerationHandler;
@property (copy, nonatomic) id /* block */ unitTest_queryServerUpdateStatisticsHandler;
@property (copy, nonatomic) id /* block */ unitTest_queryServerUnableToUpdateStatisticsHandler;
@property (readonly, nonatomic) NSDate *anchorDate;
@property (readonly, nonatomic) unsigned long long statisticsOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (BOOL)supportsAnchorBasedAuthorization;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)quantityType;
- (void)profile:(id)a0 didDiscardSeriesOfType:(id)a1;
- (id)_newCachingSessionWithProfile:(id)a0 cachingIdentifier:(id)a1 sourceEntity:(id)a2 queryDescriptor:(id)a3 cachedClass:(Class)a4 queryInterval:(id)a5 anchorDate:(id)a6 intervalComponents:(id)a7 timeIntervalToBucketIndex:(id /* block */)a8;
- (void)_queue_start;
- (BOOL)_shouldListenForUpdates;
- (BOOL)_shouldObserveDatabaseProtectedDataAvailability;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id /* block */)transactionalQuantityInsertHandlerForProfile:(id)a0 journaled:(BOOL)a1 count:(long long)a2;

@end
