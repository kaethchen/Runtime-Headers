@protocol NUPipelineBuilder;

@interface _NUPipelineBuilderRenderPipeline : NURenderPipeline

@property (readonly, nonatomic) id<NUPipelineBuilder> pipelineBuilder;

- (void).cxx_destruct;
- (id)initWithPipelineBuilder:(id)a0;

@end
