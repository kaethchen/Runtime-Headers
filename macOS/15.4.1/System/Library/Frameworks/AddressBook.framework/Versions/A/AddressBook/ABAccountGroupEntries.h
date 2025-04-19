@class NSArray, ABAccount, ABGroupEntry;

@interface ABAccountGroupEntries : NSObject

@property (readonly, retain) ABAccount *account;
@property (readonly, retain) ABGroupEntry *entryForAllContacts;
@property (readonly, copy) NSArray *entriesForGroups;
@property (readonly, retain) ABGroupEntry *entryForSearching;

+ (id)entriesWithAccount:(id)a0 addressBook:(id)a1 hasProvisionalEntryForNewGroup:(BOOL)a2;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 entryForAllContacts:(id)a1 entriesForGroups:(id)a2 entryForSearching:(id)a3;

@end
