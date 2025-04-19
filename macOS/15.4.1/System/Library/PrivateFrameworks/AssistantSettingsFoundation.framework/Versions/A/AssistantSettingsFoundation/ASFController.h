@class AFPreferences, ASFApplicationSupplier;

@interface ASFController : NSObject

@property (readonly, nonatomic) AFPreferences *afPreferences;
@property (readonly, nonatomic) ASFApplicationSupplier *applicationSupplier;

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (BOOL)assistantIsEnabled;
- (long long)useDeviceSpeakerForTTS;
- (BOOL)alwaysShowRecognizedSpeech;
- (void)setAlwaysShowRecognizedSpeech:(BOOL)a0;
- (void)setAssistantIsEnabled:(BOOL)a0;
- (void)setSiriResponseShouldAlwaysPrint:(BOOL)a0;
- (void)setUseDeviceSpeakerForTTS:(long long)a0;
- (BOOL)siriResponseShouldAlwaysPrint;
- (BOOL)isVoiceTriggerEnabled;
- (void)setTypeToSiriEnabled:(BOOL)a0;
- (void)setAnnounceNotificationEnabled:(BOOL)a0;
- (id)getAllNotificationAppIds;
- (id)getAllNotificationApps;
- (BOOL)hardwareButtonAssistantIsEnabled;
- (BOOL)isAnnounceNotificationEnabled;
- (BOOL)isAnnounceNotificationEnabledForApp:(id)a0;
- (BOOL)isAnnounceNotificationEnabledForPlatform:(long long)a0;
- (BOOL)isCallHangUpEnabled;
- (BOOL)isLearningEnabledForApp:(id)a0;
- (BOOL)isShowSuggestionsEnabledInApp:(id)a0;
- (BOOL)isSpokenNotificationSkipTriggerlessReplyConfirmationEnabled;
- (void)setAnnounceNotificationEnabledForApp:(id)a0 annouceNotificationEnabled:(BOOL)a1;
- (void)setAnnounceNotificationEnabledForPlatform:(long long)a0 annouceNotificationEnabled:(BOOL)a1;
- (void)setCallHangUpEnabled:(BOOL)a0;
- (void)setHardwareButtonAssistant:(BOOL)a0;
- (void)setLearningForApp:(id)a0 enabled:(BOOL)a1;
- (void)setShowSuggestionsInApp:(id)a0 enabled:(BOOL)a1;
- (void)setSpokenNotificationSkipTriggerlessReplyConfirmationEnabled:(BOOL)a0;
- (id)siriSuggestionClients;
- (BOOL)typeToSiriIsEnabled;

@end
