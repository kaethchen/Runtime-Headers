@class NSUUID;

@interface VNStatefulRequestConfiguration : VNImageBasedRequestConfiguration

@property struct { long long value; int timescale; unsigned int flags; long long epoch; } frameAnalysisSpacing;
@property (readonly) NSUUID *requestUUID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRequestClass:(Class)a0;

@end
