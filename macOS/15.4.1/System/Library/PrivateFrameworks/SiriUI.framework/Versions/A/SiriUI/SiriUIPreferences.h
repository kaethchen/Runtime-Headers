@interface SiriUIPreferences : NSObject

+ (id)sharedPreferences;

- (void)setLanguageCode:(id)a0;
- (BOOL)shouldSkipBuddy;
- (BOOL)suitableMicrophoneExists;
- (void)setupAssistantSetSiriEnabled:(BOOL)a0;

@end
