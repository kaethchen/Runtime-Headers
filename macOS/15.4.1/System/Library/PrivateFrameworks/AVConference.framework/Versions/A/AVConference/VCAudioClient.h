@class AVAudioDevice, VCAudioIO, VCAudioManager;

@interface VCAudioClient : NSObject {
    unsigned int _state;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stateMutex;
    double _lastAudioSessionStart;
    BOOL _isOnHold;
    struct VCAudioClientSettings { BOOL isValid; BOOL enableAudioPreWarming; int operatingMode; int deviceRole; BOOL audioClockDeviceEnabled; BOOL networkUplinkClockUsesBaseband; } _selectedSettings;
    struct VCAudioClientSettings { BOOL isValid; BOOL enableAudioPreWarming; int operatingMode; int deviceRole; BOOL audioClockDeviceEnabled; BOOL networkUplinkClockUsesBaseband; } _requestedSettings;
    unsigned int _audioSessionId;
    unsigned int _spatialAudioRegistered;
    void **_audioSession;
    VCAudioManager *_audioManager;
    BOOL _isMixingVoiceWithMediaEnabled;
}

@property (retain, nonatomic) AVAudioDevice *inputDevice;
@property (retain, nonatomic) AVAudioDevice *outputDevice;
@property (readonly, nonatomic) int processId;
@property (nonatomic) BOOL isMuted;
@property (retain, nonatomic) VCAudioIO *audioIO;
@property (nonatomic) BOOL isMutedTalkerNotificationRegistered;
@property (nonatomic) BOOL isMutedStateChangeHandlerRegistered;
@property (nonatomic, getter=isMixingVoiceWithMediaEnabled) BOOL mixingVoiceWithMediaEnabled;
@property (nonatomic, getter=isFollowSystemInputEnabled) BOOL followSystemInput;
@property (nonatomic, getter=isFollowSystemOutputEnabled) BOOL followSystemOutput;

- (void)dealloc;
- (void)lock;
- (void)unlock;
- (void)setAudioSessionProperties:(id)a0;
- (BOOL)startWithError:(id *)a0;
- (BOOL)stopWithError:(id *)a0;
- (void)didResumeAudioIO:(id)a0;
- (void)didSuspendAudioIO:(id)a0;
- (id)getCurrentAudioDeviceWithType:(BOOL)a0;
- (id)initWithProcessId:(int)a0;
- (BOOL)resetAudioSessionOutputPortOverride:(id *)a0;
- (void)serverDidDie;
- (BOOL)setCurrentAudioDevice:(id)a0 type:(BOOL)a1;
- (void)startAudioIOWithCompletionHandler:(id /* block */)a0;
- (BOOL)startAudioSessionWithError:(id *)a0;
- (void)stopAudioIOWithCompletionHandler:(id /* block */)a0;
- (BOOL)stopAudioSessionWithError:(id *)a0;

@end
