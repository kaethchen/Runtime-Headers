@interface TSDStrokePattern : NSObject <NSCopying, TSDMixing> {
    double _pattern[6];
}

@property (readonly, nonatomic) long long patternType;
@property (readonly, nonatomic) double *pattern;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) double phase;
@property (readonly, nonatomic) BOOL isDash;
@property (readonly, nonatomic) BOOL isRoundDash;

+ (id)longDashPattern;
+ (id)dashPatternWithSpacing:(double)a0;
+ (id)emptyPattern;
+ (id)mediumDashPattern;
+ (id)roundDashPattern;
+ (id)roundDashPatternWithSpacing:(double)a0;
+ (id)shortDashPattern;
+ (id)solidPattern;
+ (id)strokePatternWithPattern:(const double *)a0 count:(unsigned long long)a1 phase:(double)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)p_patternString;
- (void)applyToContext:(struct CGContext { } *)a0 lineWidth:(double)a1;
- (void)i_applyToContext:(struct CGContext { } *)a0 lineWidth:(double)a1 capStyle:(unsigned long long *)a2;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithPattern:(const double *)a0 count:(unsigned long long)a1 phase:(double)a2;
- (id)initWithPatternType:(long long)a0 pattern:(const double *)a1 count:(unsigned long long)a2 phase:(double)a3;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (double)p_renderableLengthForUnclippedPatternWithLineWidth:(double)a0 withinAvailableLength:(double)a1;
- (id)p_typeString;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
