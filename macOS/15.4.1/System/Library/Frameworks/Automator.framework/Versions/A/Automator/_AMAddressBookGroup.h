@class NSString;

@interface _AMAddressBookGroup : _AMAddressBookEntry

@property (copy) NSString *name;

- (id)groups;
- (id)people;

@end
