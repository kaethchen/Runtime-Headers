@class NSString, NSUUID, HDWorkoutBuilderServer;

@interface HDWorkoutBuilderSampleQueryServer : HDQueryServer <HDTaskServerObserver, HDWorkoutBuilderServerSampleObserer, HDDatabaseProtectedDataObserver> {
    BOOL _hasFinishedHistoricalFetch;
    BOOL _hasDeliveredInitialResults;
    BOOL _hasNotifiedFinishedHistoricalFetch;
    BOOL _deliverQuantities;
    NSUUID *_workoutBuilderIdentifier;
    HDWorkoutBuilderServer *_workoutBuilderServer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)_queue_start;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (BOOL)_shouldObserveDatabaseProtectedDataAvailability;
- (BOOL)_shouldObserveOnPause;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)didCreateTaskServer:(id)a0;
- (void)didInvalidateTaskServer:(id)a0;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)workoutBuilderServer:(id)a0 addedQuantities:(id)a1;
- (void)workoutBuilderServer:(id)a0 addedSamples:(id)a1;

@end
