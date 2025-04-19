@class NSLock, NSMutableDictionary;

@interface JIMPeriodicTaskManager : NSObject

@property (retain) NSMutableDictionary *tasks;
@property double lastResumeTime;
@property BOOL suspending;
@property (retain) NSLock *lock;

+ (BOOL)isSuspended;
+ (id)_sharedPeriodicTaskManagerWithCreation:(BOOL)a0;
+ (void)addOperation:(id)a0 name:(id)a1 interval:(double)a2 retryInterval:(double)a3 queue:(id)a4;
+ (void)notFinishedLastOperation:(id)a0;
+ (void)resumePeriodicTasks;
+ (void)suspendPeriodicTasks;

- (void).cxx_destruct;

@end
