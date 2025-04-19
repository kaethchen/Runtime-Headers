@interface VNTrackOpticalFlowRequestConfiguration : VNStatefulRequestConfiguration

@property (nonatomic) unsigned long long computationAccuracy;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) BOOL keepNetworkOutput;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end
