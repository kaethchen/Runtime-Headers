@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerRejectReporter : NSObject <CSSiriClientBehaviorMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_checkForRejectWithScore:(id)a0 threshold:(id)a1 eventType:(unsigned long long)a2 deltaTime:(double)a3;
- (id)_constructVTRejectEventFrom:(id)a0 withMhid:(id)a1;
- (void)_deleteAllEventsFromBiome;
- (void)_emitEvent:(id)a0;
- (id)_extractMetaDataEventFromEntry:(id)a0 currentTime:(double)a1;
- (id)_readEventFromBiome;
- (id)constructSELFEventFromEvents:(id)a0 withMhid:(id)a1;
- (void)reportVTRejectIfNeededForMHId:(id)a0;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3 withEventUUID:(id)a4;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;

@end
