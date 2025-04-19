@class UNUserNotificationCenter, NSString, NSObject, NSUserDefaults;
@protocol OS_os_log, OS_dispatch_queue;

@interface PowerUINotificationManager : NSObject <UNUserNotificationCenterDelegate>

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) UNUserNotificationCenter *unCenter;
@property (retain, nonatomic) NSString *lastScheduledFullChargeNotificationID;
@property (nonatomic) BOOL immediateCharge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)chargeLimitRecommendationContentWithLimit:(unsigned long long)a0;
+ (id)chargeLimitRecommendationRequestWithLimit:(unsigned long long)a0;
+ (id)fullChargeDeadlineStringFromDate:(id)a0;
+ (id)obcEngagedContentWithDeadline:(id)a0 toppingOff:(BOOL)a1;
+ (id)obcEngagedRequestWithDeadline:(id)a0 isToppingOff:(BOOL)a1;
+ (id)pausedNotificationContentFromDate:(id)a0 bundle:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)removeAllNotifications;
- (void)resetAll;
- (id)contentForInternalDurationPredictionWithDuration:(double)a0 withConfidence:(double)a1;
- (id)currentOBCEngagedNotification;
- (id)getDeliveredNotifications;
- (BOOL)internalCECNotificationsDisabled;
- (id)postCECEngagedNotificationWithDate:(id)a0;
- (id)postCECFirstTimeNotification;
- (id)postChargeLimitRecommendationWithLimit:(unsigned long long)a0;
- (void)postInternalCECNotificationForChargingDates:(id)a0;
- (id)postInternalCECNotificationWithID:(id)a0 chargingStatus:(BOOL)a1 information:(id)a2 shouldReplace:(BOOL)a3;
- (void)postInternalChargeDurationNotificationWithDuration:(double)a0 withConfidence:(double)a1;
- (id)postInternalChargingIntelligenceNotificationWithChargingStatus:(BOOL)a0 information:(id)a1 url:(id)a2 validUntil:(id)a3;
- (void)postInternalNotificationAtDate:(id)a0 withTitle:(id)a1 withTextContent:(id)a2 icon:(id)a3 url:(id)a4 expirationDate:(id)a5;
- (id)postNotificationWithRequest:(id)a0;
- (id)postOBCEngagedNotificationWithDate:(id)a0;
- (id)postOBCEngagedTopOffNotificationWithDate:(id)a0;
- (void)removeCECNotifications;
- (void)removeCECPausedNotification;
- (void)updateOBCEngagedNotificationWithDate:(id)a0;

@end
