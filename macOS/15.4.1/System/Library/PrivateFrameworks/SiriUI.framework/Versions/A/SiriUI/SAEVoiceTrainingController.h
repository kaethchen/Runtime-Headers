@interface SAEVoiceTrainingController : OBTemplateContainerViewController <VTUITrainingViewControllerDelegate>

@property (nonatomic, weak) void /* unknown type, empty encoding */ trainingController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)abort;
- (id)initWithFirstButtonTitle:(id)a0 secondButtonTitle:(id)a1 linkButtonTitle:(id)a2;
- (id)initWithTemplateView:(id)a0 firstButtonTitle:(id)a1 secondButtonTitle:(id)a2 linkButtonTitle:(id)a3;
- (id)initWithTrainingViewController:(id)a0;
- (void)trainingViewController:(id)a0 finishedTraining:(BOOL)a1;
- (void)trainingViewController:(id)a0 setVoiceTriggerUserEnabled:(BOOL)a1;
- (id)vtHostingView;

@end
