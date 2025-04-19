@interface SiriAnalyticsPreprocessor : NSObject {
    void /* unknown type, empty encoding */ underlyingActor;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithMetastore:(id)a0 metastoreQueue:(id)a1 fbf:(id)a2 telemetry:(id)a3 messageTailing:(id)a4 messageStaging:(id)a5 localStorage:(id)a6 uspUploadQueue:(id)a7;
- (void)triggerWithReason:(long long)a0 completion:(id /* block */)a1;

@end
