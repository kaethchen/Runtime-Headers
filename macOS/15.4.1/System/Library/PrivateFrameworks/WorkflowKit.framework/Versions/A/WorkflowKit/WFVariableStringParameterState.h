@class NSArray, WFVariableString, NSString, WFVariable;
@protocol WFPropertyListObject;

@interface WFVariableStringParameterState : NSObject <WFVariableSupportingParameterState>

@property (class, readonly, nonatomic) Class processingValueClass;
@property (class, readonly, nonatomic) NSArray *processingValueClasses;

@property (readonly, copy, nonatomic) WFVariableString *variableString;
@property (readonly, nonatomic) long long userInputInsertionIndex;
@property (readonly, nonatomic) BOOL shouldSerializeAsPlainString;
@property (readonly, nonatomic) WFVariable *variable;
@property (readonly, nonatomic) NSArray *containedVariables;
@property (readonly, nonatomic) id<WFPropertyListObject> legacySerializedRepresentation;
@property (readonly, nonatomic) id<WFPropertyListObject> serializedRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithVariable:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)initWithVariableString:(id)a0;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)stateByReplacingVariable:(id)a0 withVariable:(id)a1;
- (id)parameterStateByRemovingAskVariablesAndPopulatingInsertionIndex;
- (id)initWithVariableString:(id)a0 userInputInsertionIndex:(long long)a1;

@end
