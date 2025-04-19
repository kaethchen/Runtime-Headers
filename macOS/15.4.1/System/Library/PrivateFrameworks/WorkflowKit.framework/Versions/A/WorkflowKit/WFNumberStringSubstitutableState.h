@class NSNumber, NSDecimalNumber;

@interface WFNumberStringSubstitutableState : WFStringSubstitutableState

@property (retain, nonatomic) NSNumber *legacyNumber;
@property (readonly, nonatomic) NSDecimalNumber *decimalNumber;

+ (Class)processingValueClass;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;

- (void).cxx_destruct;
- (id)serializedRepresentation;
- (id)initWithValue:(id)a0;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;

@end
