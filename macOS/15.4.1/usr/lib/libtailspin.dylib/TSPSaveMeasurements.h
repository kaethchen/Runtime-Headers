@class NSString, NSMutableDictionary;

@interface TSPSaveMeasurements : NSObject {
    unsigned long long _saveStandardChunksStartTimestampMCT;
}

@property (readonly, nonatomic) unsigned long long request_id;
@property (readonly, nonatomic) NSMutableDictionary *timeSpentByPhases;
@property (readonly, nonatomic) double tailspinDurationSecs;
@property (readonly, nonatomic) double ratioTimePeriodCovered;
@property (readonly, nonatomic) double requestProcessingLatencySecs;
@property (retain, nonatomic) NSString *prevExecName;
@property (nonatomic) BOOL didClientRequestEndTimestamp;
@property (nonatomic) BOOL didPrevClientSaveOverlapWithEndTimestamp;
@property (readonly, nonatomic) double lostTimePeriodAtStartSecs;
@property (nonatomic) long long fileSizeBytes;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_startRecordingTimeForPhase:(const char *)a0;
- (void)_stopRecordingTimeForPhase:(const char *)a0;
- (void)recordLostTimePeriodAtStart:(unsigned long long)a0;
- (void)recordRatioTimePeriodCovered:(double)a0;
- (void)recordRequestProcessingLatencySecsWithStartMCT:(unsigned long long)a0 endMCT:(unsigned long long)a1;
- (void)recordTailspinDurationWithStartMCT:(unsigned long long)a0 endMCT:(unsigned long long)a1;
- (void)recordTimeForSaveStandardChunksWithoutPostProcessing:(unsigned long long)a0;
- (void)startRecordingTimeForAugmentLoggingPhase:(BOOL)a0 collectOSLog:(BOOL)a1 scrubData:(BOOL)a2;
- (void)startRecordingTimeForAugmentPhase:(const char *)a0 pid:(int)a1 originalFd:(int)a2 dupFd:(int)a3;
- (void)startRecordingTimeForAugmentSymbolicatePhase;
- (void)startRecordingTimeForDumpRequestPhase:(const char *)a0 pid:(int)a1;
- (void)startRecordingTimeForLibktracePostProcessing;
- (void)startRecordingTimeForSaveStandardChunksPhase:(const char *)a0 pid:(int)a1;
- (void)startRecordingTimeForTailspinPostProcessing;
- (void)stopRecordingTimeForAugmentLoggingPhase:(BOOL)a0;
- (void)stopRecordingTimeForAugmentPhase:(BOOL)a0 finalSizeBytes:(long long)a1;
- (void)stopRecordingTimeForAugmentSymbolicatePhase;
- (void)stopRecordingTimeForDumpRequestPhase:(id)a0;
- (void)stopRecordingTimeForLibktracePostProcessing;
- (void)stopRecordingTimeForSaveStandardChunksPhase:(BOOL)a0;
- (void)stopRecordingTimeForTailspinPostProcessing;

@end
