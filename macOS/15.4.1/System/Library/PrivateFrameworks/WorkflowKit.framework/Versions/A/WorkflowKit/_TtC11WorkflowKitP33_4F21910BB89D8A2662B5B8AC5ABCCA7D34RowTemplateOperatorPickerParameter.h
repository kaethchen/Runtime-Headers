@class NSArray;

@interface _TtC11WorkflowKitP33_4F21910BB89D8A2662B5B8AC5ABCCA7D34RowTemplateOperatorPickerParameter : WFEnumerationParameter {
    void /* unknown type, empty encoding */ operators;
    void /* unknown type, empty encoding */ showLegacyComparisonAsValid;
}

@property (nonatomic, readonly) NSArray *possibleStates;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;
- (BOOL)parameterStateIsValid:(id)a0;

@end
