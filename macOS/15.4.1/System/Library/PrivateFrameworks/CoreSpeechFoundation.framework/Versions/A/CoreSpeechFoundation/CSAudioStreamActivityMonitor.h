@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioStreamActivityMonitor : CSEventMonitor

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL hasNonVoiceTriggerStreamsActive;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)hasNonVoiceTriggerStreamsOrStreamHoldersActive;
- (void)notifyActiveStreamsChanged:(id)a0 streamHolders:(id)a1 streamId:(unsigned long long)a2;

@end
