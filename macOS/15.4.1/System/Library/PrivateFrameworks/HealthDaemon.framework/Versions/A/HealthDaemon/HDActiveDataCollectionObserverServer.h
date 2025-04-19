@class NSString, NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface HDActiveDataCollectionObserverServer : HDStandardTaskServer <HKActiveDataCollectionObserverServerInterface, HDCurrentWorkoutObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_observedTypes;
    NSSet *_recentlyNotifiedTypes;
    BOOL _recentlyNotifiedPauseState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (void)launchObservingProcessesForTypes:(id)a0;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_subscribeForQuantityTypes:(id)a0;
- (void)remote_unsubscribeForQuantityTypes:(id)a0;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)workoutManager:(id)a0 currentWorkout:(id)a1 didChangeToState:(long long)a2;
- (void)workoutManager:(id)a0 didUpdateCurrentWorkout:(id)a1;

@end
