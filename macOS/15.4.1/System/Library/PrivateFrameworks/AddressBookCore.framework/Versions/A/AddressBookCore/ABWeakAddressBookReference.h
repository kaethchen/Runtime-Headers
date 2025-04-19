@class NSString, ABAddressBook;

@interface ABWeakAddressBookReference : NSObject <ABAddressBookReference> {
    ABAddressBook *_weakAddressBook;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
