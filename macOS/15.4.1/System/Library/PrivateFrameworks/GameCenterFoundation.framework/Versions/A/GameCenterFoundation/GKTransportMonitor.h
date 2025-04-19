@interface GKTransportMonitor : NSObject {
    void /* unknown type, empty encoding */ serialQueue;
    void /* unknown type, empty encoding */ reportTask;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ monitors;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ clientDelegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMaxIteration:(long long)a0 pingInterval:(long long)a1 pingTimeout:(long long)a2 reportFrequency:(long long)a3;
- (id)initWithPingInterval:(long long)a0 pingTimeout:(long long)a1 reportFrequency:(long long)a2;
- (void)monitoringStopped:(id)a0;
- (void)receivedPing:(id)a0 sequenceNumber:(long long)a1;
- (void)receivedPong:(id)a0 sequenceNumber:(long long)a1;
- (void)startMonitor:(id)a0;
- (void)stopMonitor:(id)a0;
- (void)stopMonitoringAll;

@end
