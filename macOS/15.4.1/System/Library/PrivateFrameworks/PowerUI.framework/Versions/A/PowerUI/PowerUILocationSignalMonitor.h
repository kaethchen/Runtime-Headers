@class RTRoutineManager, NSDictionary, CLLocationManager, CLLocation, NSObject, NSString;
@protocol _CDLocalContext, OS_os_log, OS_dispatch_semaphore, OS_dispatch_queue, PowerUISignalMonitorDelegate;

@interface PowerUILocationSignalMonitor : NSObject <CLLocationManagerDelegate, PowerUISignalMonitor>

@property (retain, nonatomic) id<PowerUISignalMonitorDelegate> delegate;
@property (retain, nonatomic) RTRoutineManager *routine;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (nonatomic) int authorizationStatus;
@property (retain) CLLocation *currentLocation;
@property (retain) NSObject<OS_dispatch_semaphore> *requestLocationSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *authorizationSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fullChargeDateQueue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) NSDictionary *analyticsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)monitorWithDelegate:(id)a0;
+ (id)monitorWithDelegate:(id)a0 trialManager:(id)a1 withContext:(id)a2;
+ (id)stringFromRTType:(long long)a0;

- (void).cxx_destruct;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didVisit:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)LOIsWithinMeters:(int)a0;
- (id)coreRoutinePredictedEntryDateFromNearbyLOIs:(id)a0;
- (double)empiricalDurationAtRemoteLocation:(long long)a0 withPotentialLOIs:(id)a1;
- (double)empiricalDurationAwayFromLocations:(id)a0;
- (id)empiricalPredictedDateAwayFromNearbyLocations:(id)a0;
- (id)empiricalPredictedDateStayingAtNearbyLOIs:(id)a0 withRemoteLocation:(long long)a1;
- (long long)inKnownMicrolocation;
- (BOOL)inTypicalChargingLocationWithError:(id *)a0;
- (id)initWithDelegate:(id)a0 trialManager:(id)a1 withContextStore:(id)a2;
- (BOOL)isInSameTimeZone;
- (id)lastAcquiredLocation;
- (id)likelyToBeInKnownArea;
- (BOOL)locationIsUncertain:(id)a0;
- (void)logPredictionsWithDuration:(id)a0 withConfidence:(id)a1 withLOIString:(id)a2 withPredictionMethod:(id)a3 withSkipString:(id)a4;
- (id)longChargesAroundDate:(id)a0 withinSeconds:(double)a1 withinDays:(int)a2 withMinimumDuration:(double)a3 checkWhetherNearDate:(BOOL)a4;
- (BOOL)longChargesOccurredInLocationsNear:(id)a0 withError:(id *)a1;
- (BOOL)notAuthorizedForLocation;
- (id)requiredFullChargeDate;
- (unsigned long long)signalID;

@end
