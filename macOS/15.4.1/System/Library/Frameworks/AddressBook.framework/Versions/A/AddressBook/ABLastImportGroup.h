@interface ABLastImportGroup : ABSpecialGroup

+ (id)specialGroupForAddressBook:(id)a0;
+ (id)sharedLastImportGroup;

- (BOOL)isDeletable;
- (id)members;
- (id)subgroups;
- (id)valueForProperty:(id)a0;
- (id)contactMembershipPredicate;
- (BOOL)canDeletePeople;
- (BOOL)removeSubgroup:(id)a0;
- (id)uniqueIdForDrag;
- (BOOL)addSubgroup:(id)a0;
- (BOOL)isRenamable;
- (id)membersAndSubgroups;

@end
