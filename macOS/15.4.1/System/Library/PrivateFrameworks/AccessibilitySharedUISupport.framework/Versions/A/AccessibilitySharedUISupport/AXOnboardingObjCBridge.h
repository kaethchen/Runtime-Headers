@interface AXOnboardingObjCBridge : NSObject

@property (nonatomic) BOOL _isListening;

+ (id)sharedInstance;

- (BOOL)heySiriEnabled;
- (BOOL)isSameLangaugeFromLocaleIdentifier:(id)a0 secondLocaleIdentifier:(id)a1;
- (void)disableSoftwareKeyboard;
- (void)enableSoftwareKeyboard;
- (void)enableVoiceControl:(BOOL)a0;
- (id)getVoiceControlEnabledDefaultName;
- (id)localizedVoiceControlCommand:(id)a0;
- (void)sandboxInit;
- (BOOL)shouldShowCapitalizationPage;
- (id)systemBackground;
- (void)toggleVoiceControl;
- (BOOL)voiceControlEnabled;

@end
