@class VCReportingHistogram;

@interface VCAggregatorVideoStream : VCAggregator {
    unsigned long long _rxVideoBitrateSum;
    unsigned long long _rxVideoBitrateCount;
    unsigned int _totalConnectionTime;
    double _totalVideoStallTime;
    double _maxVideoStallTime;
    unsigned long long _significantVideoStallCount;
    double _minRxFrameRate;
    unsigned long long _averageRxFramerateSum;
    VCReportingHistogram *_poorConnection;
    double _lastVideoDegradedTime;
    double _videoDegradedStartTime;
    BOOL _isVideoDegraded;
    double _videoDegradedMaxLength;
    double _videoDegradedTotalTime;
    double _poorConnectionDuration;
    unsigned int _poorConnectionCount;
    unsigned long long _videoDegradedTotalCounter;
    unsigned int _mediaStreamEndReason;
    long long _rtcpTimeoutCount;
}

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)reset;
- (void)processRTEvent:(id)a0;
- (id)aggregatedCallReports;
- (id)aggregatedSegmentReport:(int)a0;
- (id)aggregatedSessionReport;
- (id)dispatchedAggregatedSessionReport;
- (void)dispatchedProcessEventWithCategory:(unsigned short)a0 type:(unsigned short)a1 payload:(id)a2;
- (void)flushCurrentSegment;
- (void)processBitratesWithPayload:(id)a0;
- (void)processPoorConnection:(id)a0;
- (void)processVideoDegraded:(id)a0 time:(double)a1;
- (void)processVideoFrameRate:(id)a0;
- (void)processVideoStallTime:(id)a0;
- (void)updateTotalConnectionTime:(id)a0;

@end
