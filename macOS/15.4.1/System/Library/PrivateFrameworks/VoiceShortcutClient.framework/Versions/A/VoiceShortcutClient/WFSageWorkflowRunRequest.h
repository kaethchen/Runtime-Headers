@class NSLocale;

@interface WFSageWorkflowRunRequest : WFWorkflowRunRequest

@property (readonly, nonatomic) NSLocale *locale;

- (void).cxx_destruct;
- (BOOL)handlesDialogRequests;
- (id)initWithInput:(id)a0 presentationMode:(unsigned long long)a1 locale:(id)a2;
- (BOOL)isStepwise;

@end
