@class NSString, AVPlayerItem, NSObject;
@protocol OS_dispatch_queue;

@interface PXVideoPlaybackReporterAVPlayerItemEndpoint : NSObject <PXVideoPlaybackReporterEndpoint>

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *reportingQueue;
@property (class, readonly, nonatomic) BOOL isReportingAvailable;

@property (readonly, nonatomic) AVPlayerItem *playerItem;
@property (copy, nonatomic) NSString *loggingIdentifier;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)sendPayload:(struct _PXVideoPlaybackReporterPayload { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)initWithPlayerItem:(id)a0;

@end
