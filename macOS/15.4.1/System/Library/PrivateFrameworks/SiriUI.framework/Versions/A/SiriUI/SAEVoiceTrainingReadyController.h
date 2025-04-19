@interface SAEVoiceTrainingReadyController : OBTemplateContainerViewController <SiriUI.LoopedVideoPlayerViewDelegate> {
    void /* unknown type, empty encoding */ videoPlayerView;
    void /* unknown type, empty encoding */ appearanceObservation;
    void /* unknown type, empty encoding */ showCompactTriggerDisclosure;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;
- (void)finished;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (id)initWithFirstButtonTitle:(id)a0 secondButtonTitle:(id)a1 linkButtonTitle:(id)a2;
- (id)initWithTemplateView:(id)a0 firstButtonTitle:(id)a1 secondButtonTitle:(id)a2 linkButtonTitle:(id)a3;
- (void)videoDidReload;

@end
