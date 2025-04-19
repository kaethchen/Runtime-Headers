@class NSPredicate, CNCDPersistenceContext;

@interface CNCDGroupFetcher : NSObject {
    BOOL _allowGenericPredicate;
    NSPredicate *_predicate;
    CNCDPersistenceContext *_persistenceContext;
}

+ (id)fetchRequestWithEntityName:(id)a0;
+ (id)os_log;
+ (id)groupsMatchingPredicate:(id)a0 inPersistenceStack:(id)a1 allowGenericPredicate:(BOOL)a2 error:(id *)a3;
+ (id)groupsMatchingPredicate:(id)a0 inPersistenceStack:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)executeFetchRequest:(id)a0;
- (id)effectivePredicate:(id)a0;
- (id)expandResultsFromInitialFetch:(id)a0 request:(id)a1 predicate:(id)a2;
- (id)fetchContainerScopedGroupsMatchingPredicate:(id)a0;
- (id)fetchCuratedGroupsMatchingPredicate:(id)a0;
- (id)fetchExchangeGroupsMatchingPredicate:(id)a0;
- (id)fetchGroups:(id *)a0;
- (id)initWithPredicate:(id)a0 persistenceContext:(id)a1 allowGenericPredicate:(BOOL)a2;
- (id)validatePredicate:(id)a0 error:(id *)a1;

@end
