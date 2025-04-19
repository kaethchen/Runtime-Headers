@interface MSBucketBarConfigurationController : NSObject <MSBucketBarConfigurationProviderDelegate> {
    void /* unknown type, empty encoding */ provider;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ observerQueue;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ selection;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (void)addConfigurationObserver:(id)a0;
- (void)removeConfigurationObserver:(id)a0;
- (BOOL)isBucketBarHiddenForMailboxes:(id)a0;
- (void)bucketBarConfigurationProvider:(id)a0 didChangeConfiguration:(id)a1;
- (long long)selectedBucketForMailboxes:(id)a0;
- (BOOL)setBucketBarHidden:(BOOL)a0 forMailboxes:(id)a1;
- (void)setSelectedBucket:(long long)a0 mailboxes:(id)a1;
- (id)stateCaptureInformation;

@end
