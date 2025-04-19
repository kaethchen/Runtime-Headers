@class NSObject;
@protocol OS_dispatch_queue;

@interface CSVolumeMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    float _musicVolumeLevel;
    float _alarmVolumeLevel;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (float)alarmVolume;
- (float)musicVolume;
- (void)musicVolumeWithCompletion:(id /* block */)a0;
- (BOOL)_supportAVSystemVolumeFetch;
- (void)fetchVolumeFromAVSystemControllerForAudioCategory:(id)a0;
- (void)startObservingSystemVolumes;
- (void)systemControllerDied:(id)a0;
- (void)systemVolumeDidChange:(id)a0;

@end
