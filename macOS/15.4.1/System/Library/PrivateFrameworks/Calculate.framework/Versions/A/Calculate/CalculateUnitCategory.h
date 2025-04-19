@class NSArray, CalculateUnitCollection, NSString, CalculateUnit, UnitTypeInfo;

@interface CalculateUnitCategory : NSObject

@property (retain, nonatomic) UnitTypeInfo *typeInfo;
@property (weak, nonatomic) CalculateUnitCollection *collection;
@property (retain, nonatomic) NSArray *units;
@property (readonly, nonatomic) unsigned long long unitType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) CalculateUnit *preferredFromUnit;
@property (readonly, nonatomic) CalculateUnit *preferredToUnit;

+ (id)categoryWithTypeInfo:(id)a0 unitsInfo:(id)a1 collection:(id)a2;

- (void).cxx_destruct;
- (id)locale;
- (BOOL)contains:(id)a0;
- (void)_findPreferredSIUnit:(id *)a0 metric:(id *)a1 US:(id *)a2 UK:(id *)a3;
- (id)findUnitWithName:(id)a0;
- (id)findUnitsWithQuery:(id)a0;
- (id)initWithTypeInfo:(id)a0 unitsInfo:(id)a1 collection:(id)a2;
- (id)preferredUnits;

@end
