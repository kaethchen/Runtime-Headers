@class HKWorkoutRoute, NSString, HDProfile, NSUUID, HDAssertion, NSObject;
@protocol OS_dispatch_queue, HDSampleSaving, HDLocationEventDelegate;

@interface HDLocationDataCollector : NSObject <HDLocationManagerObserver> {
    HDProfile *_profile;
    NSUUID *_workoutUUID;
    unsigned long long _activityType;
    double _desiredAccuracy;
    BOOL _predictedActivity;
    id<HDSampleSaving> _sampleSavingDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
    int _lastStatus;
    HKWorkoutRoute *_route;
    BOOL _didSaveLocationData;
    double _lastPausedTime;
    unsigned long long _elevationGain;
    HDAssertion *_locationUpdatingAssertion;
    unsigned long long _validLocationsCount;
    unsigned long long _skippedLocationsCount;
}

@property (readonly) long long state;
@property (weak, nonatomic) id<HDLocationEventDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resumeUpdates;
- (int)authorizationStatus;
- (BOOL)locationServicesEnabled;
- (void)stopUpdates;
- (void)startUpdates;
- (id)initWithProfile:(id)a0 sampleSavingDelegate:(id)a1 configuration:(id)a2 workoutUUID:(id)a3;
- (void)_queue_savedLocationData;
- (void)healthLocationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)healthLocationManager:(id)a0 didFailWithError:(id)a1;
- (void)healthLocationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)pauseUpdates;
- (void)pauseUpdatesAfterDelay:(unsigned long long)a0;
- (void)stopUpdatesAndDiscardData;
- (id)workoutLocationManager;

@end
