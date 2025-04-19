@class NSObject, NSSet, ASACoreAudio, CMContinuityCaptureAudioInputProvider;
@protocol OS_dispatch_queue;

@interface CMContinuityCaptureAudioRouteManager : NSObject {
    CMContinuityCaptureAudioInputProvider *_provider;
    ASACoreAudio *_coreAudioObject;
    NSSet *_magicContinuityCaptureMicDeviceUIDs;
    BOOL _continuityCaptureAudioRouteIsEligibleAsDefault;
    BOOL _shouldRestoreDefaultBuiltInMic;
    CMContinuityCaptureAudioRouteManager *_weakSelf;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)_currentDefaultInputDeviceIsBuiltInMic;
- (BOOL)_currentDefaultInputDeviceIsContinuityCaptureMic;
- (void)_refreshContinuityCaptureDevice:(id)a0;
- (void)_switchDefaultInputDeviceIfApplicable;
- (BOOL)_switchDefaultInputDeviceToBuiltInMic;
- (BOOL)_switchDefaultInputDeviceToContinuityCaptureMic;
- (void)updateMagicContinuityCaptureMicDeviceUIDs:(id)a0;

@end
