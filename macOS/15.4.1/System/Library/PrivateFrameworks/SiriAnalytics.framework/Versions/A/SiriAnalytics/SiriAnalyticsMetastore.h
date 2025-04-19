@interface SiriAnalyticsMetastore : NSObject {
    void /* unknown type, empty encoding */ storageURL;
    void /* unknown type, empty encoding */ db;
    void /* unknown type, empty encoding */ bootstrapped;
    void /* unknown type, empty encoding */ schemas;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)checkpoint;
- (void)bootstrap;
- (void)prune;
- (void)cleanupAbandonedClocksWithActiveClockIdentifier:(id)a0;
- (void)createClock:(id)a0 rootClockIdentifier:(id)a1 startedOn:(unsigned long long)a2;
- (id)createTagWithShim:(id)a0 onClock:(id)a1;
- (void)endClock:(id)a0 endedOn:(unsigned long long)a1 endedReason:(unsigned long long)a2;
- (void)pulseClock:(id)a0 lastEventOn:(unsigned long long)a1;

@end
