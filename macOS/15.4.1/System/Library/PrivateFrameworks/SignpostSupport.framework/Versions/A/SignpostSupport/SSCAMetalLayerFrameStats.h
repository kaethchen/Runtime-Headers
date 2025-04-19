@class SSCAMetalLayerStats, NSString, SSCAMLDurationStats;

@interface SSCAMetalLayerFrameStats : NSObject <SignpostJSONRepresentable>

@property (readonly, weak, nonatomic) SSCAMetalLayerStats *parentIntervalStats;
@property (readonly, nonatomic) unsigned long long frameCount;
@property (readonly, nonatomic) double framesPerSecond;
@property (readonly, nonatomic) SSCAMLDurationStats *totalEndToEndWalltimeStats;
@property (readonly, nonatomic) SSCAMLDurationStats *cpuEndToEndWalltimeStats;
@property (readonly, nonatomic) SSCAMLDurationStats *gpuEndToEndWalltimeStats;
@property (readonly, nonatomic) SSCAMLDurationStats *onGPUWalltimeStats;
@property (readonly, nonatomic) SSCAMLDurationStats *gpuDoneToCompletedWalltimeStats;
@property (readonly, nonatomic) unsigned long long commandBufferCount;
@property (readonly, nonatomic) double commandBuffersPerSecond;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)jsonDescription:(unsigned long long)a0;
- (id)initWithSignpostAggregation:(id)a0 parentIntervalStats:(id)a1;

@end
