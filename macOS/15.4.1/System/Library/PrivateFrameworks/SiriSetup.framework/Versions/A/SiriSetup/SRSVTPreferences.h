@class NSNumber, VTPreferences;

@interface SRSVTPreferences : NSObject {
    NSNumber *compactVoiceTriggerEnabledOverride;
    VTPreferences *_preferences;
}

- (id)init;
- (void).cxx_destruct;
- (void)setVoiceTriggerEnabled:(BOOL)a0;
- (BOOL)voiceTriggerEnabled;
- (BOOL)isCompactVoiceTriggerAvailableForLanguageCode:(id)a0;
- (id)localizedCompactTriggerPhraseForLanguageCode:(id)a0;
- (id)localizedTriggerPhraseForLanguageCode:(id)a0;
- (BOOL)compactVoiceTriggerEnabled:(id)a0;
- (void)overrideCompactVoiceTriggerEnabled:(BOOL)a0;

@end
