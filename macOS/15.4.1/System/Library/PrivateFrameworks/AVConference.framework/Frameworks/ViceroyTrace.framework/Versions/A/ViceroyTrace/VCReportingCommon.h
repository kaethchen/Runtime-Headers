@class VCDurationHistogram, VCReportingHistogram;

@interface VCReportingCommon : NSObject {
    BOOL _isUplinkRTXTelemetryAvailable;
    unsigned long long _retransmissionRequestPacketCount;
    unsigned long long _retransmissionFulfilledPacketCount;
    unsigned long long _retransmissionCacheHitCount;
    unsigned long long _retransmissionCacheMissCount;
    unsigned long long _retransmissionNACKReceivedCount;
    unsigned long long _retransmissionRequestRepeatedCount;
    unsigned short _retransmissionRequestRepeatedMaxCount;
    VCReportingHistogram *_retransmissionResponseTime;
    VCReportingHistogram *_retransmissionLateTime;
    VCReportingHistogram *_retransmissionActualMediaBitrate;
    VCReportingHistogram *_retransmissionBitrate;
    int _thermalNotificationToken;
}

@property (readonly) VCDurationHistogram *thermalDurations;
@property (nonatomic) int currentThermalLevel;

+ (int)aggregatorThermalLevelWithThermalLevel:(unsigned char)a0;

- (void)dealloc;
- (id)init;
- (void)reportTestName:(id)a0;
- (id)dispatchedAggregatedReportCommon;
- (id)getUplinkRTXelemetryWithDuration:(unsigned long long)a0;
- (void)setUplinkRTXTelemetryWithRealTimeStreamData:(id)a0;

@end
