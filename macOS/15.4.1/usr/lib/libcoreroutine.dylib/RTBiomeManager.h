@class RTDataProtectionManager, RTDefaultsManager, BPSSink, RTLearnedLocationManager, BMBiomeScheduler, RTAuthorizationManager, RTPlatform;

@interface RTBiomeManager : RTService

@property (retain, nonatomic) BMBiomeScheduler *scheduler;
@property (retain, nonatomic) BPSSink *sink;
@property (readonly, copy, nonatomic) RTAuthorizationManager *authorizationManager;
@property (readonly, copy, nonatomic) RTDataProtectionManager *dataProtectionManager;
@property (readonly, copy, nonatomic) RTDefaultsManager *defaultsManager;
@property long long encryptedDataAvailability;
@property (readonly, copy, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (readonly, copy, nonatomic) RTPlatform *platform;
@property (nonatomic) BOOL routineEnabled;

+ (id)biomeStreamTypeToBiomeStream:(long long)a0;
+ (id)streamTypeToString:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_setup;
- (id)_translateToBiomeVisitLocation:(id)a0;
- (id)_translateRTVisitToBiomeObject:(id)a0;
- (void)_cancelSubscriptionBiomeConnectionCompanion;
- (void)_clearBiomeStreamForStreamType:(long long)a0 error:(id *)a1;
- (long long)_compareEvent1:(id)a0 event2:(id)a1 streamType:(long long)a2;
- (id)_extractDateIntervalFromBiomeEvent1:(id)a0 event2:(id)a1 streamType:(long long)a2;
- (id)_getLatestBiomeDataForStreamType:(long long)a0 error:(id *)a1;
- (BOOL)_isValidEvent:(id)a0 streamType:(long long)a1;
- (void)_onAuthorizationNotification:(id)a0;
- (void)_onDataProtectionNotification:(id)a0;
- (void)_onLearnedLocationManagerAvailabilityDidChangeNotification:(id)a0;
- (void)_onLearnedLocationManagerDidUpdateNotification:(id)a0;
- (void)_publishNewHindsightVisitsToBiomeWithError:(id *)a0;
- (void)_startSubscriptionBiomeConnectionCompanion;
- (id)_translateToBiomeMapItem:(id)a0;
- (id)_translateToBiomePlaceInference:(id)a0;
- (int)_translateToBiomePlaceType:(unsigned long long)a0;
- (int)_translateToBiomeUserSpecificPlaceType:(unsigned long long)a0;
- (int)_translateToBiomeUserSpecificPlaceTypeSource:(unsigned long long)a0;
- (int)_translateToBiomeVisitLocationReferenceFrame:(int)a0;
- (int)_translateToBiomeVisitLocationSourceAccuracy:(unsigned long long)a0;
- (int)_translateToBiomeVisitSource:(long long)a0;
- (int)_translateToBiomeVisitType:(long long)a0;
- (void)cancelSubscriptionBiomeConnectionCompanion;
- (void)enumerateEventsWithinDateInterval:(id)a0 streamType:(long long)a1 handler:(id /* block */)a2;
- (id)initWithAuthorizationManager:(id)a0 dataProtectionManager:(id)a1 defaultsManager:(id)a2 learnedLocationManager:(id)a3 platform:(id)a4;
- (void)onAuthorizationNotification:(id)a0;
- (void)onDataProtectionNotification:(id)a0;
- (void)onLearnedLocationManagerAvailabilityDidChangeNotification:(id)a0;
- (void)onLearnedLocationManagerDidUpdateNotification:(id)a0;
- (void)startSubscriptionBiomeConnectionCompanion;

@end
