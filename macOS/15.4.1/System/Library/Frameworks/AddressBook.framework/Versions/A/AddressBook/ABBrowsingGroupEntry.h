@class ABAccount, ABAddressBook;

@interface ABBrowsingGroupEntry : ABGroupEntry

@property (readonly, retain) ABAccount *account;
@property (readonly, retain) ABAddressBook *addressBook;

- (BOOL)canSelect;
- (id)selectHelperWithFactory:(id)a0;
- (BOOL)canDrag;
- (id)actionScope;
- (id)importFilesHelperWithFactory:(id)a0 filenames:(id)a1 showConfirmation:(BOOL)a2;
- (id)pasteHelperWithFactory:(id)a0;
- (BOOL)shouldImportToDefaultAccount;

@end
