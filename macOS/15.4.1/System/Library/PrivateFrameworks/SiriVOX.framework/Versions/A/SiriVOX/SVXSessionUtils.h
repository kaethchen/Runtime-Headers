@interface SVXSessionUtils : NSObject

- (id)getLanguageCodeWithAllowsFallback:(BOOL)a0 preferences:(id)a1;
- (BOOL)isSpeechRecordingAllowedWithActivationContext:(id)a0;
- (BOOL)isVoiceTriggerWithActivationContext:(id)a0;

@end
