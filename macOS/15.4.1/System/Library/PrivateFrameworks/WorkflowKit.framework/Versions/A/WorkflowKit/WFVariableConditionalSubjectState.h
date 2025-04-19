@class NSArray, WFVariableParameterState, WFContentProperty, NSString, WFVariable;
@protocol WFPropertyListObject;

@interface WFVariableConditionalSubjectState : WFConditionalSubjectParameterState <WFVariableSupportingParameterState>

@property (class, readonly, nonatomic) Class processingValueClass;
@property (class, readonly, nonatomic) NSArray *processingValueClasses;

@property (readonly, nonatomic) WFVariableParameterState *variableState;
@property (readonly, nonatomic) WFContentProperty *effectiveContentProperty;
@property (readonly, nonatomic) WFVariable *variable;
@property (readonly, nonatomic) NSArray *containedVariables;
@property (readonly, nonatomic) id<WFPropertyListObject> legacySerializedRepresentation;
@property (readonly, nonatomic) id<WFPropertyListObject> serializedRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subjectType;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)contentType;
- (BOOL)isEnumeration;
- (unsigned long long)tense;
- (id)initWithVariable:(id)a0;
- (id)unitType;
- (BOOL)isIrrational;
- (void)getContentWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (unsigned long long)comparableTimeUnits;
- (Class)contentClassProvidingContentProperty;
- (unsigned long long)displayableTimeUnits;
- (Class)effectiveContentClass;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(id /* block */)a0;
- (id)initWithVariableState:(id)a0;
- (BOOL)isCaseInsensitive;
- (id)localizedLabelForEnumerationPossibleState:(id)a0;
- (id)supportedComparisonOperators;

@end
