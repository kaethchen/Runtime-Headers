@class RTLocationManager, RTDefaultsManager, RTPlatform, RTTimerManager, RTPlaceInference, RTPlaceInferenceManager, RTLearnedLocationStore, RTLearnedLocationManager, RTLocation, RTTimer, RTAuthorizationManager, RTVisitManager, RTDistanceCalculator;

@interface RTLocationContextManager : RTService

@property (readonly, nonatomic) RTAuthorizationManager *authorizationManager;
@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (readonly, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (readonly, nonatomic) RTLocationManager *locationManager;
@property (readonly, nonatomic) RTPlaceInferenceManager *placeInferenceManager;
@property (readonly, nonatomic) RTPlatform *platform;
@property (readonly, nonatomic) RTTimerManager *timerManager;
@property (readonly, nonatomic) RTVisitManager *visitManager;
@property (nonatomic) BOOL routineEnabled;
@property (nonatomic) BOOL locationContextMonitoringEnabled;
@property (retain, nonatomic) RTLocation *latestValidLocation;
@property (retain, nonatomic) RTLocation *lastPublishedLocation;
@property (retain, nonatomic) RTPlaceInference *lastPublishedPlaceInference;
@property (nonatomic) BOOL inLowConfidenceVisit;
@property (nonatomic) BOOL inHighConfidenceVisit;
@property (retain, nonatomic) RTTimer *timer;

- (id)init;
- (void).cxx_destruct;
- (void)_setup;
- (void)_onLeechedLocationNotification:(id)a0;
- (BOOL)_clearTimerWithError:(id *)a0;
- (id)_getFamIndexResultWithGranularity:(unsigned long long)a0 location:(id)a1 error:(id *)a2;
- (id)_getLearnedLOIForVisit:(id)a0 error:(id *)a1;
- (id)_getPlaceInferencesAtLocation:(id)a0 error:(id *)a1;
- (void)_onAuthorizationNotification:(id)a0;
- (void)_onLearnedLocationManagerNotification:(id)a0;
- (void)_onVisitManagerNotification:(id)a0;
- (BOOL)_postLocationContextNotificationUsingData:(id)a0 error:(id *)a1;
- (BOOL)_resetTimerWitherror:(id *)a0;
- (id)initWithAuthorizationManager:(id)a0 defaultsManager:(id)a1 distanceCalculator:(id)a2 learnedLocationManager:(id)a3 learnedLocationStore:(id)a4 locationManager:(id)a5 placeInferenceManager:(id)a6 platform:(id)a7 timerManager:(id)a8 visitManager:(id)a9;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)onAuthorizationNotification:(id)a0;
- (void)onLearnedLocationManagerNotification:(id)a0;
- (void)onLeechedLocationNotification:(id)a0;
- (void)onVisitManagerNotification:(id)a0;

@end
