@class RTWiFiManager, RTTimer, RTPlaceInferenceManager, NSMutableDictionary, RTDefaultsManager, RTLocationManager, NSMutableArray, RTTimerManager;

@interface RTPointOfInterestSampler : RTService

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) RTLocationManager *locationManager;
@property (readonly, nonatomic) RTPlaceInferenceManager *placeInferenceManager;
@property (readonly, nonatomic) RTTimerManager *timerManager;
@property (readonly, nonatomic) RTWiFiManager *wifiManager;
@property (nonatomic) double samplingInterval;
@property (retain, nonatomic) NSMutableDictionary *requesters;
@property (retain, nonatomic) RTTimer *samplingTimer;
@property (retain, nonatomic) RTTimer *wifiScanTimer;
@property (nonatomic) BOOL registeredForWifiScan;
@property (retain, nonatomic) NSMutableArray *accessPoints;
@property (nonatomic) BOOL running;
@property (nonatomic) BOOL shouldRun;

- (id)init;
- (void).cxx_destruct;
- (void)_addRequester:(id)a0 samplingInterval:(double)a1;
- (void)_removeRequester:(id)a0;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_startSampling;
- (void)_updateSamplingInterval;
- (id)initWithDefaultsManager:(id)a0 locationManager:(id)a1 placeInferenceManager:(id)a2 timerManager:(id)a3 wifiManager:(id)a4;
- (void)onWiFiScanNotification:(id)a0;
- (void)startSamplingPointOfInterestFromRequester:(id)a0 samplingInterval:(double)a1;
- (void)stopSamplingPointOfInterestFromRequester:(id)a0;

@end
