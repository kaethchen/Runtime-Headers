@class IMDiMessagePipelineResources, NSString, BlastDoorStickerAttachmentInfo;

@interface IMRepositionStickerProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources;
@property (copy, nonatomic) BlastDoorStickerAttachmentInfo *stickerAttachmentInfo;
@property (copy, nonatomic) NSString *stickerEditedMessageGuid;

- (void).cxx_destruct;
- (id)initWithPipelineResources:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
