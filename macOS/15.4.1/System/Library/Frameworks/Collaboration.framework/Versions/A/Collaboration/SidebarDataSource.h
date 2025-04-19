@class NSString, NSMutableArray, NSArray;

@interface SidebarDataSource : NSObject <NSTableViewDataSource> {
    NSMutableArray *_sidebarItems;
    unsigned long long _usersGroupsState;
    BOOL _showsNetworkUsers;
    BOOL _showsNetworkGroups;
    BOOL _showsAddressBook;
    BOOL _showsAddressBookGroups;
    NSArray *_addressBookGroups;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)objectAtIndex:(unsigned long long)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)setUsersGroups:(unsigned long long)a0;
- (BOOL)networkDirectoryServer;
- (void)setAddressBookGroups:(id)a0;
- (void)setShowsAddressBook:(BOOL)a0;
- (void)setShowsAddressBookGroups:(BOOL)a0;
- (void)setShowsNetworkGroups:(BOOL)a0;
- (void)setShowsNetworkUsers:(BOOL)a0;
- (BOOL)showsAddressBook;
- (BOOL)showsAddressBookGroups;
- (BOOL)showsNetworkGroups;
- (BOOL)showsNetworkUsers;
- (void)updateSidebar;
- (unsigned long long)usersGroups;

@end
