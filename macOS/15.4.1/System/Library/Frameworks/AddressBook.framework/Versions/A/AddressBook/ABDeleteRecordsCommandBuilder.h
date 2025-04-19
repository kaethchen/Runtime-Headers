@class CNContactStore, NSMutableDictionary, NSMutableArray, ABAddressBook;

@interface ABDeleteRecordsCommandBuilder : NSObject {
    NSMutableArray *_deletedRecords;
    ABAddressBook *_legacyAddressBook;
    CNContactStore *_contactStore;
    NSMutableDictionary *_removeMemberBuilders;
    BOOL _ignoresGuardianRestrictions;
}

+ (id)builderWithAddressBook:(id)a0 ignoresGuardianRestrictions:(BOOL)a1;

- (void).cxx_destruct;
- (id)build;
- (void)_buildDeleteCommandsForPeopleUIDs:(id)a0 withBuilder:(id)a1;
- (void)_buildRemoveMemberCommandsWithBuilder:(id)a0;
- (void)_deleteGroupsWithBuilder:(id)a0;
- (void)_deletePeopleWithBuilder:(id)a0;
- (id)_makeBuilder;
- (id)_removeMembersBuilderForGroup:(id)a0;
- (void)_removeRecordFromParentGroups:(id)a0;
- (void)_removeRecordsFromParentGroupsWithBuilder:(id)a0;
- (void)deleteRecord:(id)a0;
- (id)initWithAddressBook:(id)a0 ignoresGuardianRestrictions:(BOOL)a1;

@end
