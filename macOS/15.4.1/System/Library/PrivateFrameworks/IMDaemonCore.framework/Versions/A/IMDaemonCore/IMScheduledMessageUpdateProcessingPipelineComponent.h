@class IMDiMessagePipelineResources;

@interface IMScheduledMessageUpdateProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources;

- (void).cxx_destruct;
- (id)initWithPipelineResources:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
