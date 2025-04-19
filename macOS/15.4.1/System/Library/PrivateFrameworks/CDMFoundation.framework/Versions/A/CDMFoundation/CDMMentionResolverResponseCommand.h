@class SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse;

@interface CDMMentionResolverResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALMENTION_RESOLVERMentionResolverResponse *response;

- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;
- (id)initWithMentions:(id)a0;

@end
