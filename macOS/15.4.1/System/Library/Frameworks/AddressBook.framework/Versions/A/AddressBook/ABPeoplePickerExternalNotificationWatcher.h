@class ABGroupEntriesList, ABPersonEntriesList, ABAddressBook;

@interface ABPeoplePickerExternalNotificationWatcher : NSObject {
    ABAddressBook *_addressBook;
    ABGroupEntriesList *_groupEntriesList;
    ABPersonEntriesList *_personEntriesList;
}

- (void).cxx_destruct;
- (void)registerForNotifications;
- (void)addressBookChangedExternally:(id)a0;
- (id)initWithAddressBook:(id)a0 groupEntriesList:(id)a1 personEntriesList:(id)a2;

@end
