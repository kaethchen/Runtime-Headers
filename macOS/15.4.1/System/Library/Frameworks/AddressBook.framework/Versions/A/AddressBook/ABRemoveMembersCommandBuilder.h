@class ABGroup, NSMutableArray, ABAddressBook;

@interface ABRemoveMembersCommandBuilder : NSObject {
    ABGroup *_group;
    NSMutableArray *_memberIdentifiers;
    ABAddressBook *_addressBook;
}

@property (readonly) unsigned long long countOfRemovedMembers;

- (void).cxx_destruct;
- (id)build;
- (void)removeMember:(id)a0;
- (id)initWithGroup:(id)a0 addressBook:(id)a1;

@end
