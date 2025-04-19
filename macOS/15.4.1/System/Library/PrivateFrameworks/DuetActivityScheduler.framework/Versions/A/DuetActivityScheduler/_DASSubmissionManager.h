@class _DASSubmissionRateLimiter, NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface _DASSubmissionManager : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSMutableDictionary *activityGroupQueue;
@property (retain, nonatomic) NSMutableDictionary *submittedActivities;
@property (retain, nonatomic) NSMutableDictionary *activityGroups;
@property (nonatomic) int dastoolToken;
@property (retain, nonatomic) _DASSubmissionRateLimiter *rateLimiter;

+ (id)groupNameForActivity:(id)a0;
+ (id)pluginGroupNameForGroupName:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)activityCanceled:(id)a0 withScheduler:(id)a1;
- (void)submitActivities:(id)a0 withScheduler:(id)a1;
- (void)activityCompleted:(id)a0 withScheduler:(id)a1;
- (void)admitNextActivityAfterCompletionOf:(id)a0 withScheduler:(id)a1;
- (unsigned long long)capacityForGroupName:(id)a0;
- (void)createActivityGroup:(id)a0;
- (void)handleCanceledActivity:(id)a0 withGroupName:(id)a1;
- (BOOL)shouldDelayGroupSubmissionOfActivity:(id)a0;
- (BOOL)shouldQueueActivity:(id)a0;
- (void)submitActivity:(id)a0 inGroup:(id)a1 withScheduler:(id)a2;
- (void)submitActivity:(id)a0 withScheduler:(id)a1;
- (void)updateCapacity:(unsigned long long)a0 forGroupName:(id)a1;

@end
