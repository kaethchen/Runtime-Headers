@class WFNumberStringSubstitutableState, NSArray, NSString, WFVariable;
@protocol WFPropertyListObject;

@interface WFQuantityParameterState : NSObject <WFParameterState, WFVariableSupportingParameterState>

@property (class, readonly, nonatomic) Class processingValueClass;
@property (class, readonly, nonatomic) NSArray *processingValueClasses;

@property (readonly, nonatomic) WFVariable *variable;
@property (readonly, nonatomic) WFNumberStringSubstitutableState *magnitudeState;
@property (readonly, copy, nonatomic) NSString *unitString;
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
- (id)initWithMagnitudeState:(id)a0 unitString:(id)a1;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)initWithMagnitudeState:(id)a0 unitString:(id)a1 variable:(id)a2;

@end
