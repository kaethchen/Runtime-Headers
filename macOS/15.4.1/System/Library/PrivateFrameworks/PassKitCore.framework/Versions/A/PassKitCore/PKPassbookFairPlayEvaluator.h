@interface PKPassbookFairPlayEvaluator : NSObject

+ (void)getFairPlayInfoWithAuditToken:(struct { unsigned int x0[8]; })a0 nonce:(id)a1 completion:(id /* block */)a2;

- (id)init;

@end
