@class AIMLExperimentationAnalyticsManagerInternal;

@interface AIMLExperimentationAnalyticsManager : NSObject <AIMLExperimentationAnalytics>

@property (readonly, nonatomic) AIMLExperimentationAnalyticsManagerInternal *underlyingObject;

- (id)init;
- (void).cxx_destruct;
- (void)cacheTrialExperimentsForCodePathID:(id)a0 completionHandler:(id /* block */)a1;
- (void)cacheTrialExperimentsIdentifiersForCodePathID:(id)a0 namespaces:(id)a1 completionHandler:(id /* block */)a2;
- (void)emitTriggerForCodePathID:(id)a0 requestID:(id)a1 completionHandler:(id /* block */)a2;
- (void)emitTriggerForCodePathID:(id)a0 withNamespace:(id)a1 requestID:(id)a2 completionHandler:(id /* block */)a3;
- (void)emitTriggerFromCacheForCodePathID:(id)a0 requestID:(id)a1 completionHandler:(id /* block */)a2;

@end
