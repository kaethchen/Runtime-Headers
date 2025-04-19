@class NSString, ABAddressBook;

@interface ABStrongAddressBookReference : NSObject <ABAddressBookReference> {
    ABAddressBook *_addressBook;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)addressBook;
- (id)initWithAddressBook:(id)a0;

@end
