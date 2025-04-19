@class BRCAccountSession;

@interface BRCCKMetricEndpoint : BRCMetricEndpoint {
    BRCAccountSession *_session;
}

- (void).cxx_destruct;
- (void)submitEventMetric:(id)a0;
- (id)initWithSession:(id)a0;

@end
