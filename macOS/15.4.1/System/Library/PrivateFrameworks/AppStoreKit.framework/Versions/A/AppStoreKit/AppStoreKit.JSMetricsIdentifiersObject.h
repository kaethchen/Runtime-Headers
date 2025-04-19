@class NSString;

@interface AppStoreKit.JSMetricsIdentifiersObject : NSObject <_TtP11AppStoreKitP33_D90E460A7F78046F145EE488F9FEAB3033JSMetricsIdentifiersObjectExports_> {
    void /* unknown type, empty encoding */ metricsIdStore;
    void /* unknown type, empty encoding */ metricsTopicProvider;
}

@property (nonatomic, readonly) NSString *currentTopic;

- (id)init;
- (void).cxx_destruct;
- (id)getIdentifierForContext:(id)a0;
- (id)getIdentifierForContextSync:(id)a0;
- (id)getMetricsFieldsForContexts:(id)a0;

@end
