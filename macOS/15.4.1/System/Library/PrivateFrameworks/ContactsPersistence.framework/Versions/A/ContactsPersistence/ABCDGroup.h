@class NSString, CNCDContainer, NSSet;

@interface ABCDGroup : ABCDRecord <ABCDContainedRecord> {
    id _readWriteSharingACL;
    id _readSharingACL;
}

@property (retain, nonatomic) NSString *primitiveName;
@property (retain, nonatomic) NSString *nameNormalized;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) CNCDContainer *container;
@property (readonly, nonatomic) NSSet *contacts;
@property (nonatomic) unsigned long long externalGroupBehavior;

+ (id)_table;
+ (id)abEntityName;
+ (id)contactMembershipPredicateWithUniqueId:(id)a0;
+ (id)contactMembershipPredicateWithUniqueIds:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (id)displayName;
- (id)valueForKeyPath:(id)a0;
- (void)prepareForDeletion;
- (BOOL)validateForDelete:(id *)a0;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (id)sortingLastName;
- (void)addMembers:(id)a0;
- (void)addSubgroups:(id)a0;
- (id)affectedStoresInMembershipPredicate;
- (id)contactMembershipPredicate;
- (id)contactMembershipRecursivePredicate;
- (BOOL)hasSubgroupCycleStartingWithSubgroups:(id)a0;
- (id)membersIncludingMembersOfSubgroups:(BOOL)a0;
- (id)nameWithFormatter:(id)a0 rangeOfSortingSubstring:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)removeMembers:(id)a0;
- (void)removeSubgroups:(id)a0;
- (id)sortingFirstName;
- (id)stringForIndexing;
- (BOOL)validateSubgroupMembershipGraph:(id *)a0;

@end
