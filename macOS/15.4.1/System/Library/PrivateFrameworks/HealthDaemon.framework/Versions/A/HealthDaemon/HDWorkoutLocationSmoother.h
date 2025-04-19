@class NSString, HDProfile, HDSmoothingTask, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDWorkoutLocationSmoother : NSObject <CLLocationSmootherDelegate, HDDatabaseProtectedDataObserver, HDForegroundClientProcessObserver, HDDataObserver, HDProfileReadyObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
    NSMutableArray *_pendingSmoothingTasks;
    HDSmoothingTask *_currentSmoothingTask;
    NSObject<OS_dispatch_source> *_timeoutSource;
    BOOL _needToCheckForLocationSeriesOnUnlock;
    BOOL _isFirstLaunchAndNotYetSmoothed;
}

@property (copy, nonatomic) id /* block */ didCompleteAllPendingSmoothingTasksHandler;
@property (copy, nonatomic) id /* block */ unitTest_wilTriggerSmoothing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (void)_associationsSyncedForWorkout:(id)a0;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)foregroundClientProcessesDidChange:(id)a0 previouslyForegroundBundleIdentifiers:(id)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)smoothRouteWithWorkoutUUID:(id)a0 completion:(id /* block */)a1;

@end
