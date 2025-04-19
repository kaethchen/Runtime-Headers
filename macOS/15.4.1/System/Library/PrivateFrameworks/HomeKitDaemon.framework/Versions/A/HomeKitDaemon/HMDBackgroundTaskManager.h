@class NSMutableDictionary, NSString, HMDBackgroundTaskLogger, NSNotificationCenter;
@protocol HMDDateProvider;

@interface HMDBackgroundTaskManager : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) HMDBackgroundTaskManager *sharedManager;

@property (readonly, nonatomic) NSMutableDictionary *tasksByIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *pendingTaskDateByIdentifier;
@property (readonly, nonatomic) HMDBackgroundTaskLogger *logger;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id<HMDDateProvider> dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)_handleEvent:(id)a0;
- (void)configure;
- (void)_unregisterEventWithIdentifier:(id)a0;
- (void)_handlePendingTaskWithIdentifier:(id)a0 date:(id)a1;
- (void)_postNotificationWithIdentifier:(id)a0;
- (void)_registerEventWithIdentifier:(id)a0 fireDate:(id)a1;
- (void)_setTask:(id)a0 forIdentifier:(id)a1;
- (id)_taskForIdentifier:(id)a0;
- (void)cancelTaskWithIdentifier:(id)a0 onObserver:(id)a1;
- (id)expectedFireDateForTaskWithIdentifier:(id)a0;
- (BOOL)hasOutstandingTaskWithIdentifier:(id)a0;
- (id)initWithNotificationCenter:(id)a0 dateProvider:(id)a1 logger:(id)a2;
- (BOOL)scheduleTaskWithIdentifier:(id)a0 fireDate:(id)a1 onObserver:(id)a2 selector:(SEL)a3 error:(id *)a4;

@end
