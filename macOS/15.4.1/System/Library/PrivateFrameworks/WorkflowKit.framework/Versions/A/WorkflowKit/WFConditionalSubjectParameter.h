@interface WFConditionalSubjectParameter : WFParameter

- (Class)stateClass;
- (BOOL)allowsMultipleValues;
- (id)defaultSupportedVariableTypes;
- (id)importQuestionBehavior;
- (id)disallowedVariableTypes;

@end
