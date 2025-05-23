@class NSArray, NSUUID, NSString;
@protocol WFParameterState, WFPropertyListObject;

@interface WFPropertyListParameterValue : NSObject <NSCopying, WFParameterState>

@property (class, readonly, nonatomic) Class processingValueClass;
@property (class, readonly, nonatomic) NSArray *processingValueClasses;

@property (readonly, nonatomic) long long valueType;
@property (readonly, nonatomic) id<WFParameterState> state;
@property (readonly, nonatomic) NSUUID *identity;
@property (readonly, nonatomic) NSArray *containedVariables;
@property (readonly, nonatomic) id<WFPropertyListObject> legacySerializedRepresentation;
@property (readonly, nonatomic) id<WFPropertyListObject> serializedRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)classForValueType:(long long)a0;
+ (id)defaultStateForValueType:(long long)a0;
+ (id)localizedTitleForValueType:(long long)a0;
+ (Class)processedClassForValueType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithArray:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithNumber:(id)a0;
- (id)initWithType:(long long)a0 state:(id)a1;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)initWithType:(long long)a0 state:(id)a1 identity:(id)a2;
- (id)initWithArrayState:(id)a0;
- (id)initWithBoolean:(id)a0;
- (id)initWithBooleanState:(id)a0;
- (id)initWithChooseFromMenuItem:(id)a0;
- (id)initWithChooseFromMenuItemState:(id)a0;
- (id)initWithChooseFromMenuString:(id)a0;
- (id)initWithDictionaryState:(id)a0;
- (id)initWithNumberState:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2 valueType:(long long)a3 variableStringStateClass:(Class)a4;
- (id)initWithStringState:(id)a0;

@end
