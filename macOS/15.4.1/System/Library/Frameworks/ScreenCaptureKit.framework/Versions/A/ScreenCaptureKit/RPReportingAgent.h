@class NSString, RPThermalPressure, NSMutableDictionary, NSDate;

@interface RPReportingAgent : NSObject <RPThermalPressureDelegate> {
    RPThermalPressure *_thermalPressureMonitor;
    NSMutableDictionary *_thermalResults;
    NSDate *_thermalLevelIntervalStartTime;
}

@property (retain, nonatomic) NSString *serviceName;
@property (nonatomic) NSDate *captureStartTime;
@property (nonatomic) struct CGSize { double width; double height; } videoCaptureSize;
@property (nonatomic) long long videoCaptureRate;
@property (nonatomic) long long videoFrameCount;
@property (nonatomic) long long appAudioFrameCount;
@property (nonatomic) long long micFrameCount;
@property (nonatomic) BOOL frontCameraUsed;
@property (nonatomic) BOOL backCameraUsed;
@property (nonatomic) unsigned long long recordedFileSize;
@property (nonatomic) long long endReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportSCSessionErroredWithEventType:(unsigned short)a0 endReason:(id)a1 streamID:(id)a2 payload:(id)a3;
+ (void)reportSessionEnded:(unsigned short)a0 endReason:(id)a1 withServiceName:(id)a2 clientBundleId:(id)a3;
+ (void)sendReportEventWithType:(unsigned short)a0 dictionary:(id)a1 withServiceName:(id)a2 clientBundleId:(id)a3 sessionID:(id)a4;
+ (void)sendReportSessionEnded:(unsigned short)a0 endReason:(id)a1 withServiceName:(id)a2 clientBundleId:(id)a3 sessionID:(id)a4 payload:(id)a5;

- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0;
- (void)addToThermalResultsWithLevel:(long long)a0;
- (id)collectSummaryEventMetrics;
- (void)reportEventWithType:(unsigned short)a0 dictionary:(id)a1 clientBundleId:(id)a2;
- (void)reportSCEventWithType:(unsigned short)a0 dictionary:(id)a1 streamID:(id)a2;
- (void)resetReportingMetrics;
- (void)resetThermalResults;
- (id)thermalDescription;
- (void)thermalPressureDidChangeWithLevel:(long long)a0;

@end
