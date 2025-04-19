@class NSArray;

@interface AVMetricPlayerItemInitialLikelyToKeepUpEvent : AVMetricPlayerItemLikelyToKeepUpEvent {
    NSArray *_playlistRequestEvents;
    NSArray *_mediaSegmentRequestEvents;
    NSArray *_contentKeyRequestEvents;
}

@property (readonly) NSArray *playlistRequestEvents;
@property (readonly) NSArray *mediaSegmentRequestEvents;
@property (readonly) NSArray *contentKeyRequestEvents;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0 mediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 sessionID:(id)a2 variant:(id)a3 timeTaken:(double)a4 loadedTimeRanges:(id)a5 playlistRequestEvents:(id)a6 mediaSegmentRequestEvents:(id)a7 contentKeyRequestEvents:(id)a8;

@end
