@class ABAddressBook, NSArray, ABAbstractGroupEntriesFactory, ABGroupEntriesList;
@protocol ABAccountCollection;

@interface ABGroupListNotificationHandler : NSObject {
    ABAddressBook *_addressBook;
    ABGroupEntriesList *_groupEntriesList;
    ABAbstractGroupEntriesFactory *_groupEntriesFactory;
    id<ABAccountCollection> _accountCollection;
    NSArray *_emptyAccountIdentifiers;
}

- (void).cxx_destruct;
- (void)handleAccountConfigurationChangeNotification:(id)a0;
- (void)handleAccountRepositoryChangeNotification:(id)a0;
- (void)handleExternalAddressBookNotification:(id)a0;
- (void)handleLocalAddressBookNotification:(id)a0;
- (id)initWithAddressBook:(id)a0 groupEntriesList:(id)a1 groupEntriesFactory:(id)a2 accountCollection:(id)a3;
- (BOOL)didEmptyAccountsChange;
- (BOOL)doesExternalNotificationContainGroupChanges:(id)a0;
- (BOOL)doesLocalNotificationContainEmptyAccountsChanges:(id)a0;
- (BOOL)doesLocalNotificationContainGroupChanges:(id)a0;
- (id)emptyAccountIdentifiers;
- (void)handleDefaultAccountChangedNotification:(id)a0;
- (void)rebuildGroupEntriesListWithAccounts:(id)a0;

@end
