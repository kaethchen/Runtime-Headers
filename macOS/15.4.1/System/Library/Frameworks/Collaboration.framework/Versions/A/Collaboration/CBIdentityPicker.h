@class NSString, NSArray;

@interface CBIdentityPicker : NSObject {
    id _reserved[2];
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL allowsMultipleSelection;
@property (readonly, nonatomic) NSArray *identities;

- (void)dealloc;
- (id)init;
- (long long)runModal;
- (id)defaultButtonTitle;
- (void)setDefaultButtonTitle:(id)a0;
- (void)setShowsGroups:(BOOL)a0;
- (BOOL)showsLocalUsers;
- (id)disabledIdentities;
- (void)runModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)runModalForWindow:(id)a0 modalDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (void)setDisabledIdentities:(id)a0;
- (void)setShowsAddressBook:(BOOL)a0;
- (void)setShowsAddressBookGroups:(BOOL)a0;
- (void)setShowsHiddenIdentities:(BOOL)a0;
- (void)setShowsLocalGroups:(BOOL)a0;
- (void)setShowsLocalIdentities:(BOOL)a0;
- (void)setShowsLocalUsers:(BOOL)a0;
- (void)setShowsNetworkGroups:(BOOL)a0;
- (void)setShowsNetworkIdentities:(BOOL)a0;
- (void)setShowsNetworkUsers:(BOOL)a0;
- (void)setShowsNewPersonButton:(BOOL)a0;
- (void)setShowsSharingOnlyUsers:(BOOL)a0;
- (void)setShowsUsers:(BOOL)a0;
- (BOOL)showsAddressBook;
- (BOOL)showsAddressBookGroups;
- (BOOL)showsGroups;
- (BOOL)showsHiddenIdentities;
- (BOOL)showsLocalGroups;
- (BOOL)showsLocalIdentities;
- (BOOL)showsNetworkGroups;
- (BOOL)showsNetworkIdentities;
- (BOOL)showsNetworkUsers;
- (BOOL)showsNewPersonButton;
- (BOOL)showsSharingOnlyUsers;
- (BOOL)showsUsers;

@end
