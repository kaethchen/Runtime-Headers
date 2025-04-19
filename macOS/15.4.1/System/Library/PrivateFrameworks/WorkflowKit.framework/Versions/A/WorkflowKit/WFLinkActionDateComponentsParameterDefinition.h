@interface WFLinkActionDateComponentsParameterDefinition : WFLinkActionParameterDefinition

- (long long)dateFormat;
- (Class)parameterClass;
- (id)linkValueFromParameterState:(id)a0 action:(id)a1;
- (id)parameterStateFromLinkValue:(id)a0;
- (id)dateComponentsFromDateValue:(id)a0;
- (id)dateComponentsFromStringValue:(id)a0 error:(id *)a1;
- (void)getLinkValueFromProcessedParameterValue:(id)a0 parameterState:(id)a1 permissionRequestor:(id)a2 runningFromToolKit:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)initWithParameterMetadata:(id)a0;
- (id)localizedTitleForLinkValue:(id)a0;
- (id)parameterDefinitionDictionary;

@end
