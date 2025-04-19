@interface SiriAnalytics.SiriAnalyticsMessageStaging : NSObject {
    void /* unknown type, empty encoding */ stagingActor;
    void /* unknown type, empty encoding */ stagingStreamActor;
}

- (id)init;
- (void).cxx_destruct;
- (void)bootstrapAndPruneWithCompletionHandler:(void (^)(void))a0;
- (id)initWithInternalTelemetry:(id)a0;
- (void)purgeWithCompletionHandler:(void (^)(void))a0;

@end
