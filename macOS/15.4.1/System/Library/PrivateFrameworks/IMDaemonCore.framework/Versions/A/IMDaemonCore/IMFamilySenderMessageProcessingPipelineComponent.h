@class IMDiMessageIDSTrustedData, IMDAccount;

@interface IMFamilySenderMessageProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDAccount *account;
@property (readonly, nonatomic) IMDiMessageIDSTrustedData *idsTrustedData;

- (void).cxx_destruct;
- (id)_generateError:(id)a0;
- (id)initWithAccount:(id)a0 idsTrustedData:(id)a1;
- (id)_fromFamilyMember:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
