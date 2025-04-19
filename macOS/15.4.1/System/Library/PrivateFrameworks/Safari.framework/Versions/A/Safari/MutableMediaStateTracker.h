@class NSStatusItem;
@protocol MutableMediaStateTrackerDelegate, MutableMediaStateTrackerDataSource;

@interface MutableMediaStateTracker : NSObject {
    unsigned long long _mutableMediaState;
    NSStatusItem *_mediaCaptureStatusItem;
}

@property (weak, nonatomic) id<MutableMediaStateTrackerDataSource> dataSource;
@property (weak, nonatomic) id<MutableMediaStateTrackerDelegate> delegate;
@property (readonly, nonatomic) long long muteButtonStateForOverallMediaState;
@property (readonly, nonatomic, getter=isAnyPagePlayingAudio) BOOL anyPagePlayingAudio;
@property (readonly, nonatomic) BOOL doesAnyPageHaveMediaCaptureDevice;
@property (readonly, nonatomic) BOOL doesAnyPageHaveActiveMediaCaptureDevice;
@property (readonly, nonatomic) BOOL doesAnyPageHaveMutedMediaCaptureDevice;
@property (readonly, nonatomic) BOOL doesAnyPageHaveActiveCamera;
@property (readonly, nonatomic) BOOL doesAnyPageHaveActiveMicrophone;
@property (readonly, nonatomic, getter=isAnyPageUsingCameraOnly) BOOL anyPageUsingCameraOnly;
@property (readonly, nonatomic, getter=isAnyPageUsingMicrophoneOnly) BOOL anyPageUsingMicrophoneOnly;
@property (readonly, nonatomic) BOOL allPagesPlayingMutableMediaAreMuted;
@property (readonly, nonatomic, getter=isAnyPageUsingCamera) BOOL anyPageUsingCamera;
@property (readonly, nonatomic, getter=isAnyPageUsingMicrophone) BOOL anyPageUsingMicrophone;
@property (readonly, nonatomic, getter=isAnyPageUsingScreenCapture) BOOL anyPageUsingScreenCapture;

- (void).cxx_destruct;
- (void)_didRequestToFocusMediaSourceFromMenuItem:(id)a0;
- (id)_menuItemsForRequestingToFocusMediaSources:(id)a0;
- (void)updateOverallAudioState;
- (void)updateStatusItem;

@end
