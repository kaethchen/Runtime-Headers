@class NSArray, NSDictionary;

@interface CHScriptClassificationRawResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *orderedScriptClassification;
@property (readonly, nonatomic) NSDictionary *probabilityByScriptClassifications;

+ (id)changeableTextMathScriptClassifications;
+ (id)validFallbackScriptClassificationsForNontext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)fallbackScriptClassificationForWeakLabel;
- (id)initWithProbabilityByScriptClassifications:(id)a0;
- (BOOL)isEqualToScriptClassificationRawResult:(id)a0;
- (BOOL)isValidScriptClassificationForShapeStroke;
- (double)mathScriptProbability;
- (id)scriptClassificationAtIndex:(long long)a0;
- (id)scriptProbabilityAtIndex:(long long)a0;

@end
