@interface WFLinkActionFileEntityParameterDefinition : WFLinkActionDynamicOptionsParameterDefinition

@property (readonly, nonatomic) BOOL supportsDynamicOptions;

- (id)supportedUTIs;
- (Class)parameterClass;
- (id)linkValueFromParameterState:(id)a0 action:(id)a1;
- (id)parameterStateFromLinkValue:(id)a0;
- (void)getLinkValueFromProcessedParameterValue:(id)a0 parameterState:(id)a1 permissionRequestor:(id)a2 runningFromToolKit:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)parameterDefinitionDictionary;

@end
