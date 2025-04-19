@class ABAddressBook, NSString, ABAccount, ABGroupEntriesList;

@interface ABBookRenameGroupCommand : ABBookUndoableCommand {
    ABAddressBook *_addressBook;
    NSString *_groupUid;
    NSString *_oldName;
    NSString *_newName;
    ABGroupEntriesList *_groupEntriesList;
    ABAccount *_account;
    BOOL ignoresGuardianRestrictions;
}

+ (id)commandWithAddressBook:(id)a0 group:(id)a1 newName:(id)a2 groupEntriesList:(id)a3;

- (void).cxx_destruct;
- (id)group;
- (id)actionName;
- (void)setGroupName:(id)a0;
- (void)execute;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void)executeUndo;
- (BOOL)ignoresGuardianRestrictions;
- (id)validGroup;

@end
