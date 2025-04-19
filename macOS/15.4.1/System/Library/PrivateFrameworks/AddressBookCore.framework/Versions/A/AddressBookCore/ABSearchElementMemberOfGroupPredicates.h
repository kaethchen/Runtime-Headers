@interface ABSearchElementMemberOfGroupPredicates : NSObject

+ (id)hasVisibleParentGroupsPredicate;
+ (id)parentGroupClauseForComparison:(long long)a0;
+ (id)hasNoVisibleParentGroupsPredicate;
+ (id)predicateByAddingVisibilityClauseToPredicate:(id)a0;
+ (id)predicateForMemberOfAnyGroupWithComparison:(long long)a0 helper:(id /* block */)a1;
+ (id)predicateForMemberOfDumbGroup:(id)a0;
+ (id)predicateForMemberOfDumbGroup:(id)a0 comparison:(long long)a1;
+ (id)predicateForMemberOfGroup:(id)a0 comparison:(long long)a1 implClass:(Class)a2 context:(id)a3 basePersistenceURL:(id)a4;
+ (id)predicateForMemberOfSmartGroup:(id)a0 comparison:(long long)a1 helper:(id /* block */)a2;
+ (id)predicateForNotMemberOfDumbGroup:(id)a0;
+ (id)predicatesForSmartGroupsWithComparison:(long long)a0 helper:(id /* block */)a1;

@end
