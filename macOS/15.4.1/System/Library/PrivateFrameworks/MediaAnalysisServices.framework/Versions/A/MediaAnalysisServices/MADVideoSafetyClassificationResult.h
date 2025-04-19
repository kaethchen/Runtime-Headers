@class NSDictionary;

@interface MADVideoSafetyClassificationResult : MADVideoResult

@property (readonly, nonatomic) NSDictionary *scoresForLabels;
@property (readonly, nonatomic) BOOL isSensitive;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIsSensitive:(BOOL)a0 scoresForLabels:(id)a1;

@end
