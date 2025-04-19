@class PTMetalContext;
@protocol MTLComputePipelineState;

@interface PTBoxFilter : NSObject {
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _boxFilter1ChannelHorizontal;
    id<MTLComputePipelineState> _boxFilter1ChannelVertical;
}

- (void).cxx_destruct;
- (int)boxFilter1Channel:(SEL)a0 inTex:(id)a1 intermediate:(id)a2 outTex:(id)a3 kernelWidth:(id)a4 outputRemapping:(int)a5;
- (id)initWithMetalContext:(id)a0 options:(int)a1;

@end
