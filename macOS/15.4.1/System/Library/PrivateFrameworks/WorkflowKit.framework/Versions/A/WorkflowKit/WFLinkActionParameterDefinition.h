@class LNValueType, LNActionParameterMetadata, NSDictionary, WFParameterDefinition;

@interface WFLinkActionParameterDefinition : NSObject

@property (readonly, nonatomic) LNValueType *valueType;
@property (readonly, nonatomic) LNActionParameterMetadata *parameterMetadata;
@property (readonly, nonatomic) Class parameterClass;
@property (readonly, nonatomic) NSDictionary *typeSpecificMetadata;
@property (readonly, nonatomic) WFParameterDefinition *parameterDefinitionDictionary;

- (void).cxx_destruct;
- (id)linkValueFromParameterState:(id)a0 action:(id)a1;
- (id)parameterStateFromLinkValue:(id)a0;
- (BOOL)boolForTypeSpecificMetadataKey:(id)a0 defaultValue:(BOOL)a1;
- (id)defaultSerializedRepresentationFromParameterMetadataDefaultValue:(id)a0;
- (id)defaultSerializedRepresentationFromParameterMetadataDefaultValues:(id)a0;
- (void)getLinkArrayValuesFromProcessedParameterValue:(id)a0 parameterState:(id)a1 permissionRequestor:(id)a2 completionHandler:(id /* block */)a3;
- (void)getLinkValueFromProcessedParameterValue:(id)a0 parameterState:(id)a1 permissionRequestor:(id)a2 runningFromToolKit:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)initWithValueType:(id)a0 parameterMetadata:(id)a1;
- (long long)integerForTypeSpecificMetadataKey:(id)a0 defaultValue:(long long)a1;
- (id)linkValueWithValue:(id)a0;
- (id)localizedTitleForLinkValue:(id)a0;
- (id)objectForTypeSpecificMetadataKey:(id)a0 ofClass:(Class)a1;

@end
