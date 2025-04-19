@class NSDictionary, AASigningSession, ACAccount;

@interface AASetupAssistantSetupDelegatesRequest : AARequest {
    NSDictionary *setupParameters;
    AASigningSession *signingSession;
    ACAccount *_account;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)urlString;
- (id)urlRequest;
- (id)initWithAccount:(id)a0 withSetupParameters:(id)a1 signingSession:(id)a2;

@end
