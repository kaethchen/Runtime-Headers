@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSVoiceTriggerStatistics : NSObject <CSVoiceTriggerDelegate> {
    unsigned long long _triggerCount;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _consecutiveVTRejects;
    unsigned long long _firstPassTriggerCount;
    unsigned long long _consecutiveFalseFirstPassTriggersPerHour;
    NSObject<OS_dispatch_source> *_hourPowerTimer;
    NSMutableArray *_vtEstimationStatistics;
    NSMutableDictionary *_vtDailyMetadata;
    BOOL _vtEstimationStatisticsAreStale;
    BOOL _vtDailyMetadataIsStale;
}

@property unsigned long long consecutivePHSRejects;
@property double lastPHSReject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (int)_convertToFirstPassSource:(id)a0;
- (void)clearFalseFirstPassTriggersPerHour;
- (void)clearFirstPassTriggerCount;
- (void)clearTriggerCount;
- (unsigned long long)firstPassTriggerCount;
- (double)getLastPHSRejectTime;
- (unsigned long long)getPHSRejectCount;
- (unsigned long long)getVTRejectCount;
- (id)getVoiceTriggerDailyMetadata;
- (id)getVoiceTriggerStatistics;
- (void)increaseFalseFirstPassTriggersPerHour;
- (void)increaseTriggerCount;
- (void)incrementFirstPassTriggerCount;
- (void)incrementPHSRejectCount;
- (void)incrementVTRejectCount;
- (void)resetPHSRejectCount;
- (void)resetVTEstimationStatistics;
- (unsigned long long)triggerCount;
- (void)updateVTEstimationStatistics:(id)a0;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (void)voiceTriggerDidRejected:(id)a0 deviceId:(id)a1;

@end
