@class NSString;

@interface SRFPreferences : NSObject

@property (nonatomic, getter=assistantIsEnabled) BOOL assistantIsEnabled;
@property (readonly) NSString *languageCode;
@property (nonatomic, getter=isTypeToSiriEnabled) BOOL typeToSiriEnabled;
@property (nonatomic, getter=isLaunchAgentEnabled) BOOL launchAgentEnabled;
@property (nonatomic) BOOL voiceTriggerUserEnabled;

+ (id)sharedPreferences;

- (void)setVoiceTriggerEnabled:(BOOL)a0;
- (BOOL)voiceTriggerEnabled;
- (void)discardAllSATEnrollment;
- (void)discardSATEnrollmentForLanguageCode:(id)a0;
- (BOOL)isSATEnrolledForLanguageCode:(id)a0;
- (BOOL)isVoiceTriggerAvailable;
- (void)_killall:(id)a0;
- (void)isSATEnrolledForLanguageCode:(id)a0 completion:(id /* block */)a1;
- (BOOL)isVoiceTriggerEnabledOnRemoteDarwin;
- (BOOL)remoteDarwinEverConnected;
- (void)setCompactVoiceTriggerDisclosureHasBeenSeen;
- (void)setCompactVoiceTriggerPhraseType:(unsigned long long)a0;
- (void)setVoiceTriggerEnabledOnRemoteDarwin:(BOOL)a0;
- (void)setVoiceTriggerUserEnabled:(BOOL)a0 deviceType:(long long)a1;

@end
