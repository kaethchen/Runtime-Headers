@class ABAccount, NSString, ABGroupEntriesList, ABGroup, ABAddressBook;

@interface ABBookCreateGroupCommand : ABBookUndoableCommand {
    ABAccount *_account;
    ABAddressBook *_addressBook;
    ABGroupEntriesList *_groupEntriesList;
    BOOL ignoresGuardianRestrictions;
}

@property (copy) NSString *groupUid;
@property (readonly) ABGroup *group;
@property (copy) NSString *groupName;

- (void).cxx_destruct;
- (id)actionName;
- (void)execute;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void)executeRedo;
- (void)executeUndo;
- (BOOL)ignoresGuardianRestrictions;
- (id)groupEntryForNewGroup;
- (id)initWithAccount:(id)a0 addressBook:(id)a1 groupEntriesList:(id)a2;
- (id)makeGroup;
- (id)untitledString;
- (void)updateGroupName:(id)a0;

@end
