@class NSSet, RMModelStatusAppManagedList_ManagedConfigurationState, RMModelStatusAppManagedList_ManagedConfigurationExtensionConfigState;

@interface RMModelStatusAppManagedList_ManagedConfiguration : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) RMModelStatusAppManagedList_ManagedConfigurationState *statusAppConfigState;
@property (copy, nonatomic) RMModelStatusAppManagedList_ManagedConfigurationExtensionConfigState *statusExtensionConfigState;

+ (id)buildRequiredOnly;
+ (id)buildWithAppConfigState:(id)a0 extensionConfigState:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
