@class NSUUID, NSArray, NSString, NSError;

@interface AIMLExperimentationAnalyticsManagerInternal : NSObject {
    void /* unknown type, empty encoding */ instrumentation;
    void /* unknown type, empty encoding */ experimentation;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ experimentsForCodePathID;
    void /* unknown type, empty encoding */ rolloutTrackingInfoForNamespace;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ rolloutRegistrationLock;
}

- (id)init;
- (void).cxx_destruct;
- (void)cacheTrialExperimentIdentifiersFor:(NSUUID *)a0 namespaces:(NSArray *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)cacheTrialExperimentsFor:(NSUUID *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)emitTriggerFor:(NSUUID *)a0 namespace:(NSString *)a1 requestID:(NSUUID *)a2 completionHandler:(void (^)(NSError *))a3;
- (void)emitTriggerFor:(NSUUID *)a0 requestID:(NSUUID *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)emitTriggerFromCacheFor:(NSUUID *)a0 requestID:(NSUUID *)a1 completionHandler:(void (^)(NSError *))a2;

@end
