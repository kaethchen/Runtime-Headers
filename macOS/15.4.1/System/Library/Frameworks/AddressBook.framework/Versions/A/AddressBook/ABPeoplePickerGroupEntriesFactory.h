@interface ABPeoplePickerGroupEntriesFactory : ABAbstractGroupEntriesFactory

@property BOOL includeAllContacts;
@property BOOL includeDirectories;

- (id)makeGroupEntries;
- (id)makeGroupEntriesWithHidingPolicy:(id)a0;

@end
