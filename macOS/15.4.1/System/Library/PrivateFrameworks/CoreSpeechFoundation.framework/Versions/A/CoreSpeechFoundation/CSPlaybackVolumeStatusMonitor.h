@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSPlaybackVolumeStatusMonitor : CSEventMonitor <CSVolumeMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _volumeStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)CSVolumeMonitor:(id)a0 systemVolumeDidChange:(id)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (unsigned long long)playbackVolumeStatus;
- (void)_fetchAndUpdatePlaybackVolumeStatus;
- (void)_updatePlaybackVolumeStatusWithNotification:(id)a0;
- (unsigned long long)_volumeStatusFromLevel:(float)a0;

@end
