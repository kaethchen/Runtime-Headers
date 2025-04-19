@class NSUUID, NSString, NSLock, HDDataCollectionAssertion, NSSet, HKDataFlowLink, HDProfile, HKWorkoutConfiguration, HDClientDataCollectionObservationStateMonitor, HDHealthStoreClient, HDWorkoutSessionServer;

@interface HDWorkoutBasicDataSource : NSObject <HDQuantitySeriesObserver, HKDataFlowLinkProcessor, HDClientDataCollectionObservationStateMonitorDelegate, HDSensorDataObserver, HDWorkoutSessionObserver, HDWorkoutDataSource> {
    HDProfile *_profile;
    HDWorkoutSessionServer *_sessionServer;
    HDHealthStoreClient *_client;
    NSLock *_lock;
    HKDataFlowLink *_workoutDataFlowLink;
    NSUUID *_workoutDataProcessorUUID;
    HKWorkoutConfiguration *_workoutConfiguration;
    NSSet *_sampleTypesToCollect;
    HDDataCollectionAssertion *_collectionAssertion;
    HDDataCollectionAssertion *_heartRateDataCollectionAssertion;
    BOOL _sampleTypesContainHeartRate;
    HDClientDataCollectionObservationStateMonitor *_clientStateMonitor;
    BOOL _collectionStopped;
}

@property (copy, nonatomic) NSSet *sampleTypesToCollect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setWorkoutConfiguration:(id)a0;
- (void)workoutSession:(id)a0 didChangeToState:(long long)a1 fromState:(long long)a2 date:(id)a3;
- (void)workoutSession:(id)a0 didFailWithError:(id)a1;
- (void)workoutSession:(id)a0 didGenerateEvent:(id)a1;
- (void)profile:(id)a0 didDiscardSeriesOfType:(id)a1;
- (void)aggregator:(id)a0 didCollectSensorData:(id)a1 objectType:(id)a2 device:(id)a3;
- (void)dataCollectionObservationStateDidChangeForClient:(id)a0;
- (id)initWithConfiguration:(id)a0 client:(id)a1;
- (void)setSessionServer:(id)a0;
- (void)stopCollectionOnConnectionInvalidation;
- (id /* block */)transactionalQuantityInsertHandlerForProfile:(id)a0 journaled:(BOOL)a1 count:(long long)a2;
- (void)workoutDataDestination:(id)a0 didBeginActivity:(id)a1;
- (void)workoutDataDestination:(id)a0 didChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)workoutDataDestination:(id)a0 didEndActivity:(id)a1;
- (void)workoutDataDestination:(id)a0 didInsertEvent:(id)a1;
- (void)workoutDataDestination:(id)a0 didUpdateConfiguration:(id)a1;
- (void)workoutDataDestination:(id)a0 requestsDataFrom:(id)a1 to:(id)a2;
- (void)workoutDataDestination:(id)a0 requestsFinalDataFrom:(id)a1 to:(id)a2 completion:(id /* block */)a3;

@end
