@class NSString, UnitInfo, CalculateUnitCategory, NSLocale;

@interface CalculateUnit : NSObject

@property (weak, nonatomic) CalculateUnitCategory *category;
@property (retain, nonatomic) NSString *displayNames;
@property (retain, nonatomic) NSLocale *displayNamesLocale;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *shortName;
@property (retain, nonatomic) UnitInfo *unitInfo;
@property (retain, nonatomic) CalculateUnit *nextSmallest;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *compactName;
@property (readonly, nonatomic) int exponent;
@property (readonly, nonatomic) unsigned long long unitType;
@property (readonly, nonatomic) BOOL isBaseUnit;
@property (readonly, nonatomic) BOOL isPreferredUnit;
@property (readonly, nonatomic) BOOL formatNextSmallest;

+ (id)localizedNameForValue:(double)a0 locale:(id)a1 retainingFormat:(BOOL)a2 unitFormat:(unsigned long long)a3 unitType:(unsigned long long)a4 name:(id)a5;
+ (id)unitWithID:(int)a0 unitsInfo:(id)a1 exponent:(int)a2;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)locale;
- (BOOL)contains:(id)a0;
- (BOOL)isDenominator;
- (BOOL)isNumerator;
- (id)localizedNameForFormat:(unsigned long long)a0;
- (id)localizedNameForValue:(double)a0 locale:(id)a1 retainingFormat:(BOOL)a2 unitFormat:(unsigned long long)a3;

@end
