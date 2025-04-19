@interface ConversationKit.StagingAreaViewController : PlatformViewController <CNKFaceTimeInCallControlsEffectsPresentingProtocol, CNKStagingAreaViewControllerProtocol> {
    void /* unknown type, empty encoding */ videoDeviceController;
    void /* unknown type, empty encoding */ wantsVideo;
    void /* unknown type, empty encoding */ countdownController;
    void /* unknown type, empty encoding */ conversationController;
    void /* unknown type, empty encoding */ inCallControlsDismissTimer;
    void /* unknown type, empty encoding */ viewContent;
    void /* unknown type, empty encoding */ isHandlingMouseEnteredEvent;
    void /* unknown type, empty encoding */ gridLayoutStyle;
}

@property (nonatomic, readonly) BOOL isPresentingEffectsBrowser;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ call;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)toggleAudioMute;
- (void)toggleVideoMute;
- (id)initWithActiveCall:(id)a0;
- (id)makeMultiwayViewControllerWithCall:(id)a0;
- (void)openMessagesConversation;
- (void)resetEffectsState;

@end
