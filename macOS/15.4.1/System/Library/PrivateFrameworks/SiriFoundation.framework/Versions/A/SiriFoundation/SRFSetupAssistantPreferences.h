@interface SRFSetupAssistantPreferences : NSObject

+ (id)sharedPreferences;

- (void)setLanguageCode:(id)a0;
- (void)setSiriEnabled:(BOOL)a0;
- (BOOL)shouldSkipBuddy;
- (BOOL)shouldOfferSiriForSetupState:(BOOL)a0;
- (BOOL)shouldPresentDisclosureForCompactVoiceTriggerUsingSiriState:(BOOL)a0;
- (BOOL)suitableMicrophoneExists;

@end
