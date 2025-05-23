@interface MADPersonIdentificationRequest : MADRequest

@property (nonatomic) unsigned long long faceDetectorVisionRevision;
@property (nonatomic) BOOL allowOnDemand;
@property (nonatomic) BOOL allowUnverifiedIdentity;
@property (nonatomic) BOOL useLowResolutionPicture;
@property (nonatomic) unsigned long long maximumFaceCount;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
