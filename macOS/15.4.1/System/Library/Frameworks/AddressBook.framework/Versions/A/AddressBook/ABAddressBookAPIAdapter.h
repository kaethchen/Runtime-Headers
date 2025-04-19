@class ABAddressBook;

@interface ABAddressBookAPIAdapter : ABAPIAdapter

@property (retain) ABAddressBook *addressBook;

- (void).cxx_destruct;
- (id)initWithAdaptedObject:(id)a0 protocol:(id)a1 protocolIsAsync:(BOOL)a2;
- (id)initWithAdaptedObject:(id)a0 protocol:(id)a1 protocolIsAsync:(BOOL)a2 addressBook:(id)a3;

@end
