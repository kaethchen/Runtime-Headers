@class NSArray, NSMutableDictionary, UnitsInfo, NSString, UnitTypeInfo, NSNumberFormatter;

@interface CalculateResult : NSObject

@property (weak, nonatomic) CalculateResult *parent;
@property (nonatomic) struct TreeObject { int x0; void /* function */ *x1; struct TreeObject *x2; struct TreeObject *x3; double x4; struct { unsigned long long x0[2]; } x5; unsigned long long x6; struct UnitCount { int x0; int x1; } x7[16]; BOOL x8; BOOL x9; BOOL x10; BOOL x11; int x12; } *parseTree;
@property (nonatomic) struct TreeObject { int x0; void /* function */ *x1; struct TreeObject *x2; struct TreeObject *x3; double x4; struct { unsigned long long x0[2]; } x5; unsigned long long x6; struct UnitCount { int x0; int x1; } x7[16]; BOOL x8; BOOL x9; BOOL x10; BOOL x11; int x12; } *resultTree;
@property (nonatomic) BOOL localizeUnit;
@property (retain, nonatomic) UnitsInfo *unitsInfo;
@property (retain, nonatomic) UnitTypeInfo *typeInfo;
@property (nonatomic) int singleUnitID;
@property (retain, nonatomic) NSMutableDictionary *variableLookups;
@property (nonatomic) struct TreeObject **variableResultTrees;
@property (nonatomic) int variableResultTreesCount;
@property (nonatomic) struct { unsigned long long formats[17]; } resolvedUnitFormats;
@property (nonatomic) BOOL isSimpleVerticalMath;
@property (readonly, nonatomic) NSString *expression;
@property (readonly, nonatomic) NSString *formattedExpression;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) NSArray *locales;
@property (nonatomic) int minimumFractionDigits;
@property (nonatomic) BOOL autoScientificNotation;
@property (nonatomic) unsigned long long scientificNotationFormat;
@property (nonatomic) unsigned long long unitFormat;
@property (nonatomic) BOOL flexibleFractionDigits;
@property (readonly, nonatomic) BOOL assumeDegrees;
@property (readonly, nonatomic) BOOL isTrivial;
@property (readonly, nonatomic) BOOL isPartialExpression;
@property (readonly, nonatomic) unsigned long long unitType;
@property (readonly, nonatomic) int unitExponent;
@property (readonly, nonatomic) NSString *formattedResult;
@property (readonly, nonatomic) NSArray *terms;
@property (readonly, nonatomic) CalculateResult *inputValueAndUnit;
@property (readonly, nonatomic) NSArray *conversions;
@property (readonly, nonatomic) BOOL hasStaleCurrencyData;
@property (readonly, nonatomic) id /* block */ graphableFunction;
@property (readonly, nonatomic) BOOL isNaN;
@property (nonatomic) BOOL synchronous;

+ (id)decimalNumberWithDecimal128:(struct { unsigned long long x0[2]; })a0;
+ (id)defaultNumberFormatter:(id)a0;
+ (void)preferMeasurementSystemsForLocale:(id)a0 preferred:(unsigned long long *)a1 fallback:(unsigned long long *)a2;
+ (id)resultWithResultTree:(struct TreeObject { int x0; void /* function */ *x1; struct TreeObject *x2; struct TreeObject *x3; double x4; struct { unsigned long long x0[2]; } x5; unsigned long long x6; struct UnitCount { int x0; int x1; } x7[16]; BOOL x8; BOOL x9; BOOL x10; BOOL x11; int x12; } *)a0 parseTree:(struct TreeObject { int x0; void /* function */ *x1; struct TreeObject *x2; struct TreeObject *x3; double x4; struct { unsigned long long x0[2]; } x5; unsigned long long x6; struct UnitCount { int x0; int x1; } x7[16]; BOOL x8; BOOL x9; BOOL x10; BOOL x11; int x12; } *)a1 locales:(id)a2 numberFormatter:(id)a3 unitsInfo:(id)a4 unitType:(int)a5 unitExponent:(int)a6 expression:(id)a7 isTrivial:(BOOL)a8 isPartialExpression:(BOOL)a9 variableLookups:(id)a10 variableResultTrees:(struct TreeObject **)a11 variableResultTreesCount:(int)a12 resolvedUnitFormats:(struct { unsigned long long x0[17]; })a13 forceResult:(BOOL)a14 assumeDegrees:(BOOL)a15 localizeUnit:(BOOL)a16 unitFormat:(unsigned long long)a17 autoScientificNotation:(BOOL)a18 scientificNotationFormat:(unsigned long long)a19 flexibleFractionDigits:(BOOL)a20 isSimpleVerticalMath:(BOOL)a21 minimumFractionDigits:(int)a22 hasStaleCurrencyData:(BOOL)a23;

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (struct TreeObject { int x0; void /* function */ *x1; struct TreeObject *x2; struct TreeObject *x3; double x4; struct { unsigned long long x0[2]; } x5; unsigned long long x6; struct UnitCount { int x0; int x1; } x7[16]; BOOL x8; BOOL x9; BOOL x10; BOOL x11; int x12; } *)convertedTree:(id)a0 from:(id)a1 needsUpdate:(BOOL *)a2;
- (void)_setExpression:(id)a0;
- (void)_setConversions:(id)a0;
- (void)_setInputValueAndUnit:(id)a0;
- (void)_setTerms:(id)a0;
- (id)availableConversions;
- (id)bestConversion;
- (id)conversionsForMetric:(BOOL)a0 US:(BOOL)a1 UK:(BOOL)a2;
- (id)convertedTo:(id)a0;
- (id)convertedTo:(id)a0 from:(id)a1;
- (struct TreeObject { int x0; void /* function */ *x1; struct TreeObject *x2; struct TreeObject *x3; double x4; struct { unsigned long long x0[2]; } x5; unsigned long long x6; struct UnitCount { int x0; int x1; } x7[16]; BOOL x8; BOOL x9; BOOL x10; BOOL x11; int x12; } *)convertedTree:(id)a0 needsUpdate:(BOOL *)a1;
- (void)enableMeasurementSystemsForLocale:(id)a0 metric:(BOOL *)a1 US:(BOOL *)a2 UK:(BOOL *)a3;
- (id /* block */)graphableFunctionFor:(id)a0;
- (id)ignoringNaN;
- (BOOL)isAcceptableConversion:(struct TreeObject { int x0; void /* function */ *x1; struct TreeObject *x2; struct TreeObject *x3; double x4; struct { unsigned long long x0[2]; } x5; unsigned long long x6; struct UnitCount { int x0; int x1; } x7[16]; BOOL x8; BOOL x9; BOOL x10; BOOL x11; int x12; } *)a0;
- (id)localizedConversions;
- (id)newUnit:(id)a0;
- (id)updateVariables:(id)a0;

@end
