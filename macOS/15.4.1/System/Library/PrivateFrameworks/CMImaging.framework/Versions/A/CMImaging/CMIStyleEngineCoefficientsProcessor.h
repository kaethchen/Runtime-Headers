@class CMIMetalEventSynchronizer, CMIStyleEngineCoefficientsRingBuffer, CMIStyleEngineCoefficientsFilter, FigMetalContext;

@interface CMIStyleEngineCoefficientsProcessor : NSObject {
    FigMetalContext *_metalContext;
    CMIStyleEngineCoefficientsRingBuffer *_inputCoefficientsRing;
    CMIStyleEngineCoefficientsRingBuffer *_filteredCoefficientsRing;
    CMIStyleEngineCoefficientsFilter *_coefficientsFilter;
    unsigned long long _filterType;
    double _filterTimeWindow;
    unsigned long long _bufferCount;
    CMIMetalEventSynchronizer *_metalSynchronizer;
    struct __CVMetalBufferCache { } *_bufferCache;
}

@property (nonatomic) BOOL shouldShutdown;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (int)finishProcessing;
- (int)enqueueCoefficientsForFiltering:(struct __CVBuffer { } *)a0 withMetadata:(id)a1 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (int)filterCoefficientsForFrameWithMetadata:(id)a0 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 filterType:(unsigned long long)a2 toPixelBuffer:(struct __CVBuffer { } *)a3;
- (int)filterCoefficientsForFrameWithMetadata:(id)a0 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 filterType:(unsigned long long)a2 toPixelBuffer:(struct __CVBuffer { } *)a3 toGlobalRemixFactor:(float *)a4;
- (int)purgeResources;
- (int)_bindPixelBuffer:(struct __CVBuffer { } *)a0 toBuffer:(id *)a1;
- (int)enqueueCoefficientsForFiltering:(struct __CVBuffer { } *)a0 withMetadata:(id)a1 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 learnedStyle:(id)a3;
- (id)initWithBufferCount:(unsigned long long)a0 coefficientsSynchronization:(BOOL)a1 andOptionalMetalCommandQueue:(id)a2;

@end
