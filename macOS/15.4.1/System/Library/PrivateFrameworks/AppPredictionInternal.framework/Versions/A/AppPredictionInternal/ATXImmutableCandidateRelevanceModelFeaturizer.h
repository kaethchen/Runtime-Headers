@class NSArray;

@interface ATXImmutableCandidateRelevanceModelFeaturizer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *featureValueNames;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)dimensions;
- (id)featureVectorForContext:(id)a0 candidate:(id)a1;
- (id)initWithFeatureValueNames:(id)a0;
- (BOOL)isEqualToATXImmutableCandidateRelevanceModelFeaturizer:(id)a0;

@end
