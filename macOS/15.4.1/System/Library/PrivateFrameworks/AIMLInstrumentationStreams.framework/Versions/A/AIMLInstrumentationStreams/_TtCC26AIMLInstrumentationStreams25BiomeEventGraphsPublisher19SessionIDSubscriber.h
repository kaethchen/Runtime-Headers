@interface _TtCC26AIMLInstrumentationStreams25BiomeEventGraphsPublisher19SessionIDSubscriber : NSObject <BPSSubscriber> {
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ eventsHandledInGraphBuilder;
    void /* unknown type, empty encoding */ sessionCount;
    void /* unknown type, empty encoding */ maxEventsInGraph;
    void /* unknown type, empty encoding */ maxEventsInGraphBuilder;
    void /* unknown type, empty encoding */ downstream;
    void /* unknown type, empty encoding */ graphSessionWindowLength;
    void /* unknown type, empty encoding */ latestRecievedTimestamp;
    void /* unknown type, empty encoding */ upstreamFinished;
    void /* unknown type, empty encoding */ sessionBuilder;
    void /* unknown type, empty encoding */ logicalClockBuilder;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)receiveCompletion:(id)a0;
- (long long)receiveInput:(id)a0;
- (void)receiveSubscription:(id)a0;

@end
