@class SAEVoiceTrainingReadyController, NSString, NSTextField, NSArray, SAEVoiceTrainingIntroController, VTUITrainingViewController, SAEVoiceTrainingController, NSLayoutConstraint, NSImageView, NSButton;

@interface SiriUIVoiceTriggerController : NSViewController <VTUITrainingViewControllerDelegate, SiriUISAEVoiceTrainingControllerDelegate> {
    id /* block */ _completionBlock;
    NSImageView *_orbView;
    NSTextField *_titleLabel;
    NSTextField *_subtitleLabel;
    NSButton *_continueButton;
    NSButton *_skipButton;
    long long _state;
    VTUITrainingViewController *_trainingViewController;
    BOOL _bottomButtonConstraintEnabled;
    NSLayoutConstraint *_singleSkipButtonConstraint;
    NSLayoutConstraint *_multipleSkipButtonConstraint;
    NSArray *_remoteDarwinDeviceIdentifiersForTraining;
    BOOL _trainingForRemoteDarwinVoiceTrigger;
}

@property (retain, nonatomic) SAEVoiceTrainingIntroController *saeVoiceTrainingIntroController;
@property (retain, nonatomic) SAEVoiceTrainingController *saeVoiceTrainingController;
@property (retain, nonatomic) SAEVoiceTrainingReadyController *saeVoiceTrainingReadyController;
@property (nonatomic) BOOL saeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)runWithCompletion:(id /* block */)a0;
- (void)cancel:(id)a0;
- (void)loadView;
- (void)viewWillAppear;
- (void)setButtonConstraints:(id)a0;
- (void)finishTraining:(id)a0;
- (void)_transitionToDone;
- (void)_transitionToIntro;
- (void)_transitionToTraining;
- (void)_updateButtonConstraints:(id)a0;
- (void)_updateViewForClamshellMode:(BOOL)a0;
- (void)alternateButtonPressed;
- (void)continueButtonPressed;
- (void)didCloseLid:(id)a0;
- (void)didOpenLid:(id)a0;
- (void)finisheButtonPressed;
- (void)offerUserActionButtonsAtBottomOfView;
- (void)setTrainingForRemoteDarwinVoiceTrigger:(BOOL)a0 remoteDarwinDeviceIdentifiersForTraining:(id)a1;
- (void)startTraining:(id)a0;
- (void)trainingViewController:(id)a0 finishedTraining:(BOOL)a1;
- (void)trainingViewController:(id)a0 setVoiceTriggerUserEnabled:(BOOL)a1;
- (id)vtHostingView;

@end
