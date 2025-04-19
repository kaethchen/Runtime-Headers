@class NSString;

@interface HeadphoneManager.HearingRecord : NSObject {
    void /* unknown type, empty encoding */ deviceRemoteSendState;
    void /* unknown type, empty encoding */ _amplification;
    void /* unknown type, empty encoding */ _balance;
    void /* unknown type, empty encoding */ _beamFormer;
    void /* unknown type, empty encoding */ _noiseSuppression;
    void /* unknown type, empty encoding */ _tone;
    void /* unknown type, empty encoding */ _pmeVoiceEnabled;
    void /* unknown type, empty encoding */ _pmeMediaEnabled;
    void /* unknown type, empty encoding */ _mediaAssistEnabled;
    void /* unknown type, empty encoding */ _hearingAssistEnabled;
    void /* unknown type, empty encoding */ _swipeGainEnabled;
    void /* unknown type, empty encoding */ _hearingAidEnabled;
    void /* unknown type, empty encoding */ _listeningModeOffAllowed;
    void /* unknown type, empty encoding */ _bluetoothAddress;
    void /* unknown type, empty encoding */ _bluetoothUUID;
    void /* unknown type, empty encoding */ _hideOffModeCapability;
    void /* unknown type, empty encoding */ _hearingAssistCapability;
    void /* unknown type, empty encoding */ _hearingAssistEnrolled;
    void /* unknown type, empty encoding */ _hearingAssistRegionStatus;
    void /* unknown type, empty encoding */ _hearingProtectionRegionStatus;
    void /* unknown type, empty encoding */ _hearingProtectionCapability;
    void /* unknown type, empty encoding */ _hearingProtectionEnabled;
    void /* unknown type, empty encoding */ _hearingTestRegionStatus;
    void /* unknown type, empty encoding */ _earLossArrayLeft;
    void /* unknown type, empty encoding */ _earLossArrayRight;
    void /* unknown type, empty encoding */ _hearingProtectionOcclusionResult;
    void /* unknown type, empty encoding */ _validAudiograms;
    void /* unknown type, empty encoding */ _invalidAudiograms;
    void /* unknown type, empty encoding */ deviceRecord;
}

@property (nonatomic) float amplification;
@property (nonatomic) float balance;
@property (nonatomic) float beamFormer;
@property (nonatomic) float noiseSuppression;
@property (nonatomic) float tone;
@property (nonatomic) char pmeVoiceEnabled;
@property (nonatomic) char pmeMediaEnabled;
@property (nonatomic) char mediaAssistEnabled;
@property (nonatomic) char hearingAssistEnabled;
@property (nonatomic) char swipeGainEnabled;
@property (nonatomic) char hearingAidEnabled;
@property (nonatomic) char listeningModeOffAllowed;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
