@class IMDAccount;

@interface IMCheckInMessageProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDAccount *account;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (id)_getURL:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
