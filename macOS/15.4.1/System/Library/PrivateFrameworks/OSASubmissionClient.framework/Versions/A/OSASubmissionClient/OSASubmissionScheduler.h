@interface OSASubmissionScheduler : NSObject

+ (id)_calculateNewCadenceParametersWithPermissive:(BOOL)a0 fastLane:(BOOL)a1;
+ (id)_getCurrentCadenceParametersFromActivity:(id)a0;
+ (void)_incrementRetryCount;
+ (double)_lastSuccessTime;
+ (void)_resetRetryCount;
+ (long long)_retryCount;
+ (void)_saveLastSuccessTime;
+ (void)_scheduleSubmissionWithPermissive:(BOOL)a0;
+ (void)_updateCadenceForActivity:(id)a0 newCadenceParameters:(id)a1;
+ (void)createUserSubmissionDirectory:(id)a0;
+ (void)scheduleCleanupWithHomeDirectory:(id)a0;
+ (void)scheduleSubmission;

@end
