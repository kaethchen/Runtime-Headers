@class NSString, ABAccount, ABAddressBook;

@interface ABRecordContext : NSObject <ABRecordContext>

@property (readonly, retain) ABAccount *account;
@property (readonly, retain) ABAddressBook *addressBook;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordContextWithAddresBook:(id)a0;
+ (id)recordContextWithAddresBook:(id)a0 account:(id)a1;

- (void).cxx_destruct;
- (id)groups;
- (id)people;
- (id)groupForUniqueId:(id)a0;
- (id)initWithAddressBook:(id)a0 account:(id)a1;
- (id)personForUniqueId:(id)a0;
- (id)recordForUniqueId:(id)a0;
- (id)recordsForUniqueIDs:(id)a0;
- (BOOL)removeRecord:(id)a0 error:(id *)a1;
- (BOOL)removeRecords:(id)a0 error:(id *)a1;
- (id)addGroup;
- (id)addGroupWithUniqueId:(id)a0;
- (id)addPerson;
- (id)addPersonWithDictionaryRepresentation:(id)a0;
- (id)addPersonWithUniqueId:(id)a0;
- (id)addRecordWithClass:(Class)a0 uniqueId:(id)a1;
- (id)allMembersOfGroupOrPeople:(id)a0;
- (id)initWithAccount:(id)a0 addressBook:(id)a1;
- (id)lazyGroupForGroup:(id)a0;
- (id)lazyGroupForGroupUniqueId:(id)a0;
- (id)lazyGroupsForGroupUids:(id)a0;
- (id)lazyGroupsForGroups:(id)a0;
- (BOOL)recordExistsForUniqueId:(id)a0;
- (BOOL)saveWithOptions:(id)a0;

@end
