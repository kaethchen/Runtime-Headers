@interface ABDefaultSearchOnlyCustomizationPolicy : ABDefaultCustomizationPolicy

- (long long)sortOrder;
- (BOOL)canBecomeDefaultAccount;
- (BOOL)groupsCanRemoveMembers;

@end
