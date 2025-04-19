@class NSArray;

@interface WFQuantityFieldParameter : WFNumberFieldParameter

@property (copy, nonatomic) NSArray *possibleUnits;

+ (BOOL)defaultAllowsDecimalNumbers;
+ (BOOL)defaultAllowsNegativeNumbers;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)defaultUnit;
- (id)defaultSerializedRepresentation;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleUnit:(id)a0 magnitude:(id)a1 style:(unsigned long long)a2;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 prompt:(id)a2 completionHandler:(id /* block */)a3;

@end
