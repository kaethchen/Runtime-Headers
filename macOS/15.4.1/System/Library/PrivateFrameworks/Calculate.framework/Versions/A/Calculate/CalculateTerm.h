@class NSArray, NSString, CalculateResult, CalculateUnit, NSNumber;

@interface CalculateTerm : NSObject

@property (weak, nonatomic) CalculateResult *result;
@property (nonatomic) struct { unsigned long long w[2]; } decimalValue;
@property (retain, nonatomic) NSNumber *value;
@property (retain, nonatomic) NSNumber *forceScientificNotation;
@property (readonly, nonatomic) NSArray *units;
@property (readonly, nonatomic) NSString *formattedResult;
@property (readonly, nonatomic) NSString *formattedValue;
@property (readonly, nonatomic) NSString *formattedUnit;
@property (readonly, nonatomic) CalculateUnit *primaryUnit;

+ (id)termWithValue:(id)a0 units:(id)a1 result:(id)a2;

- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)locale;
- (id)numberFormatter;
- (BOOL)isCurrency;
- (id)resultContainingNumberFormatter;
- (double)_valueWithoutIrrelevantDecimals;
- (void)_setDecimalValue:(struct { unsigned long long x0[2]; })a0;
- (id)emptyNumeratorString;
- (id)formattedUnitReplacingFirstNumerator:(id)a0;
- (void)getMaximumFractionDigits:(unsigned long long *)a0 minimumFractionDigits:(unsigned long long *)a1;
- (void)getMaximumFractionDigits:(unsigned long long *)a0 minimumFractionDigits:(unsigned long long *)a1 forValue:(struct { unsigned long long x0[2]; })a2;
- (id)localizedNameForValue:(double)a0 locale:(id)a1 retainingFormat:(BOOL)a2 unit:(id)a3;

@end
