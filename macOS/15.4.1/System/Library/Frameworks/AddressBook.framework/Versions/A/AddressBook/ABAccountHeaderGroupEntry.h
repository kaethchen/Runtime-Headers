@class ABAddressBook;

@interface ABAccountHeaderGroupEntry : ABHeaderGroupEntry {
    ABAddressBook *_addressBook;
}

- (void).cxx_destruct;
- (id)selectHelperWithFactory:(id)a0;
- (id)actionScope;
- (BOOL)canCreateGroupInSection;
- (id)createGroupInSectionHelperWithFactory:(id)a0;
- (id)iconWithStyleProvider:(id)a0;
- (id)initWithName:(id)a0 account:(id)a1 children:(id)a2 addressBook:(id)a3;

@end
