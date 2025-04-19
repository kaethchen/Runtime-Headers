@class NSString;

@interface _PXVideoPlaybackCPAnalyticsEndpoint : NSObject <PXVideoPlaybackReporterEndpoint> {
    long long _signpost;
}

@property (copy, nonatomic) NSString *loggingIdentifier;

- (void).cxx_destruct;
- (void)sendPayload:(struct _PXVideoPlaybackReporterPayload { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)playbackRequested;

@end
