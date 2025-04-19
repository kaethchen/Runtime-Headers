@interface ABSpecialGroup : ABGroup

+ (id)_table;

- (id)contactMembershipPredicate;
- (BOOL)doesPropertyExist:(id)a0;
- (id)initWithAddressBook:(id)a0;
- (id)initWithUniqueId:(id)a0 addressBook:(id)a1;
- (BOOL)isSpecialGroup;

@end
