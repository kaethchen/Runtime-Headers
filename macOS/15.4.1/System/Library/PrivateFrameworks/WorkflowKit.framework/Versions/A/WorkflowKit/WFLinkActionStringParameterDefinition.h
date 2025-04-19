@interface WFLinkActionStringParameterDefinition : WFLinkActionParameterDefinition

- (Class)parameterClass;
- (id)linkValueFromParameterState:(id)a0 action:(id)a1;
- (id)parameterStateFromLinkValue:(id)a0;
- (id)autocapitalizationTypeFromStringCapitalizationType:(long long)a0;
- (id)initWithParameterMetadata:(id)a0;
- (id)keyboardTypeFromStringKeyboardType:(long long)a0;
- (id)localizedTitleForLinkValue:(id)a0;
- (id)parameterDefinitionDictionary;

@end
