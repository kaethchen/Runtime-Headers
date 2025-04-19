@class HDWorkoutBasicDataSource, NSString, NSUUID, HDProfile, HKWorkoutDataSourceConfiguration, HKDataFlowLink, NSLock;
@protocol HDWorkoutDataAccumulator;

@interface HDLiveWorkoutDataSource : HDStandardTaskServer <HKLiveWorkoutDataSourceServerInterface, HKDataFlowLinkProcessor, HDWorkoutDataSource, HDWorkoutDataDestination> {
    HDProfile *_profile;
    HKDataFlowLink *_workoutDataFlowLink;
    HKWorkoutDataSourceConfiguration *_dataSourceConfiguration;
    HDWorkoutBasicDataSource *_basicDataSource;
    NSLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;
@property (readonly) unsigned long long workoutDataDestinationState;
@property (readonly, nonatomic) id<HDWorkoutDataAccumulator> workoutDataAccumulator;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_setDataSourceConfiguration:(id)a0;
- (void)remote_startTaskServerIfNeeded;
- (void)remote_synchronizeWithCompletion:(id /* block */)a0;
- (void)addMetadata:(id)a0 dataSource:(id)a1;
- (void)addMetadataToWorkoutActivity:(id)a0 withSampleStartDate:(id)a1 dataSource:(id)a2;
- (void)addOtherSamples:(id)a0 dataSource:(id)a1;
- (void)addQuantities:(id)a0 dataSource:(id)a1;
- (void)addWorkoutEvents:(id)a0 dataSource:(id)a1;
- (void)didBeginActivity:(id)a0 dataSource:(id)a1;
- (void)didEndActivity:(id)a0 dataSource:(id)a1;
- (void)didReceiveDataFromRemoteWorkoutSession:(id)a0 completion:(id /* block */)a1;
- (void)didSuggestActivity:(id)a0 dataSource:(id)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)updateWorkoutConfiguration:(id)a0 dataSource:(id)a1;
- (void)workoutDataDestination:(id)a0 didAttachDataSourceToSessionIdentifer:(id)a1;
- (void)workoutDataDestination:(id)a0 didBeginActivity:(id)a1;
- (void)workoutDataDestination:(id)a0 didChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)workoutDataDestination:(id)a0 didEndActivity:(id)a1;
- (void)workoutDataDestination:(id)a0 didInsertEvent:(id)a1;
- (void)workoutDataDestination:(id)a0 didUpdateConfiguration:(id)a1;
- (void)workoutDataDestination:(id)a0 requestsDataFrom:(id)a1 to:(id)a2;
- (void)workoutDataDestination:(id)a0 requestsFinalDataFrom:(id)a1 to:(id)a2 completion:(id /* block */)a3;

@end
