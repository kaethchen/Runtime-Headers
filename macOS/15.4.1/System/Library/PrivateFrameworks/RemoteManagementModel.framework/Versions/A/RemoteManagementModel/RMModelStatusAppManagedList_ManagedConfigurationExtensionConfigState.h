@class NSSet, NSDictionary;

@interface RMModelStatusAppManagedList_ManagedConfigurationExtensionConfigState : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSDictionary *statusDictionary;

+ (id)build;
+ (id)buildRequiredOnly;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
