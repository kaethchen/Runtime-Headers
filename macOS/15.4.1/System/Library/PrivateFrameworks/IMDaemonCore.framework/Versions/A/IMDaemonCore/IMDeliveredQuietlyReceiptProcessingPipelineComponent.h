@class IMDiMessagePipelineResources;

@interface IMDeliveredQuietlyReceiptProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources;

- (void).cxx_destruct;
- (id)_account;
- (id)_idsAccount;
- (void)_markMessageAsDeliveredQuietlyAndNotify:(id)a0 session:(id)a1 chat:(id)a2;
- (id)_messageStore;
- (id)initWithPipelineResources:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
