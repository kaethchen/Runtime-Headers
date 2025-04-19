@interface AXOnboardingVoiceOverBridge : NSObject

+ (float)getVolume;
+ (void)setSpeakingRate:(float)a0;
+ (BOOL)voiceOverEnabled;
+ (BOOL)deviceHasHomeButton;
+ (BOOL)isInBuddy;
+ (float)getSpeakingRate;
+ (void)setVOTutorialStartedFromSplash:(BOOL)a0;
+ (void)connectToVO;
+ (void)enableVoiceOver:(BOOL)a0;
+ (void)enableVoiceOverHints:(BOOL)a0;
+ (id)getRecognizedGesture;
+ (id)getRotorName;
+ (id)getVoice;
+ (id)getVoiceOverEnabledDefaultName;
+ (id)getVoiceOverHintsEnabledDefaultName;
+ (void)initializeSCRKeyboard;
+ (BOOL)isVoiceOverHintsEnabled;
+ (id)keyboardShortcutSpelledOutForCommand:(id)a0;
+ (id)keyboardShortcutStringForCommand:(id)a0;
+ (void)screenReaderSendCommandsToAllow:(id)a0;
+ (void)screenReaderSendCommandsToIgnore:(id)a0;
+ (id)setRecognizedGesture;
+ (void)setVOSplashScreenEnabled:(BOOL)a0;
+ (void)setVOTutorialUsageConfirmed:(BOOL)a0;
+ (id)sfSymbolsForCommand:(id)a0;
+ (void)synthesizerSpeakString:(id)a0;
+ (void)synthesizerStopSpeaking;
+ (BOOL)triggerEventCommand:(id)a0;
+ (BOOL)voSplashScreenEnabled;
+ (BOOL)voTutorialStartedFromSplash;
+ (BOOL)voTutorialUsageConfirmed;

@end
