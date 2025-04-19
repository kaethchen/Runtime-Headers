@class NSString, NSNumber, NSSet;

@interface ABCDCustomProperty : NSManagedObject

@property (retain, nonatomic) NSString *propertyName;
@property (retain, nonatomic) NSString *recordType;
@property (retain, nonatomic) NSNumber *valueType;
@property (retain, nonatomic) NSSet *customPropertyValues;

+ (id)os_log;
+ (id)customPropertyFromDescription:(id)a0 inContext:(id)a1;
+ (id)fetchCustomPropertiesWithRecordType:(id)a0 inContext:(id)a1 persistentStore:(id)a2 error:(id *)a3;
+ (id)recordTypePredicateTemplate;

@end
