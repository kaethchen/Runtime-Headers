@class NSString, _HKWorkoutEffortRelationshipQueryServerConfiguration;

@interface HDWorkoutEffortRelationshipQueryServer : HDBatchedQueryServer <HDAssociationObserver>

@property (readonly, copy, nonatomic) _HKWorkoutEffortRelationshipQueryServerConfiguration *ratingOfExertionAssociationQueryServerConfiguration;
@property (nonatomic) long long anchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_stop;
- (long long)_batchObjectsWithError:(id *)a0 batchHandler:(id /* block */)a1;
- (id)_fetchSamplesForWorkoutPID:(long long)a0 activity:(id)a1 options:(long long)a2 limit:(unsigned long long)a3 sortDescending:(BOOL)a4 error:(id *)a5;
- (id)_filteredRelationships:(id)a0 anchor:(id)a1;
- (void)_handleBatchedQueryResult:(long long)a0 error:(id)a1;
- (void)_queue_fetchAssociatedEffortSamplesWithHandler:(id /* block */)a0;
- (void)_queue_start;
- (id)_relationshipForWorkout:(id)a0 activity:(id)a1 samples:(id)a2;
- (void)associationsUpdatedForObject:(id)a0 subObject:(id)a1 type:(unsigned long long)a2 objects:(id)a3 anchor:(id)a4;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)queryClient;

@end
