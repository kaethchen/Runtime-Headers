@class ABAddressBook;

@interface ABFindVisibleSystemGroupsTask : CNTask

@property (readonly) ABAddressBook *addressBook;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)run:(id *)a0;
- (id)findDupesOfHomeGroups:(id)a0;
- (id)findHomeGroups;
- (id)initWithAddressBook:(id)a0;

@end
