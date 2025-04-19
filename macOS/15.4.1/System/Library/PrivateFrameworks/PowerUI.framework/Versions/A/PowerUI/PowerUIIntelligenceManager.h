@class NSString, PowerUITrialManager, NSDictionary, _OSChargingPredictor, NSObject;
@protocol OS_os_log, _CDContext;

@interface PowerUIIntelligenceManager : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) id<_CDContext> context;
@property (retain, nonatomic) NSString *defaultsDomain;
@property (retain, nonatomic) PowerUITrialManager *trialManager;
@property (retain, nonatomic) _OSChargingPredictor *chargingPredictor;
@property (retain, nonatomic) NSDictionary *lastPluginPredictionInfo;

- (void).cxx_destruct;
- (void)handleCallback;
- (id)initWithDefaultsDomain:(id)a0 withContextStore:(id)a1 withTrialManager:(id)a2;
- (void)postAnalyticsEventForNewEventTypeWithPredictedDurationMinutes:(long long)a0 andActualDurationMinutes:(long long)a1 andConfidence:(double)a2 didMeetThreshold:(int)a3 andWasWireless:(BOOL)a4 andPredictionScheme:(id)a5;
- (void)postAnalyticsEventForOldEventTypeWithPredictedDurationMinutes:(long long)a0 andActualDurationMinutes:(long long)a1;
- (void)postPluginNotificationWithPredictorOutput:(id)a0 andError:(id)a1 andState:(id)a2;
- (id)queryPredictedPlugoutDate;
- (void)removePluginNotification;
- (id)ttrURLforBadPredictionsWithStateDictionary:(id)a0;

@end
