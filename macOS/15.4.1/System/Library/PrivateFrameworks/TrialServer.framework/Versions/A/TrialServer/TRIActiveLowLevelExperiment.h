@class NSArray;

@interface TRIActiveLowLevelExperiment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *targetedBundleIds;
@property (readonly, nonatomic) NSArray *factorLevelStrings;

+ (id)lowLevelExperimentWithTargetedBundleIds:(id)a0 factorLevelStrings:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementFactorLevelStrings:(id)a0;
- (id)copyWithReplacementTargetedBundleIds:(id)a0;
- (id)initWithTargetedBundleIds:(id)a0 factorLevelStrings:(id)a1;
- (BOOL)isEqualTolowLevelExperiment:(id)a0;

@end
