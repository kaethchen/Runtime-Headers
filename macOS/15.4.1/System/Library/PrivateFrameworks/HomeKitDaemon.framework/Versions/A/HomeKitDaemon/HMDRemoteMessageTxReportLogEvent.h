@interface HMDRemoteMessageTxReportLogEvent : HMMLogEvent

@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) double latency;

+ (id)txReportForTransport:(int)a0 latency:(double)a1;

- (id)initWithTransport:(int)a0 latency:(double)a1;

@end
