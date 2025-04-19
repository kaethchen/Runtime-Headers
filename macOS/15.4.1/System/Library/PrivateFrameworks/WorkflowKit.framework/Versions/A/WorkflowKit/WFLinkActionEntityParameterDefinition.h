@interface WFLinkActionEntityParameterDefinition : WFLinkActionParameterDefinition

@property (readonly, nonatomic, getter=isUniqueEntity) BOOL uniqueEntity;

- (Class)parameterClass;
- (id)entityMetadata;
- (id)linkValueFromParameterState:(id)a0 action:(id)a1;
- (id)parameterStateFromLinkValue:(id)a0;
- (id)initWithParameterMetadata:(id)a0;
- (id)localizedTitleForLinkValue:(id)a0;

@end
