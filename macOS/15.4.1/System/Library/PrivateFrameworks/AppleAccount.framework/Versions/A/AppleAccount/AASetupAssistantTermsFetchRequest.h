@class ACAccount;

@interface AASetupAssistantTermsFetchRequest : AARequest {
    ACAccount *_account;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (id)urlString;
- (id)urlRequest;

@end
