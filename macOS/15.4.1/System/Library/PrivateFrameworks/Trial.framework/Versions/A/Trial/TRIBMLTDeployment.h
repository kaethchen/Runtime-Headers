@class NSString;

@interface TRIBMLTDeployment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *backgroundMLTaskId;
@property (readonly, nonatomic) int deploymentId;

+ (id)deploymentWithBackgroundMLTaskId:(id)a0 deploymentId:(int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasDeploymentId;
- (id)taskTag;
- (id)copyWithReplacementBackgroundMLTaskId:(id)a0;
- (id)copyWithReplacementDeploymentId:(int)a0;
- (id)initWithBackgroundMLTaskId:(id)a0 deploymentId:(int)a1;
- (BOOL)isEqualToDeployment:(id)a0;
- (id)shortDesc;

@end
