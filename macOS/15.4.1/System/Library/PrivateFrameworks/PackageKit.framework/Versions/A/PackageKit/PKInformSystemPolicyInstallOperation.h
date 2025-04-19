@interface PKInformSystemPolicyInstallOperation : PKInstallOperation

- (int)installState;
- (void)main;
- (BOOL)informSystemPolicyReturningError:(id *)a0;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;
- (id)messageTracerComment;
- (id)messageTracerDomain;

@end
