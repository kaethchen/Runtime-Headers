@class NSArray, TRIClientBackgroundMLTask, NSDate, NSNumber, TRIBMLTDeployment;

@interface TRIClientBMLTArtifact : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIBMLTDeployment *deployment;
@property (readonly, nonatomic) TRIClientBackgroundMLTask *backgroundTask;
@property (readonly, nonatomic) NSArray *populations;
@property (readonly, nonatomic) NSNumber *deploymentType;
@property (readonly, nonatomic) NSDate *deploymentDate;
@property (readonly, nonatomic) unsigned long long downloadSize;

+ (BOOL)_isStructurallyValidBMLT:(id)a0 deployment:(id)a1 namespaceName:(id)a2 populations:(id)a3 deploymentType:(id)a4 deploymentDate:(id)a5;
+ (id)allReferencedCKRecordKeys;
+ (id)artifactFromCKRecord:(id)a0 namespaceDescriptorProvider:(id)a1 error:(id *)a2;
+ (id)artifactWithBackgroundTask:(id)a0 populations:(id)a1 deploymentType:(id)a2 deploymentDate:(id)a3 downloadSize:(unsigned long long)a4;
+ (id)artifactWithTransientData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementPopulations:(id)a0;
- (id)copyWithReplacementBackgroundTask:(id)a0;
- (id)copyWithReplacementDeploymentDate:(id)a0;
- (id)copyWithReplacementDeploymentType:(id)a0;
- (id)copyWithReplacementDownloadSize:(unsigned long long)a0;
- (id)earliestStartDateForActivationIfInFuture;
- (id)initWithBackgroundTask:(id)a0 populations:(id)a1 deploymentType:(id)a2 deploymentDate:(id)a3 downloadSize:(unsigned long long)a4;
- (BOOL)isEqualToArtifact:(id)a0;

@end
