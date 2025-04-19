@class NSString;
@protocol MTLDevice;

@interface MTLToolsVideoCommandEncoder : MTLToolsCommandEncoder <MTLVideoCommandEncoderSPI>

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)endEncodingAndRetrieveProgramAddressTable;
- (void)generateMotionVectorsForTexture:(id)a0 previousTexture:(id)a1 resultBuffer:(id)a2 bufferOffset:(unsigned long long)a3;
- (void)setMotionEstimationPipeline:(id)a0;
- (void)updateFence:(id)a0;
- (void)waitForFence:(id)a0;

@end
