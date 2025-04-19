@class ABAccount, ABAddressBook;

@interface ABAccountGroupEntriesBuilder : NSObject {
    ABAccount *_account;
    ABAddressBook *_addressBook;
    BOOL _shouldCreateProvisionalEntryForNewGroup;
}

- (void).cxx_destruct;
- (void)addEntryForGroup:(id)a0 to:(id)a1;
- (id)buildEntries;
- (id)buildEntriesForGroups;
- (id)buildEntryForAllContacts:(unsigned long long)a0;
- (id)buildEntryForSearching;
- (id)entryForGroup:(id)a0;
- (id)groupsForEntries;
- (id)initWithAccount:(id)a0 addressBook:(id)a1 shouldCreateProvisionalEntryForNewGroup:(BOOL)a2;
- (BOOL)shouldAddEntryForGroup:(id)a0;

@end
