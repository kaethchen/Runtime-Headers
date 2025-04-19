@class NSString, TTSPVSettingsWrapper;
@protocol TTSPerVoiceSettingsViewControllerDelegate;

@interface TTSPerVoiceSettingsViewController : NSViewController

@property (retain, nonatomic) TTSPVSettingsWrapper *wrapper;
@property (retain, nonatomic) NSString *speechSource;
@property (weak, nonatomic) id<TTSPerVoiceSettingsViewControllerDelegate> dataDelegate;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setSpeechSource:(id)a0;
- (id)speechSource;
- (void)reloadView;

@end
