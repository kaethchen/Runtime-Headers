@class NSString;

@interface TRIRolloutIdentifiers : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *factorPackId;
@property (readonly, nonatomic) NSString *rampId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRolloutId:(id)a0 deploymentId:(int)a1 factorPackId:(id)a2;
- (id)initWithRolloutId:(id)a0 deploymentId:(int)a1 factorPackId:(id)a2 rampId:(id)a3;
- (BOOL)isEqualToRolloutIdentifiers:(id)a0;

@end
