@class NSObject;
@protocol OS_dispatch_queue;

@interface TVISActivityScheduler : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedInstance;
+ (long long)_performBackgroundActivityWithContext:(id)a0 outDidUpdate:(BOOL *)a1;
+ (unsigned long long)assetServiceRunContextForBackgroundActivityContext:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)checkForUpdates;
- (void)_checkForUpdatesWithActivityContext:(id)a0 logContext:(id)a1 forceScheduling:(BOOL)a2;
- (id)_anticipatedDownloadDateForInterval:(long long)a0;
- (id)_candidateScheduledDate;
- (void)_registerLaunchEvents;
- (void)_scheduleBackgroundActivityForced:(BOOL)a0;
- (BOOL)_shouldScheduleUpdateForDate:(id)a0 previouslyScheduledDate:(id)a1;

@end
