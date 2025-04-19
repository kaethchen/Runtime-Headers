@class NSArray, NSDictionary, NSString;

@interface GKTransportMonitorStat : NSObject {
    void /* unknown type, empty encoding */ playerStats;
}

@property (nonatomic, readonly) NSArray *playerStats;
@property (nonatomic, readonly) NSDictionary *overallLatencies;
@property (nonatomic, readonly) double overallLatency;
@property (nonatomic, readonly) NSDictionary *overallAverageLatencies;
@property (nonatomic, readonly) double overallAverageLatency;
@property (nonatomic, readonly) double overallPacketLoss;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPlayerStats:(id)a0;

@end
