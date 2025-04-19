@class NSString, NSManagedObjectID;

@interface ABCustomPropertyDescription : NSObject

@property (readonly, copy) NSManagedObjectID *objectID;
@property (readonly, copy) NSString *propertyName;
@property (readonly, copy) NSString *recordType;
@property (readonly) long long valueType;

+ (id)descriptionOfValueType:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithObjectID:(id)a0 propertyName:(id)a1 recordType:(id)a2 valueType:(long long)a3;

@end
