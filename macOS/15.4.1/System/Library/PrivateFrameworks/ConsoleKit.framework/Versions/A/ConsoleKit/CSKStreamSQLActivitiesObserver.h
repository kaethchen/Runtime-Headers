@class NSString, CSKDatabaseHandle, CSKActivity, NSSortDescriptor, NSMutableDictionary, NSArray, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CSKStreamSQLActivitiesObserver : CSKStreamObserver <CSKActivitiesViewControllerDataSource> {
    NSArray *_childrenArray;
    unsigned long long _currentParentRow;
    unsigned long long _activitiesCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *rootActivities;
@property (retain, nonatomic) NSMutableArray *allRootActivities;
@property (retain, nonatomic) NSMutableDictionary *childrenMap;
@property (retain, nonatomic) NSMutableDictionary *identifiersMap;
@property (nonatomic) unsigned long long rootActivitiesCount;
@property (retain, nonatomic) CSKActivity *currentActivity;
@property (retain, nonatomic) NSSortDescriptor *lastUsedSortDescriptor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *searchQueue;
@property (retain, nonatomic) CSKDatabaseHandle *readDBHandle;
@property (retain, nonatomic) CSKDatabaseHandle *searchDBHandle;
@property (retain, nonatomic) CSKDatabaseHandle *sortDBHandle;
@property (retain, nonatomic) NSArray *searchIndexes;
@property (copy, nonatomic) id /* block */ resetCompletion;
@property (copy, nonatomic) id /* block */ searchCompletion;
@property (copy, nonatomic) id /* block */ additionCompletion;
@property (copy, nonatomic) id /* block */ removalCompletion;
@property (nonatomic) unsigned long long activitiesCount;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)dataType;
- (void)setFilters:(id)a0;
- (void)resetWorkingStateWithDataBatch:(id)a0;
- (long long)_addActivityToChildrenMap:(id)a0;
- (void)_appendActivities:(id)a0 direction:(unsigned long long)a1 completionBlock:(id /* block */)a2;
- (void)_removeActivities:(id)a0 completionBlock:(id /* block */)a1;
- (void)_searchUsingFilters:(id)a0;
- (id)activitiesViewController:(id)a0 activityInParentActivity:(id)a1 atRow:(unsigned long long)a2;
- (id)activitiesViewController:(id)a0 activityWithActivityIdentifier:(id)a1;
- (unsigned long long)activitiesViewController:(id)a0 numberOfActivitiesInParentActivity:(id)a1;
- (void)handleAdditionDataBatch:(id)a0;
- (void)handleRemovalDataBatch:(id)a0;
- (BOOL)hasParentActivityID:(id)a0;

@end
