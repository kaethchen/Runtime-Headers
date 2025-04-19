@class BKSProcessAssertion, HDHealthStoreClient;

@interface _HDBackgroundRunningAssertion : HDAssertion {
    BOOL _shouldAcquireCLAssertion;
    HDHealthStoreClient *_client;
    BKSProcessAssertion *_bksAssertion;
}

- (void).cxx_destruct;

@end
