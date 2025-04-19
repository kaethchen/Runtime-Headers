@class RTVisitSCIStayCluster, RTHint, RTHintManager, NSDate, NSObject, RTDefaultsManager, NSMutableArray, NSString, RTDelayedLocationRequester, RTLocation, NSArray, RTDistanceCalculator, RTVisitHyperParameter;
@protocol OS_dispatch_queue;

@interface RTVisitPipelineModuleSCI : NSObject <RTVisitPipelineModule> {
    BOOL _useLowConfidence;
    NSMutableArray *_clusters;
    RTLocation *_lastPointProcessed;
    RTDistanceCalculator *_distanceCalculator;
    NSArray *_hintCache;
    RTLocation *_hintCacheUpdateLocation;
    double _requiredDwellTimeCache;
    NSDate *_requiredDwellTimeCacheDateToUpdate;
}

@property (readonly, nonatomic) unsigned long long fsmState;
@property (readonly, nonatomic) unsigned long long lcFSMState;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDelayedLocationRequester *delayedLocationRequester;
@property (retain, nonatomic) RTHintManager *hintManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RTVisitHyperParameter *hyperParameter;
@property (nonatomic) BOOL latestGeofenceHintChecked;
@property (retain, nonatomic) RTHint *latestGeofenceHint;
@property (nonatomic) BOOL latestSignificantRegionHintChecked;
@property (retain, nonatomic) RTHint *latestSignificantRegionHint;
@property (readonly, nonatomic) RTVisitSCIStayCluster *workingHypothesis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)FSMStateToString:(unsigned long long)a0;
+ (id)FSMEventToString:(unsigned long long)a0;
+ (id)LCFSMStateToString:(unsigned long long)a0;
+ (BOOL)filterHint:(id)a0 sourceFilter:(id)a1 inverseFilter:(BOOL)a2;

- (id)init;
- (void).cxx_destruct;
- (void)shutdown;
- (id)process:(id)a0;
- (BOOL)isHint:(id)a0 withinDistance:(double)a1 location:(id)a2;
- (void)processContextChangeWithSource:(long long)a0;
- (BOOL)isVisitInFlight;
- (id)relevantDateForHintSource:(long long)a0 date:(id)a1;
- (void)_onHintNotification:(id)a0;
- (void)addToClusters:(id)a0;
- (void)addVisitFromWorkingHypothesis:(long long)a0 confidence:(double)a1;
- (void)exitFromWorkingHypothesis;
- (void)exitUntilNotInWorkingHypotheisWithBlock:(id /* block */)a0;
- (id)filterHints:(id)a0 existingHints:(id)a1;
- (id)getHintConsistentWithLocation:(id)a0 sourceFilter:(id)a1 inverseFilter:(BOOL)a2;
- (id)getHintWithinDistance:(double)a0 ofLocation:(id)a1 sourceFilter:(id)a2 inverseFilter:(BOOL)a3;
- (id)getHintsNearLocation:(id)a0 withinDistance:(double)a1 sourceFilter:(id)a2 fromDate:(id)a3 limit:(unsigned long long)a4;
- (id)getLastHintUsingSourceFilter:(id)a0;
- (id)handleFSM:(unsigned long long)a0 point:(id)a1;
- (id)hintsNearLocation:(id)a0;
- (id)initWithDefaultsManager:(id)a0 delayedLocationRequester:(id)a1 hintManager:(id)a2 queue:(id)a3 hyperParameter:(id)a4 useLowConfidence:(BOOL)a5;
- (BOOL)isDwellTimeSatisfiedForLocation:(id)a0;
- (BOOL)isHintConsistentWithLocation:(id)a0 hint:(id)a1;
- (BOOL)isHintNearLocation:(id)a0;
- (BOOL)isInWorkingHypothesis;
- (BOOL)isLastRegionHintNearLocation:(id)a0 hintSource:(long long)a1;
- (BOOL)isTimeOutsideClusterSatisfiedForOutlierCount:(unsigned long long)a0 location:(id)a1;
- (BOOL)isValidLatestRegionHintSource:(long long)a0 date:(id)a1;
- (id)latestCachedHintOfSource:(long long)a0;
- (double)minStaticIntervalForSLVArrival;
- (double)minStaticIntervalForSLVArrivalWithHint;
- (void)onHintNotification:(id)a0;
- (void)populateHintCacheNearLocation:(id)a0 withinDistance:(double)a1;
- (void)processContextOnGeofenceEntry;
- (void)processPoints:(id)a0;
- (void)refreshCachedHintOfSource:(long long)a0;
- (void)refreshLatestGeofenceHintCache;
- (void)refreshLatestSignificantRegionHintCache;
- (double)requiredDwellTimeForLocation:(id)a0;
- (double)requiredTimeOutsideClusterForOutlierCount:(unsigned long long)a0 location:(id)a1;
- (void)resetWorkingHypothesis;
- (id)retrieveNonLOIHintsNearLocation:(id)a0 withinDistance:(double)a1;
- (id)stateMachineConfidenceString;

@end
