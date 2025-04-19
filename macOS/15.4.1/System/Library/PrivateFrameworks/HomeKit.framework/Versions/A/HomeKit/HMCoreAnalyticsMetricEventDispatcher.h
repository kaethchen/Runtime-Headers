@interface HMCoreAnalyticsMetricEventDispatcher : HMFObject {
    id /* block */ _sendEventHandler;
}

- (id)init;
- (void).cxx_destruct;
- (void)sendEvent:(id)a0;
- (id)initWithSendEventHandler:(id /* block */)a0;

@end
