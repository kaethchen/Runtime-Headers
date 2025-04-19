@class UNUserNotificationCenter, PowerUILocationSignalMonitor, NSString, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, OS_os_log, _CDLocalContext;

@interface PowerUIDrainMonitor : NSObject <UNUserNotificationCenterDelegatePrivate, PowerUISignalMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) UNUserNotificationCenter *unCenter;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) int notifyTestToken;
@property (nonatomic) int notifyToken;
@property (retain, nonatomic) PowerUILocationSignalMonitor *locationSignalMonitor;
@property (nonatomic) BOOL didEnableLPM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)disableLPM;
- (void)disableMitigations;
- (void)enableLPM;
- (void)enableMitigations;
- (void)evaluateNudgeForLPM;
- (BOOL)hasVariationForMedianLevels:(id)a0;
- (BOOL)isAtKnownChargingLocation;
- (id)isTrendingLowerWithBatteryLevel:(long long)a0 atDate:(id)a1;
- (void)postLPMNudgeNotificationWithInfo:(id)a0;
- (unsigned long long)slotForDate:(id)a0 withTimeSlotWidth:(unsigned long long)a1;

@end
