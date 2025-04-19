@interface ABSearchElement : NSObject

+ (void)_setTestPredicatesMatchRecordInStore:(BOOL)a0;
+ (BOOL)_testPredicatesMatchRecordInStore;
+ (long long)baseEncodingVersion;
+ (void)checkCurrentVersionCompatibleWithCoder:(id)a0;
+ (id)searchElementForConjunction:(long long)a0 children:(id)a1;
+ (void)setEncodingVersion:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (long long)encodingVersion;
- (void)setSearchValue:(id)a0;
- (id)_predicateForImplClass:(Class)a0 addressBook:(id)a1;
- (id)_predicateForImplClass:(Class)a0 context:(id)a1 basePersistenceURL:(id)a2;
- (id)_withinDate;
- (id)affectedStoresInAddressBook:(id)a0;
- (BOOL)diacriticInsensitiveOption;
- (id)groupsUsedInDefinition;
- (BOOL)isReferencingGroup:(id)a0;
- (BOOL)isSimpleSearch;
- (BOOL)matchesRecord:(id)a0;
- (BOOL)nts_MatchesRecord:(id)a0;
- (BOOL)nts_PredicateMatchesRecord:(id)a0;
- (BOOL)predicateMatchesRecord:(id)a0;
- (id)prefetchingRelationshipKeyPathsForImplClass:(Class)a0 inAddressBook:(id)a1;
- (BOOL)searchGroups;
- (BOOL)searchPeople;
- (id)searchRecordClasses;
- (void)setDiacriticInsensitiveOption:(BOOL)a0;
- (BOOL)usesGroupInDefinition:(id)a0;

@end
