@class NSSet, NSString;

@interface RMModelDiskManagementSettingsDeclaration_Restrictions : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadExternalStorage;
@property (copy, nonatomic) NSString *payloadNetworkStorage;

+ (id)buildRequiredOnly;
+ (id)buildWithExternalStorage:(id)a0 networkStorage:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;
- (void)combineWithOther:(id)a0;

@end
