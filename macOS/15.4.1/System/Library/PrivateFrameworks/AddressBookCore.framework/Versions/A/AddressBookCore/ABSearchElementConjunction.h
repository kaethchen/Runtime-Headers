@class NSArray;

@interface ABSearchElementConjunction : ABSearchElement <NSSecureCoding> {
    long long _conjunction;
    NSArray *_children;
    BOOL _ruleGrouping;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_children;
- (long long)encodingVersion;
- (void)setSearchValue:(id)a0;
- (BOOL)_isNegation;
- (id)_predicateForImplClass:(Class)a0 addressBook:(id)a1;
- (id)_predicateForImplClass:(Class)a0 context:(id)a1 basePersistenceURL:(id)a2;
- (id)_withinDate;
- (id)affectedStoresInAddressBook:(id)a0;
- (long long)conjunction;
- (id)groupsUsedInDefinition;
- (id)initWithConjunctionOperator:(long long)a0 children:(id)a1;
- (BOOL)isReferencingGroup:(id)a0;
- (BOOL)isRuleGrouping;
- (BOOL)matchesRecord:(id)a0;
- (BOOL)nts_MatchesRecord:(id)a0;
- (BOOL)predicateMatchesRecord:(id)a0;
- (id)prefetchingRelationshipKeyPathsForImplClass:(Class)a0 inAddressBook:(id)a1;
- (BOOL)searchGroups;
- (BOOL)searchPeople;
- (id)searchRecordClasses;
- (void)setIsRuleGrouping:(BOOL)a0;
- (id)storesPresentInAllChildrenArrays:(id)a0;
- (id)storesPresentInAnyChildrenArrays:(id)a0;
- (BOOL)usesGroupInDefinition:(id)a0;

@end
