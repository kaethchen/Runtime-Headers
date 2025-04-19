@interface RPFeatureFlagUtility : NSObject {
    BOOL _stereoAudioControlCenter;
    BOOL _systemBannerEnabled;
    BOOL _screenRecordingCameraPip;
    BOOL _screenCaptureAlertEnabled;
    BOOL _coreGraphicsCaptureAPINotificiationEnabled;
    BOOL _largePresenterOverlayFullHDPlus;
    BOOL _replayKitScreenRecordingHEVC;
    BOOL _screenCaptureKitRecordingHDR;
}

@property (readonly, nonatomic) BOOL stereoAudioControlCenter;
@property (readonly, nonatomic) BOOL screenRecordingCameraPip;
@property (readonly, nonatomic) BOOL systemBannerEnabled;
@property (readonly, nonatomic) BOOL alwaysOnDisplayEnabled;
@property (readonly, nonatomic) BOOL screenCaptureAlertEnabled;
@property (readonly, nonatomic) BOOL independentWindowAlwaysHDEnabled;
@property (readonly, nonatomic) BOOL coreGraphicsCaptureAPINotificiationEnabled;
@property (readonly, nonatomic) BOOL coreGraphicsProxyingEnabled;
@property (readonly, nonatomic) BOOL largePresenterOverlayFullHDPlus;
@property (readonly, nonatomic) BOOL replayKitScreenRecordingHEVC;
@property (readonly, nonatomic) BOOL screenCaptureKitRecordingHDR;
@property (readonly, nonatomic) BOOL audioDSPAutomaticMicModeEnabled;

+ (id)sharedInstance;

- (id)init;

@end
