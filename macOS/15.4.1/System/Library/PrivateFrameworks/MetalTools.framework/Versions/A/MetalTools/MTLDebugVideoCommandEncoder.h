@protocol MTLMotionEstimationPipeline;

@interface MTLDebugVideoCommandEncoder : MTLToolsVideoCommandEncoder {
    id<MTLMotionEstimationPipeline> _currentPipeline;
}

- (void)dealloc;
- (void)generateMotionVectorsForTexture:(id)a0 previousTexture:(id)a1 resultBuffer:(id)a2 bufferOffset:(unsigned long long)a3;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (void)setMotionEstimationPipeline:(id)a0;

@end
