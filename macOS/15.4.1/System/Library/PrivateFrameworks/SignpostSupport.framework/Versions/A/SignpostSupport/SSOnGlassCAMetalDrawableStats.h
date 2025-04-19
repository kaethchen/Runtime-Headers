@class NSString, SignpostSupportValueStats;

@interface SSOnGlassCAMetalDrawableStats : NSObject <SignpostJSONRepresentable>

@property (readonly, nonatomic) SignpostSupportValueStats *onGlassIntervalStats;
@property (readonly, nonatomic) SignpostSupportValueStats *inFlightTotalEndToEndIntervalStats;
@property (readonly, nonatomic) SignpostSupportValueStats *inFlightCPUEndToEndIntervalStats;
@property (readonly, nonatomic) SignpostSupportValueStats *inFlightGPUEndToEndIntervalStats;
@property (readonly, nonatomic) SignpostSupportValueStats *inFlightWaitForGlassStats;
@property (readonly, nonatomic) SignpostSupportValueStats *inFlightOnGPUTimeStats;
@property (readonly, nonatomic) SignpostSupportValueStats *inFlightCommandBufferCountStats;
@property (readonly, nonatomic) SignpostSupportValueStats *inFlightGPUResidencyStats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)jsonDescription:(unsigned long long)a0;
- (id)initWithOnGlassDrawableIntervals:(id)a0;

@end
