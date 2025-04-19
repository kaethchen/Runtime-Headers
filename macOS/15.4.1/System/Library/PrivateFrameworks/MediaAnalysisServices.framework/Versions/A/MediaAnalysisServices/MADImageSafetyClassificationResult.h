@class NSDictionary;

@interface MADImageSafetyClassificationResult : MADResult

@property (readonly, nonatomic) BOOL isSensitive;
@property (readonly, nonatomic) NSDictionary *attributes;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIsSensitive:(BOOL)a0 andAttributes:(id)a1;

@end
