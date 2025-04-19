@class NSDictionary, RMModelConfigurationSchema;

@interface RMModelConfigurationDynamic : RMModelConfigurationBase

@property (retain, nonatomic) RMModelConfigurationSchema *schema;
@property (copy, nonatomic) NSDictionary *payload;

+ (id)buildWithSchema:(id)a0 type:(id)a1 identifier:(id)a2 payload:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)assetReferences;
- (id)initWithSchema:(id)a0;
- (id)declarationClassType;
- (void)enumerateManagedSettingsUsingBlock:(id /* block */)a0;
- (BOOL)isSupportedForPlatform:(long long)a0 scope:(long long)a1 enrollmentType:(long long)a2;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
