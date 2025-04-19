@class NSArray, NSDictionary, ABRecordContext, ABImportRecordFactory, NSMutableArray;

@interface ABBookPastePeopleCommand : ABBookUndoableCommand {
    ABRecordContext *_recordContext;
    NSArray *_groups;
    NSDictionary *_pasteboardDictionary;
    NSMutableArray *_addedPersonUids;
    ABImportRecordFactory *_importRecordFactory;
    BOOL ignoresGuardianRestrictions;
}

- (void).cxx_destruct;
- (id)actionName;
- (void)execute;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void)executeUndo;
- (BOOL)ignoresGuardianRestrictions;
- (void)addMembers:(id)a0 toGroup:(id)a1;
- (void)addMembersToGroups:(id)a0;
- (id)addPersonWithDictionary:(id)a0;
- (id)addedPeople;
- (id)initWithAccount:(id)a0 addressBook:(id)a1 groups:(id)a2 pasteboardDictionary:(id)a3;
- (id)initWithRecordContext:(id)a0 groups:(id)a1 pasteboardDictionary:(id)a2;
- (id)massagePersonDictionary:(id)a0;
- (id)pastedUids;
- (id)peopleFromPasteboardDictionary;
- (BOOL)personIsMemberOfAllGroups:(id)a0;
- (id)personWithUid:(id)a0 fromExistingPeople:(id)a1 orPersonDictionary:(id)a2;
- (void)rememberPersonUidsOfPeople:(id)a0;
- (void)removeAllPropertyIdentifiers:(id)a0;
- (void)removeIdentifiers:(id)a0 forProperty:(id)a1;
- (void)removePeople:(id)a0;

@end
