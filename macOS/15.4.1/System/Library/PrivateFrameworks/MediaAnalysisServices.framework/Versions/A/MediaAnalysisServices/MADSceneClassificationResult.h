@class NSSet;

@interface MADSceneClassificationResult : MADResult

@property (readonly, nonatomic) NSSet *classifications;

+ (BOOL)supportsSecureCoding;
+ (id)resultWithClassifications:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithClassifications:(id)a0;

@end
