@class MADImagePersonalizationGatingResult;

@interface MADImagePersonalizationGatingRequest : MADRequest

@property (readonly, nonatomic) MADImagePersonalizationGatingResult *gatingResult;

+ (BOOL)supportsSecureCoding;

- (id)description;

@end
