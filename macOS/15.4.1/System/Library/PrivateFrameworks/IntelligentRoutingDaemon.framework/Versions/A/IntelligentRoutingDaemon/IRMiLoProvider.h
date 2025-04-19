@class ULConnection, NSUUID, NSString, NSObject;
@protocol OS_dispatch_queue, IRMiLoProviderObserverProtocol;

@interface IRMiLoProvider : NSObject <IRMiLoFeedbackProvider>

@property (retain, nonatomic) ULConnection *connection;
@property (nonatomic) BOOL isMiLoServiceStateRunning;
@property (nonatomic) long long miLoServiceQuality;
@property (nonatomic) long long miLoServiceQualityReasonBitmap;
@property (nonatomic) long long miLoServiceSuspendedReasonBitmap;
@property (retain, nonatomic) NSUUID *legacyServiceUUID;
@property (retain, nonatomic) NSUUID *serviceUUID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<IRMiLoProviderObserverProtocol> observer;
@property (nonatomic) int miLoConnectionProgressStatus;
@property (nonatomic) int numberOfConsecutiveMiLoFailAttempts;
@property (retain, nonatomic) NSString *miloServiceStatusStringQE;
@property (nonatomic) BOOL isLowLatency;
@property (retain, nonatomic) NSUUID *requestSinglePredictionIdentifier;
@property (nonatomic) BOOL spotOnLocationRequested;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isQualityValid:(long long)a0;
+ (BOOL)deleteServiceWithToken:(id)a0;
+ (long long)highConfidenceValue;
+ (BOOL)isConfidenceValid:(long long)a0;
+ (BOOL)isInMotion:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)removeObserver;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (id)initWithQueue:(id)a0;
- (void)connection:(id)a0 didUpdatePrediction:(id)a1;
- (long long)_bitmapFromServiceQualityReasonArray:(id)a0;
- (long long)_bitmapFromServiceSuspendedReasonArray:(id)a0;
- (void)_connectToLslService;
- (int)_locationTypeToIRLocationSemantic:(id)a0;
- (id)_miloServiceStatusLogStringFromStatus:(id)a0;
- (void)_serviceReset;
- (void)_serviceResetAndIncreaseFailCount;
- (void)addObserver:(id)a0 withToken:(id)a1 withLegacyServiceUUID:(id)a2 isLowLatency:(BOOL)a3;
- (void)connection:(id)a0 didCompleteRequest:(id)a1 withError:(id)a2;
- (void)connection:(id)a0 didEnableMicrolocationAtCurrentLocationWithError:(id)a1;
- (void)connection:(id)a0 didUpdateServiceStatus:(id)a1;
- (id)getMiloServiceStatusStringQEWithPrediction:(id)a0;
- (void)labelPredictionUuid:(id)a0 withEventUuid:(id)a1;
- (void)recoverServiceIfRequired;
- (id)requestSinglePrediction;
- (void)resetSpotOnLocationRequest;
- (void)setSpotOnLocation;
- (BOOL)startLowLatencyMiLo;

@end
