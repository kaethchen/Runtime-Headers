@class NSString;

@interface GKTransportMonitorPlayerStat : NSObject {
    void /* unknown type, empty encoding */ monitoring;
}

@property (nonatomic, readonly) NSString *monitoring;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ latency;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ averageLatency;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ sentCount;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ receivedCount;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMonitoring:(id)a0 latency:(double)a1 averageLatency:(double)a2 sentCount:(long long)a3 receivedCount:(long long)a4;

@end
