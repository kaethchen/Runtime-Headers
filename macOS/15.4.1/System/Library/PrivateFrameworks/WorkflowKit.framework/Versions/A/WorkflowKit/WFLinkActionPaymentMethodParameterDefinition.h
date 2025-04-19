@interface WFLinkActionPaymentMethodParameterDefinition : WFLinkActionParameterDefinition

- (Class)parameterClass;
- (id)parameterStateFromLinkValue:(id)a0;
- (id)defaultSerializedRepresentationFromParameterMetadataDefaultValue:(id)a0;
- (void)getLinkValueFromProcessedParameterValue:(id)a0 parameterState:(id)a1 permissionRequestor:(id)a2 runningFromToolKit:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)initWithParameterMetadata:(id)a0;
- (id)linkValueFromParameterState:(id)a0;

@end
