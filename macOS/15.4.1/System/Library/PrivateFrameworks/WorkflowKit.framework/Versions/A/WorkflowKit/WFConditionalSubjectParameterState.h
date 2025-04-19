@class NSArray, NSString, NSNumber, WFVariable;
@protocol WFPropertyListObject;

@interface WFConditionalSubjectParameterState : NSObject <WFVariableSupportingParameterState>

@property (class, readonly, nonatomic) Class processingValueClass;
@property (class, readonly, nonatomic) NSArray *processingValueClasses;

@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic) NSNumber *maximumLength;
@property (readonly, nonatomic, getter=isCaseInsensitive) BOOL caseInsensitive;
@property (readonly, nonatomic) NSNumber *minimumValue;
@property (readonly, nonatomic) NSNumber *maximumValue;
@property (readonly, nonatomic) NSNumber *stepValue;
@property (readonly, nonatomic, getter=isIrrational) BOOL irrational;
@property (readonly, nonatomic) unsigned long long tense;
@property (readonly, nonatomic) unsigned long long displayableTimeUnits;
@property (readonly, nonatomic) unsigned long long comparableTimeUnits;
@property (readonly, nonatomic) NSString *unitType;
@property (readonly, nonatomic) WFVariable *variable;
@property (readonly, nonatomic, getter=isEnumeration) BOOL enumeration;
@property (copy, nonatomic) NSString *homeIdentifier;
@property (readonly, nonatomic) NSArray *containedVariables;
@property (readonly, nonatomic) id<WFPropertyListObject> legacySerializedRepresentation;
@property (readonly, nonatomic) id<WFPropertyListObject> serializedRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subjectClasses;
+ (id)subjectType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithVariable:(id)a0;
- (void)getContentWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(id /* block */)a0;
- (id)initWithHomeIdentifier:(id)a0;
- (id)localizedLabelForEnumerationPossibleState:(id)a0;
- (id)supportedComparisonOperators;

@end
