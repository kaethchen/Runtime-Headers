@class ABGroup, ABAddressBook;

@interface ABSmartGroupsHeaderGroupEntry : ABHeaderGroupEntry

@property (readonly, retain) ABAddressBook *addressBook;
@property (readonly, retain) ABGroup *group;

- (void)dealloc;
- (void).cxx_destruct;
- (id)selectHelperWithFactory:(id)a0;
- (BOOL)canCreateGroupInSection;
- (id)createGroupInSectionHelperWithFactory:(id)a0;
- (id)iconWithStyleProvider:(id)a0;
- (id)initWithName:(id)a0 children:(id)a1 addressBook:(id)a2;

@end
