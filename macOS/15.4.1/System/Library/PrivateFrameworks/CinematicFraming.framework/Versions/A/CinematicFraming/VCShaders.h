@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface VCShaders : NSObject {
    id<MTLComputePipelineState> _kernels[2];
    FigMetalContext *_context;
}

- (id)init;
- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)initWithContext:(id)a0;

@end
