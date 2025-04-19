@class AVMetricErrorEvent;

@interface AVMetricPlayerItemPlaybackSummaryEvent : AVMetricEvent {
    AVMetricErrorEvent *_errorEvent;
    long long _recoverableErrorCount;
    long long _stallCount;
    long long _variantSwitchCount;
    long long _playbackDuration;
    long long _mediaResourceRequestCount;
    double _timeSpentRecoveringFromStall;
    double _timeSpentInInitialStartup;
    long long _timeWeightedAverageBitrate;
    long long _timeWeightedPeakBitrate;
}

@property (readonly) AVMetricErrorEvent *errorEvent;
@property (readonly) long long recoverableErrorCount;
@property (readonly) long long stallCount;
@property (readonly) long long variantSwitchCount;
@property (readonly) long long playbackDuration;
@property (readonly) long long mediaResourceRequestCount;
@property (readonly) double timeSpentRecoveringFromStall;
@property (readonly) double timeSpentInInitialStartup;
@property (readonly) long long timeWeightedAverageBitrate;
@property (readonly) long long timeWeightedPeakBitrate;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0 mediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 sessionID:(id)a2 errorEvent:(id)a3 recoverableErrorCount:(long long)a4 stallCount:(long long)a5 variantSwitchCount:(long long)a6 playbackDuration:(long long)a7 mediaResourceRequestCount:(long long)a8 timeSpentRecoveringFromStall:(double)a9 timeSpentInInitialStartup:(double)a10 timeWeightedAverageBitrate:(long long)a11 timeWeightedPeakBitrate:(long long)a12;

@end
