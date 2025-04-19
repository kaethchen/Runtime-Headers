@class HDPeriodicActivity, NSString, HDAssertion, HDProfile, _HDWorkoutCondenserAnalyticsAccumulator, NSObject;
@protocol OS_dispatch_queue;

@interface HDWorkoutCondenser : NSObject <HDPeriodicActivityDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    HDPeriodicActivity *_periodicActivity;
    HDAssertion *_preparedDatabaseAccessibilityAssertion;
    HDAssertion *_onLockDatabaseAccessibilityAssertion;
    BOOL _onLockWorkoutCondensationInProgress;
    int _onLockDBAvailableNotificationToken;
    int _onLockDBUnavailableNotificationToken;
    long long _minimumSeriesSize;
    long long _maximumSeriesSize;
    long long _deletedSamplesThreshold;
    HDProfile *_profile;
    _HDWorkoutCondenserAnalyticsAccumulator *_analyticsAccumulator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)condensableQuantityTypes;
+ (id)seriesSyncIdentifierForEntity:(id)a0 workout:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)workoutEntitiesRequiringCondensationWithProfile:(id)a0 limit:(long long)a1 allowRecondensation:(BOOL)a2 error:(id *)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (void)condenseWorkoutsForReason:(long long)a0 workoutBatchLimit:(long long)a1 completion:(id /* block */)a2;
- (id)condensableWorkoutsWithError:(id *)a0;
- (BOOL)condenseWorkout:(id)a0 error:(id *)a1;
- (id)condensedWorkoutsWithError:(id *)a0;
- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (void)setDeletedSamplesThreshold:(long long)a0;
- (void)setMaximumSeriesSize:(long long)a0;
- (void)setMinimumSeriesSize:(long long)a0;

@end
