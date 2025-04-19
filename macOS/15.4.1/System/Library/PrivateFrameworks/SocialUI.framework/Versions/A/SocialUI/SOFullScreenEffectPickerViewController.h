@class IMFullScreenEffectManager;

@interface SOFullScreenEffectPickerViewController : SOEffectPickerViewController

@property (retain, nonatomic) IMFullScreenEffectManager *fullScreenEffectManager;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)previewFullScreenMoment:(id)a0;

@end
