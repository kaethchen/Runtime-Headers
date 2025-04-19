@protocol GTMTLTelemetryServiceObserver;

@interface GTMTLTelemetryServiceReplyStream : GTXPCDispatcher <GTMTLTelemetryServiceObserverXPCDispatcher> {
    id<GTMTLTelemetryServiceObserver> _observer;
}

- (void).cxx_destruct;
- (id)initWithObserver:(id)a0;
- (void)notifyStatistics_:(id)a0 replyConnection:(id)a1;

@end
