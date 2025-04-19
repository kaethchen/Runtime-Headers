@class NSString, NSMutableArray, NSMutableDictionary;

@interface CSKStreamActivitiesObserver : CSKStreamObserver <CSKActivitiesViewControllerDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *rootActivities;
@property (retain, nonatomic) NSMutableArray *allRootActivities;
@property (retain, nonatomic) NSMutableDictionary *childrenMap;
@property (retain, nonatomic) NSMutableDictionary *identifiersMap;
@property (copy, nonatomic) id /* block */ resetCompletion;
@property (copy, nonatomic) id /* block */ additionCompletion;
@property (copy, nonatomic) id /* block */ removalCompletion;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)dataType;
- (unsigned long long)activitiesCount;
- (void)resetWorkingStateWithDataBatch:(id)a0;
- (long long)_addActivityToChildrenMap:(id)a0;
- (void)_appendActivities:(id)a0 direction:(unsigned long long)a1 completionBlock:(id /* block */)a2;
- (void)_removeActivities:(id)a0 completionBlock:(id /* block */)a1;
- (id)activitiesViewController:(id)a0 activityInParentActivity:(id)a1 atRow:(unsigned long long)a2;
- (id)activitiesViewController:(id)a0 activityWithActivityIdentifier:(id)a1;
- (unsigned long long)activitiesViewController:(id)a0 numberOfActivitiesInParentActivity:(id)a1;
- (void)handleAdditionDataBatch:(id)a0;
- (void)handleRemovalDataBatch:(id)a0;

@end
