@class VNFaceprint;

@interface MADMultiModalInputFaceprintSegment : MADMultiModalInputSegment

@property (readonly, nonatomic) VNFaceprint *faceprint;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)type;
- (id)initWithFaceprint:(id)a0;

@end
