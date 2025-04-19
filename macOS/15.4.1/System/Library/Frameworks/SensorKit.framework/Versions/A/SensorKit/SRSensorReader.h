@class NSString, SRAuthorizationClient, NSDate;
@protocol SRSensorReaderDelegate, SRReaderStorageBackend;

@interface SRSensorReader : NSObject <SRAuthorizationClientDelegate> {
    double _serviceStartTime;
    double _earliestEligibleTime;
    _Atomic int _authState;
}

@property (copy) NSString *canonicalSensor;
@property (retain) SRAuthorizationClient *authorizationClient;
@property (copy) NSString *bundleId;
@property (retain) NSDate *_lastModifiedAuthorizationTime;
@property (retain) NSString *requestedSensor;
@property (retain, nonatomic) id<SRReaderStorageBackend> datastoreBackend;
@property (readonly, nonatomic) Class sampleClass;
@property (readonly, nonatomic) Class exportingSampleClass;
@property (nonatomic) BOOL bypassHoldingPeriod;
@property (readonly, nonatomic) double earliestEligibleTime;
@property (readonly, nonatomic) double serviceStartTime;
@property (readonly) long long authorizationStatus;
@property (readonly, copy) NSString *sensor;
@property (weak) id<SRSensorReaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (void)initialize;
+ (void)_requestAuthorizationMigrationForSensors:(id)a0 completion:(id /* block */)a1;
+ (void)authorizationRequestStatusForBundle:(id)a0 sensors:(id)a1 completionHandler:(id /* block */)a2;
+ (id /* block */)createExportDataForServices:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id /* block */)createExportDataWithCompletionHandler:(id /* block */)a0;
+ (void)requestAuthorizationForBundle:(id)a0 sensors:(id)a1 legacyPromptErrorBehavior:(BOOL)a2 withCompletionHandler:(id /* block */)a3;
+ (void)requestAuthorizationForBundle:(id)a0 sensors:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)requestAuthorizationForSensors:(id)a0 completion:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)fetch:(id)a0;
- (BOOL)isAuthorized;
- (void)setAuthorizationStatus:(long long)a0;
- (void)startRecording;
- (void)stopRecording;
- (BOOL)fetchingRequest:(id)a0 didFetchResult:(id)a1;
- (id)initWithSensor:(id)a0;
- (void)_startRecordingWithSensorConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_updateAuthorizationStatusWithAuthorizedServices:(id)a0 deniedServices:(id)a1 dataCollectionEnabled:(BOOL)a2 onboardingCompleted:(BOOL)a3 lastModifiedTimes:(id)a4 forBundleIdentifier:(id)a5;
- (BOOL)_updateAuthorizationStatusWithAuthorizedServices:(id)a0 deniedServices:(id)a1 dataCollectionEnabled:(BOOL)a2 onboardingCompleted:(BOOL)a3 lastModifiedTimes:(id)a4 forBundleIdentifier:(id)a5 previousAuthorizationStatus:(long long)a6;
- (void)authorizedServicesDidChange:(id)a0 deniedServices:(id)a1 dataCollectionEnabled:(BOOL)a2 onboardingCompleted:(BOOL)a3 lastModifiedTimes:(id)a4 forBundleIdentifier:(id)a5;
- (id /* block */)createExportDataWithCompletionHandler:(id /* block */)a0;
- (void)didChangeAuthorizationStatus:(long long)a0;
- (void)didCompleteFetch:(id)a0;
- (void)didFetchDevices:(id)a0;
- (void)fetchDevices;
- (void)fetchDevices:(id /* block */)a0;
- (void)fetchDevicesDidFailWithError:(id)a0;
- (void)fetchDevicesWithRetryAttempt:(int)a0;
- (void)fetchReaderMetadata;
- (void)fetchingRequest:(id)a0 failedWithError:(id)a1;
- (id)initWithSensor:(id)a0 bundle:(id)a1;
- (id)initWithSensor:(id)a0 sensorDescription:(id)a1 datastoreBackend:(id)a2 authorizationClient:(id)a3 bundleId:(id)a4;
- (void)sensorReaderDidStopRecording;
- (void)sensorReaderWillStartRecording;
- (void)setExportingSampleFromDescription:(id)a0;
- (void)setSampleClassFromDescription:(id)a0;
- (void)startRecordingFailedWithError:(id)a0;
- (void)startRecordingWithCompletionHandler:(id /* block */)a0;
- (void)stopRecordingFailedWithError:(id)a0;
- (void)stopRecordingWithCompletionHandler:(id /* block */)a0;

@end
