@class NSString, AVAudioSession;

@interface AVVCSessionManager : NSObject {
    BOOL mShouldDuckOthers;
    BOOL mIsMiniDuckingEnabled;
    BOOL mShouldEnableMiniDucking;
    BOOL mShouldDisableMiniDucking;
    BOOL mSessionNeedsVolumeControl;
    BOOL mSessionNeedsRoutingControl;
    BOOL mSessionOutputIsWirelessSplitter;
    BOOL mIsOtherAudioPlaying;
    BOOL mRouteHasDoAPSupport;
    BOOL mOutputSupportsSWVolume;
    BOOL mDeviceIsIOSAccessory;
    BOOL mDeviceIsOlderWatch;
    unsigned int mSessionActivationOptions;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mSessionManagerLock;
    unsigned long long mPreviousHardwareControlFlags;
    long long mPreviousActivationMode;
    NSString *mPreviousActivationDeviceUID;
    NSString *mPreviousSessionCategory;
    NSString *mPreviousSessionMode;
    unsigned long long mPreviousSessionCategoryOptions;
    int mPreviousIOBufferFrameSize;
    BOOL mEnableSmartRoutingConsideration;
}

@property (retain, nonatomic) AVAudioSession *audioSession;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSession:(id)a0;
- (BOOL)isCurrentInputBuiltInMic;
- (int)setupOneTimeSessionSettingsForClient:(long long)a0;

@end
