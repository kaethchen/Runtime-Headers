@class ABGroup, ABAccount, ABAddressBook;

@interface ABGroupBrowsingGroupEntry : ABBrowsingGroupEntry

@property (readonly, retain) ABAccount *account;
@property (readonly, retain) ABAddressBook *addressBook;
@property (readonly, retain) ABGroup *group;

+ (id)identifierForGroup:(id)a0;
+ (id)identifierForGroupWithIdentifier:(id)a0;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isRestricted;
- (BOOL)canCreatePeople;
- (BOOL)canDeletePeople;
- (BOOL)canDrop;
- (BOOL)canDelete;
- (BOOL)canCopy;
- (BOOL)containsPeople:(id)a0;
- (id)actionScope;
- (BOOL)canCreateGroup;
- (BOOL)canCreateGroupFromSelection;
- (BOOL)canCut;
- (BOOL)canEditDistributionLists;
- (BOOL)canExportGroupVCard;
- (BOOL)canRename;
- (BOOL)canSendEmailToGroup;
- (id)copyHelperWithFactory:(id)a0;
- (id)createHelperWithFactory:(id)a0;
- (id)cutHelperWithFactory:(id)a0;
- (id)deleteHelperWithFactory:(id)a0;
- (id)iconWithStyleProvider:(id)a0;
- (id)initWithAccount:(id)a0 addressBook:(id)a1 group:(id)a2;
- (id)renameHelperWithFactory:(id)a0;
- (BOOL)shouldImportToDefaultAccount;

@end
