@class NSString;

@interface TRIRolloutDeployment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *shortDesc;
@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) int deploymentId;

+ (id)deploymentWithRolloutId:(id)a0 deploymentId:(int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRolloutId:(id)a0 deploymentId:(int)a1;
- (id)taskTag;
- (id)copyWithReplacementDeploymentId:(int)a0;
- (id)copyWithReplacementRolloutId:(id)a0;
- (BOOL)isEqualToDeployment:(id)a0;

@end
