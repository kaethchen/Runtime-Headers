@class NSNumber;

@interface MTRMediaPlaybackClusterStopPlaybackParams : MTRMediaPlaybackClusterStopParams

@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

@end
