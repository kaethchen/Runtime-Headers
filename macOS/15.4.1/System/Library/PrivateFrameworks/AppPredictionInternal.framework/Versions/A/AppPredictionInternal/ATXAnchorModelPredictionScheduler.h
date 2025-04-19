@class NSUserDefaults, ATXAnchorModelHyperParameters, NSDate, _PASLock;
@protocol ATXPETEventTracker2Protocol, ATXAnchorModelPredictionForwarderProtocol;

@interface ATXAnchorModelPredictionScheduler : NSObject {
    _PASLock *_schedulerLock;
    id<ATXAnchorModelPredictionForwarderProtocol> _predictionForwarder;
    ATXAnchorModelHyperParameters *_hyperParameters;
    id<ATXPETEventTracker2Protocol> _tracker;
    NSDate *_now;
    NSUserDefaults *_defaults;
    unsigned long long _maxPredictions;
}

- (id)init;
- (void).cxx_destruct;
- (id)now;
- (id)_cache;
- (id)predictions;
- (void)forwardPredictionUpdatesOnDate:(id)a0;
- (id)_readPredictionsFromCache;
- (void)clearPredictionsForAnchor:(id)a0;
- (id)criteriaForJobOnDate:(id)a0;
- (BOOL)dateIsInFuture:(id)a0 now:(id)a1;
- (id)dateOfSoonestUpcomingPredictionChange;
- (id)deduplicatedPredictions:(id)a0;
- (id)earlierDateInFuture:(id)a0 earliestDateSoFar:(id)a1 now:(id)a2;
- (void)forwardPredictionUpdates;
- (id)initWithPredictionForwarder:(id)a0 hyperParameters:(id)a1 tracker:(id)a2 now:(id)a3 maxPredictions:(unsigned long long)a4;
- (void)initializeLock;
- (void)logPredictionsGeneratedMetricsWithAnchorModelPredictions:(id)a0;
- (void)persistPredictions:(id)a0 anchor:(id)a1;
- (id)predictionsAfterFilteringInactiveAnchors:(id)a0;
- (id)predictionsValidNow;
- (id)predictionsWithTimeIntervalOverlappingWithCurrentTime;
- (void)registerXPCActivityForPredictionUpdateWithCriteria:(id)a0;
- (void)scheduleExistingPredictions;
- (void)scheduleNextPredictionUpdate;
- (void)schedulePredictions:(id)a0 anchor:(id)a1;

@end
