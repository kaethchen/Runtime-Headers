@class NSData, NSString, ABCDRecord;

@interface ABCDUnknownProperty : NSManagedObject

@property (retain, nonatomic) NSData *originalLine;
@property (retain, nonatomic) NSString *propertyName;
@property (retain, nonatomic) ABCDRecord *owner;

+ (id)fetchUnknownPropertiesWithPropertyName:(id)a0 managedObjectContext:(id)a1 persistentStores:(id)a2;

@end
