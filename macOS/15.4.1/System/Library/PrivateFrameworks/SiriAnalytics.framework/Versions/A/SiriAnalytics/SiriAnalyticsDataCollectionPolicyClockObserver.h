@interface SiriAnalyticsDataCollectionPolicyClockObserver : NSObject {
    void /* unknown type, empty encoding */ dataCollectionPolicy;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithSiriConfiguration:(id)a0 metastore:(id)a1 metastoreQueue:(id)a2;
- (void)rootClockCreatedWithClockIdentifier:(id)a0 completion:(id /* block */)a1;

@end
