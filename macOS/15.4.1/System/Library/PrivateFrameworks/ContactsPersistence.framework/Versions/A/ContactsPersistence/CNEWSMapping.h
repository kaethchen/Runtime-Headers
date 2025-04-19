@class NSString, NSNumber;

@interface CNEWSMapping : NSManagedObject

@property (copy) NSString *addressBookUniqueId;
@property (copy) NSString *itemId;
@property (copy) NSString *changeKey;
@property (copy) NSString *contactsIdentifier;
@property (copy) NSNumber *flags;

@end
