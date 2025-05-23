@protocol MTLArgumentEncoder;

@interface MTLGPUDebugPipelineStateInfoEncoder : NSObject {
    id<MTLArgumentEncoder> _argumentEncoder;
}

@property (readonly, nonatomic) unsigned long long encodedLength;

- (void)dealloc;
- (id)initWithDevice:(id)a0;
- (void)setArgumentBuffer:(id)a0 offset:(unsigned long long)a1;
- (void)setComputePipelineState:(id)a0;
- (void)setRenderPipelineState:(id)a0;

@end
