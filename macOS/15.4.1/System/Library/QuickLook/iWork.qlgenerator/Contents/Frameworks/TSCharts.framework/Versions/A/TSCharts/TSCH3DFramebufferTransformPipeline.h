@class TSCH3DFramebuffer;
@protocol TSCH3DPipelineLinkable;

@interface TSCH3DFramebufferTransformPipeline : TSCH3DLinkablePipeline {
    TSCH3DFramebuffer *_input;
}

@property (retain, nonatomic) id<TSCH3DPipelineLinkable> source;
@property (retain, nonatomic) TSCH3DFramebuffer *target;

- (void)dealloc;
- (BOOL)run;
- (void).cxx_destruct;
- (void)loadSource;
- (BOOL)prepareFramebuffer;

@end
