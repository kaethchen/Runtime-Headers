@class NSTimer;

@interface SiriUIAudioManager : NSObject {
    long long _lastSiriEvent;
}

@property BOOL isAudioPaused;
@property (retain) NSTimer *bluetoothAudioResumeTimer;
@property (retain) NSTimer *audioUnduckTimer;
@property (nonatomic) BOOL switchedBluetoothDeviceToSCO;
@property (nonatomic) unsigned int bluetoothOutputDevice;
@property (nonatomic) float savedBluetoothOutputVolume;
@property (nonatomic) unsigned int savedBluetoothOutputVolumeDevice;
@property long long lastSiriEvent;
@property BOOL isSiriUIVisible;
@property BOOL isAcousticIDRecording;

+ (id)sharedManager;
+ (unsigned int)currentBluetoothOutputDevice;
+ (BOOL)isAudioDucked;
+ (BOOL)isDoAPSupportedForBluetoothAudioDevice:(unsigned int)a0;
+ (BOOL)isFanDuckingEnabled;
+ (BOOL)isMediaPaused;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)handleSiriStoppedListeningEvent;
- (void)handleSiriStartedListeningEvent;
- (void)beginAudioManagementSession;
- (void)bluetoothAudioDidChangeNotification:(id)a0;
- (void)endAudioManagementSession;
- (void)handleSiriStartedSpeakingEvent;
- (void)handleSiriStoppedSpeakingEvent;
- (void)prepareBluetoothForSiriSessionAudioRecording;
- (void)restoreBluetoothVolumeOutputForDevice:(unsigned int)a0;
- (void)resumeAudio;
- (void)resumeAudioWithBluetoothTimer;
- (BOOL)setBluetoothAudioFormat:(unsigned int)a0 forDevice:(unsigned int)a1;
- (void)siriEventWillChangeToEvent:(long long)a0;
- (void)siriIdleAndQuietNotificationFired;
- (void)siriListeningNotificationFired;
- (void)siriStartedSpeakingNotificationFired;
- (void)siriStoppedListeningFired;
- (void)siriStoppedSpeakingNotificationFired;
- (void)siriSuccessNotificationFired;
- (void)siriThinkingNotificationFired;
- (void)siriUIAppeared;
- (void)siriUIDisappeared;
- (void)stashBluetoothVolumeForOutputDevice:(unsigned int)a0;
- (void)unduckAudioFromTimer;

@end
