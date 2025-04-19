@class NSString, NSDictionary;

@interface PISemanticStyleAdjustmentController : PIAdjustmentController

@property (nonatomic) double tone;
@property (nonatomic) double color;
@property (copy, nonatomic) NSString *cast;
@property (nonatomic) double intensity;
@property (copy, nonatomic) NSDictionary *statistics;
@property (nonatomic) long long version;

+ (id)versionKey;
+ (id)colorKey;
+ (id)toneKey;
+ (id)castKey;
+ (id)allCasts;
+ (id)allCastsWithStandard:(BOOL)a0;
+ (id)allCreativeCasts;
+ (id)allSystemCasts;
+ (id)defaultValuesForCast:(id)a0;
+ (id)intensityKey;
+ (id)statisticsKey;
+ (id)useStyleEngineKey;

- (void)updateWithSemStyleInfo:(id)a0;
- (BOOL)_areValuesEquivalentBetween:(id)a0 and:(id)a1 nilEquivalentDefaultValue:(id)a2;
- (BOOL)hasDefaultStyleParameters;
- (BOOL)isSettingEqual:(id)a0 forKey:(id)a1;
- (void)resetToUnstyledOriginal;

@end
