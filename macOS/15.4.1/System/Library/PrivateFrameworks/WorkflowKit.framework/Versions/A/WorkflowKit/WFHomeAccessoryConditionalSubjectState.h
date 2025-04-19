@class WFHMServiceParameterState, HMHome, NSDictionary, HMCharacteristic, HMService, WFHMCharacteristicSubstitutableState;

@interface WFHomeAccessoryConditionalSubjectState : WFConditionalSubjectParameterState

@property (retain, nonatomic) NSDictionary *serializedWFHMServiceParameter;
@property (retain, nonatomic) NSDictionary *serializedWFHMCharacteristicSubstitutableState;
@property (retain, nonatomic) WFHMServiceParameterState *serviceParameterState;
@property (retain, nonatomic) WFHMCharacteristicSubstitutableState *characteristicSubstitutableState;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMService *service;
@property (readonly, nonatomic) HMCharacteristic *characteristic;
@property (readonly, nonatomic) BOOL negatesValue;

+ (id)subjectType;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)contentType;
- (BOOL)isEnumeration;
- (id)serializedRepresentation;
- (id)unit;
- (id)maximumValue;
- (id)minimumValue;
- (id)unitType;
- (id)homeIdentifier;
- (id)maximumLength;
- (id)stepValue;
- (void)getContentWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)initWithService:(id)a0 characteristic:(id)a1 homeIdentifier:(id)a2 negatesValue:(BOOL)a3;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(id /* block */)a0;
- (id)initWithSerializedWFHMServiceParameter:(id)a0 serializedWFHMCharacteristicSubstitutableState:(id)a1 negatesValue:(BOOL)a2;
- (id)localizedLabelForEnumerationPossibleState:(id)a0;

@end
