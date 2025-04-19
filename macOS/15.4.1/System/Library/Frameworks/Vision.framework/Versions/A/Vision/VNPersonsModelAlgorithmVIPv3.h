@interface VNPersonsModelAlgorithmVIPv3 : VNPersonsModelAlgorithm

@property long long indexType;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)faceModelClass;

@end
