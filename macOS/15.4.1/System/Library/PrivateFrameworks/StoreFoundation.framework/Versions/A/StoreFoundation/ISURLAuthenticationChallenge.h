@class NSURLAuthenticationChallenge;

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge {
    NSURLAuthenticationChallenge *_challenge;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)password;
- (id)user;
- (id)sender;
- (BOOL)hasPassword;
- (long long)failureCount;
- (void)cancelAuthentication;
- (id)initWithAuthenticationChallenge:(id)a0;
- (void)useCredential:(id)a0;

@end
