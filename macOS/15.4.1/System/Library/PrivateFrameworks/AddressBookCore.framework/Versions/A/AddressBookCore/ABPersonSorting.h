@class ABAddressBook;

@interface ABPersonSorting : NSObject

@property (class, readonly) ABPersonSorting *defaultSorting;

@property (readonly) ABAddressBook *addressBook;
@property (readonly) long long nameSorting;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAddressBook:(id)a0;
- (unsigned long long)insertionIndexForMember:(id)a0 inSortedMembers:(id)a1;
- (unsigned long long)insertionIndexForMember:(id)a0 inSortedMembers:(id)a1 withSortingOrder:(unsigned long long)a2;
- (void)sortMembers:(id)a0;

@end
