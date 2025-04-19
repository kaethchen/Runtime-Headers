@class NSUserDefaults, NSObject;
@protocol OS_os_log, OS_dispatch_queue, _CDLocalContext;

@interface PowerUIDrainAnalyzer : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (nonatomic) long long minBatteryLevel;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)resetState;
- (void)recordAnalytics;
- (void)monitorPluggedInStatus;
- (void)recordPredictionResultAndTime;
- (void)scheduleAnalyticsActivity;
- (void)scheduleLowSOCPrediction;
- (void)updateLPMAndMinSOC;

@end
