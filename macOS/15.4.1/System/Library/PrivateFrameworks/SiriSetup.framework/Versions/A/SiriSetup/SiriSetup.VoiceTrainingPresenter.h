@interface SiriSetup.VoiceTrainingPresenter : NSObject <SCDADelegate, SRSTrainingManagerDelegate> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ dataSourceWriter;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ viewStyle;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ page;
    void /* unknown type, empty encoding */ preEnrollmentVoiceTriggerState;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ AVVCRetryCount;
    void /* unknown type, empty encoding */ badMicRetryCount;
    void /* unknown type, empty encoding */ isCanceled;
    void /* unknown type, empty encoding */ voiceProfileManager;
    void /* unknown type, empty encoding */ trainingState;
    void /* unknown type, empty encoding */ trainingManager;
    void /* unknown type, empty encoding */ trainingSessionId;
    void /* unknown type, empty encoding */ scdaCoordinator;
    void /* unknown type, empty encoding */ lastPlayedTryAgain;
}

- (id)init;
- (void).cxx_destruct;
- (void)audioLevelDidChange:(float)a0;

@end
