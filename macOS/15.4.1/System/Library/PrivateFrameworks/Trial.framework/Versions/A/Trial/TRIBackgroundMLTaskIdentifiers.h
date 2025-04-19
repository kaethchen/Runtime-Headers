@class NSString;

@interface TRIBackgroundMLTaskIdentifiers : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *bmltTaskId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) NSString *factorPackId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBMLTTaskId:(id)a0 deploymentId:(int)a1 treatmentId:(id)a2;
- (id)initWithBMLTaskId:(id)a0 deploymentId:(int)a1 factorPackId:(id)a2;
- (BOOL)isEqualToBMLTTaskIdentifiers:(id)a0;

@end
