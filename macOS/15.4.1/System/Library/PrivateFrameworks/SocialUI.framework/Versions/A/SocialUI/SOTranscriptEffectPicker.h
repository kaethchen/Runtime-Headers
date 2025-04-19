@class NSTextField, NSString, SOBalloonEffectPickerViewController, SOEffectPickerUnsentMessage, NSButton, SOFullScreenEffectPickerViewController;
@protocol SOTranscriptEffectPickerDelegate;

@interface SOTranscriptEffectPicker : NSViewController <SOEffectPickerViewControllerDelegate>

@property (weak, nonatomic) NSButton *balloonButton;
@property (weak, nonatomic) NSButton *momentButton;
@property (weak, nonatomic) NSButton *cancelButton;
@property (weak, nonatomic) NSButton *sendButton;
@property (weak, nonatomic) NSTextField *titleView;
@property (retain, nonatomic) SOFullScreenEffectPickerViewController *momentsViewController;
@property (retain, nonatomic) SOBalloonEffectPickerViewController *balloonsViewController;
@property (retain) NSString *chosenEffect;
@property (retain) SOEffectPickerUnsentMessage *unsentMessage;
@property (weak) id<SOTranscriptEffectPickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillLayout;
- (void)setBalloonMode:(BOOL)a0;
- (void)bubbleButtonWasPressed:(id)a0;
- (void)effectPicker:(id)a0 setSendEnabled:(BOOL)a1;
- (void)effectPickerViewController:(id)a0 didChooseEffect:(id)a1;
- (void)effectPickerViewController:(id)a0 didPreviewEffect:(id)a1;
- (void)effectPickerViewControllerWasCancelled:(id)a0;
- (id)initWithUnsentMessage:(id)a0;
- (void)momentsButtonWasPressed:(id)a0;
- (void)showViewController:(id)a0 hideViewController:(id)a1;
- (void)userCancelledPicker:(id)a0;
- (void)userChoseSendPicker:(id)a0;

@end
