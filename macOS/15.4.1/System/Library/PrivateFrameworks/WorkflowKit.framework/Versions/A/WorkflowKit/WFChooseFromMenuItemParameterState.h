@class NSArray, WFVariableString;

@interface WFChooseFromMenuItemParameterState : WFVariableStringParameterState

@property (readonly, nonatomic) NSArray *synonyms;
@property (readonly, nonatomic) WFVariableString *subtitle;

+ (Class)processingValueClass;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serializedRepresentation;
- (id)containedVariables;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)initWithVariableString:(id)a0 synonyms:(id)a1 subtitle:(id)a2;
- (id)initWithVariableString:(id)a0 userInputInsertionIndex:(long long)a1;
- (id)initWithVariableString:(id)a0 userInputInsertionIndex:(long long)a1 synonyms:(id)a2 subtitle:(id)a3;
- (BOOL)shouldSerializeAsPlainString;

@end
