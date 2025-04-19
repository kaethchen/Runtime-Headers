@class NSString, NSDate;

@interface PLBackgroundJobWorkItem : PLManagedObject

@property (nonatomic) long long jobFlags;
@property (nonatomic) short jobType;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSDate *delayUntilDate;

+ (id)entityName;
+ (id)_predicateForJobFlags:(long long)a0;
+ (id)_predicateForJobType:(short)a0;
+ (id)_searchIndexWorkItemManagedObjectIDsInManagedObjectContext:(id)a0 jobType:(short)a1 fetchLimit:(unsigned long long)a2 additionalPredicate:(id)a3;
+ (id)_workItemsSortedByTimestampWithIdentifier:(id)a0 jobTypes:(id)a1 fetchLimit:(id)a2 resultType:(unsigned long long)a3 inManagedObjectContext:(id)a4 error:(id *)a5;
+ (BOOL)backgroundJobSearchIndexingEnabled;
+ (id)countOfSearchIndexInsertAssetWorkItemsInManagedObjectContext:(id)a0;
+ (id)countOfSearchIndexWorkItemsInManagedObjectContext:(id)a0;
+ (id)deleteAllSearchIndexJobsInManagedObjectContext:(id)a0;
+ (id)insertBackgroundJobWorkItemIfNeededWithIdentifier:(id)a0 jobType:(short)a1 jobFlags:(long long)a2 inManagedObjectContext:(id)a3;
+ (id)insertBackgroundJobWorkItemWithIdentifier:(id)a0 jobType:(short)a1 jobFlags:(long long)a2 inManagedObjectContext:(id)a3;
+ (id)insertDeleteFromSearchIndexWorkItemIfNeededWithIdentifier:(id)a0 managedObjectContext:(id)a1;
+ (id)insertDonateToSearchIndexWorkItemIfNeededWithIdentifier:(id)a0 flags:(long long)a1 managedObjectContext:(id)a2;
+ (id)insertSearchIndexWorkItemIfNeededWithIdentifier:(id)a0 flags:(long long)a1 managedObjectContext:(id)a2;
+ (id)jobIdentifierWithIdentifier:(id)a0 jobType:(short)a1 jobFlags:(long long)a2;
+ (id)nextSearchIndexWorkItemJobFlagsInManagedObjectContext:(id)a0 jobType:(short)a1;
+ (id)searchIndexWorkItemManagedObjectIDNeedingRepairInManagedObjectContext:(id)a0;
+ (id)searchIndexWorkItemManagedObjectIDsByPriorityInManagedObjectContext:(id)a0 fetchLimit:(unsigned long long)a1;
+ (id)searchIndexWorkItemManagedObjectIDsForIdentifiers:(id)a0 managedObjectContext:(id)a1;
+ (id)searchIndexWorkItemManagedObjectIDsInManagedObjectContext:(id)a0 jobType:(short)a1 fetchLimit:(unsigned long long)a2;
+ (id)searchIndexWorkItemsForIncrementalUpdatesInManagedObjectContext:(id)a0 jobType:(short)a1 jobFlags:(long long)a2 fetchLimit:(unsigned long long)a3;
+ (short)searchJobTypeForCurrentQOS;
+ (id)workItemsSortedByTimestampWithIdentifier:(id)a0 jobType:(short)a1 inManagedObjectContext:(id)a2 error:(id *)a3;
+ (id)workItemsSortedByTimestampWithIdentifier:(id)a0 jobTypes:(id)a1 inManagedObjectContext:(id)a2 error:(id *)a3;
+ (id)workItemsSortedByTimestampWithJobType:(short)a0 fetchLimit:(id)a1 resultType:(unsigned long long)a2 inManagedObjectContext:(id)a3 error:(id *)a4;

- (id)description;
- (BOOL)validateForInsert:(id *)a0;
- (double)delayInterval;
- (id)descriptionForSearchIndexingWorkItem;
- (id)jobFlagsDescription;
- (id)jobIdentifier;

@end
