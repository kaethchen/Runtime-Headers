@class NSString, ABCDRecord, NSDictionary;

@interface ABCDAlertTone : ABCDOwnedObject

@property (copy) NSString *toneData;
@property (copy) NSString *type;
@property (retain, nonatomic) ABCDRecord *owner;
@property (retain, nonatomic) NSDictionary *toneDictionary;

- (BOOL)abHasAddressBookRelatedContent;

@end
