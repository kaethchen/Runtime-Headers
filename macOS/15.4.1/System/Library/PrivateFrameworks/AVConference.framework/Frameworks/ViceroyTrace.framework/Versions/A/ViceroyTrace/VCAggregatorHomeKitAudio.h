@class VCReportingHistogram;

@interface VCAggregatorHomeKitAudio : VCAggregatorAudioStream {
    unsigned int _previousStreamDirection;
    VCReportingHistogram *_streamDirectionDurations;
    double _lastStreamDirectionSwitchTime;
    unsigned int _mediaStreamEndReason;
    long long _rtcpTimeoutCount;
}

@property int streamDirection;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)reset;
- (id)dispatchedAggregatedSessionReport;
- (void)dispatchedProcessEventWithCategory:(unsigned short)a0 type:(unsigned short)a1 payload:(id)a2;
- (void)updateStreamDirection:(unsigned int)a0 time:(double)a1;

@end
