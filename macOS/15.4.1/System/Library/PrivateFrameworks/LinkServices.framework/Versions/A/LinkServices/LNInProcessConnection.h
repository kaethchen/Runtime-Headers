@protocol LNConnectionHostInterface;

@interface LNInProcessConnection : LNConnection {
    id<LNConnectionHostInterface> _connectionInterface;
}

- (void).cxx_destruct;
- (id)connectionInterface;
- (void)connectWithOptions:(id)a0;
- (void)acquireAssertionsForConnectionOperation:(id)a0;
- (id)initWithEffectiveBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1 processInstanceIdentifier:(id)a2 appIntentsEnabledOnly:(BOOL)a3 userIdentity:(id)a4 error:(id *)a5;
- (BOOL)refreshWithOptions:(id)a0;

@end
