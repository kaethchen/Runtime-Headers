@class UnitsInfo, NSMutableSet, NSMutableArray;

@interface UnitRanks : NSObject

@property (retain, nonatomic) NSMutableSet *units;
@property (retain, nonatomic) NSMutableArray *ranks;
@property (readonly) BOOL containsFrom;
@property (readonly) BOOL containsTo;
@property (readonly) BOOL containsUnit;
@property (readonly) BOOL containsCurrency;
@property (readonly) BOOL isAmbiguous;
@property (weak, nonatomic) UnitsInfo *unitsInfo;
@property (nonatomic) int tokenType;
@property (nonatomic) BOOL isLaTeX;

+ (id)unitRanksWithUnitsInfo:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)sort;
- (void)addUnitRank:(id)a0;
- (id)initWithUnitsInfo:(id)a0;

@end
