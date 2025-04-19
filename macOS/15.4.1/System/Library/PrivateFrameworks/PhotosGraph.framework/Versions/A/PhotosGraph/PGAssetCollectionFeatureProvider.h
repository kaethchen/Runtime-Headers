@class NSArray;

@interface PGAssetCollectionFeatureProvider : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *featureSpecifications;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)featureInstancesWithMomentNode:(id)a0 atMomentIngest:(BOOL)a1;
- (id)initWithFeatureSpecifications:(id)a0;

@end
