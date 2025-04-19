@class CLTripSegmentProcessorManager, CLLocation, RTMotionActivityManager, RTVehicleStore, RTTripSegmentTransitionPreprocessor, RTBackgroundInertialOdometryManager, RTDefaultsManager, NSMutableArray, CLTripSegmentProcessorOptions, RTTripSegmentManager, RTTripSegmentInertialDataManager, NSObject, RTElevationAdjuster, RTLearnedLocationManager, RTLocationManager;
@protocol OS_dispatch_queue;

@interface RTTripSegmentProvider : NSObject

@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTTripSegmentManager *tripSegmentManager;
@property (retain, nonatomic) CLTripSegmentProcessorManager *tripProcessorManager;
@property (retain, nonatomic) CLTripSegmentProcessorOptions *tripProcessorOptions;
@property (retain, nonatomic) RTTripSegmentInertialDataManager *inertialDataManager;
@property (retain, nonatomic) RTBackgroundInertialOdometryManager *inertialOdometryManager;
@property (retain, nonatomic) RTElevationAdjuster *elevationAdjuster;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTVehicleStore *vehicleStore;
@property (retain, nonatomic) RTTripSegmentTransitionPreprocessor *transitionPreprocessor;
@property (retain, nonatomic) CLLocation *transitionStartLocation;
@property (retain, nonatomic) CLLocation *transitionStopLocation;
@property (retain, nonatomic) NSMutableArray *transitionLocations;
@property (nonatomic) double processingChunkWidthSeconds;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL sessionInProgress;
@property (nonatomic) BOOL usingLegacyInertialData;

+ (long long)CLTripModeFromRTModeOfTransportation:(long long)a0;
+ (id)convertToTripSegmentLocations:(id)a0;
+ (BOOL)isLocationTypeSupported:(int)a0;
+ (BOOL)isTripSegmentGenerationSupportedOnPlatform:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)processChunkWithIndex:(unsigned long long)a0 inChunks:(id)a1;
- (void)_startReconstructTripSegmentWithTrainMode:(unsigned long long)a0;
- (void)addToTransitionLocationsBuffer:(id)a0 forDateInterval:(id)a1;
- (void)addTripSegmentFeaturesItem:(id)a0 intoList:(id)a1 overlapDateInterval:(id)a2 uuidType:(long long)a3;
- (BOOL)allowReprocessingOfTransitionsWithTripSegments;
- (BOOL)applyElevationAdjustmentToBreadcrumbs;
- (id)buildTinySegmentArrayForTransitionWithIndex:(unsigned long long)a0 withinDateInterval:(id)a1 fromActivity:(id)a2 uuidType:(long long)a3;
- (void)buildTripSegmentsForOneLearnedTransitionWithIndex:(unsigned long long)a0 inTransitions:(id)a1 trainMode:(unsigned long long)a2;
- (id)collectVehicleConnectionTimeIntervals:(id)a0;
- (double)getProcessingChunkWidthSeconds;
- (id)getTransitionlocations;
- (id)initWithLearnedLocationManager:(id)a0 locationManager:(id)a1 motionActivityManager:(id)a2 tripSegmentInertialDataManager:(id)a3 inertialOdometryManager:(id)a4 vehicleStore:(id)a5 tripSegmentManager:(id)a6 elevationAdjuster:(id)a7 distanceCalculator:(id)a8 defaultsManager:(id)a9 visitManager:(id)a10;
- (BOOL)isTripSegmentGenerationEnabled;
- (void)prepareTripProcessorOptions;
- (void)startReconstructTripSegmentWithTrainMode:(unsigned long long)a0;
- (id)trimTimeOfTripSegment:(id)a0 dateInterval:(id)a1 uuidType:(long long)a2;

@end
