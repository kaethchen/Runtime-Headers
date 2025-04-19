@class NSString, NSDictionary, NSDate;

@interface SRFUserDefaultsController : NSUserDefaultsController

@property (getter=isStatusMenuVisible) BOOL statusMenuVisible;
@property (readonly) NSString *effectiveMicrophoneIdentifier;
@property BOOL preferBluetoothMicrophones;
@property (readonly) NSString *preferredBluetoothMicrophoneIdentifier;
@property (readonly) BOOL isEffectiveMicrophoneInternal;
@property (readonly) BOOL isDeviceInClamshellMode;
@property NSDictionary *keyboardShortcutDictionary;
@property NSDictionary *mostRecentCustomizedKeyboardShorcutDictionary;
@property (nonatomic, getter=isTypeToSiriEnabled) BOOL typeToSiriEnabled;
@property (nonatomic, getter=isLockscreenEnabled) BOOL lockscreenEnabled;
@property (nonatomic, getter=isVoiceTriggerUserEnabled) BOOL voiceTriggerUserEnabled;
@property (nonatomic) double autoDismissDelay;
@property (readonly, nonatomic) double autoDismissTextToSpeechTimeout;
@property (nonatomic, getter=isContinuousSpellCheckingEnabled) BOOL continuousSpellCheckingEnabled;
@property (getter=isGrammarCheckingEnabled) BOOL grammarCheckingEnabled;
@property (getter=isSuggestionsEnabled) BOOL suggestionsEnabled;
@property (retain) NSDate *dyingWishForInvocationDate;
@property (readonly) NSString *modeOverride;
@property (readonly, nonatomic) BOOL designModeEnabled;
@property (nonatomic) BOOL ignoreMicRequirement;
@property (readonly, nonatomic) BOOL debugModeEnabled;
@property (readonly, nonatomic) BOOL showReportConcernButton;
@property (readonly, nonatomic) NSDictionary *userHotKeyHoldCommandSpace;
@property (readonly, nonatomic) NSDictionary *userHotKeyHoldOptionSpace;
@property (readonly, nonatomic) NSDictionary *userHotKeyFunctionSpace;
@property (readonly, nonatomic) NSDictionary *userHotKeyLeftCommandTwice;
@property (readonly, nonatomic) NSDictionary *userHotKeyRightCommandTwice;
@property (readonly, nonatomic) NSDictionary *userHotKeyEitherCommandTwice;
@property (readonly, nonatomic) NSDictionary *userHotKeyDisabledNonSAE;
@property (readonly, nonatomic) NSDictionary *userHotKeyDisabledSAE;
@property (nonatomic) BOOL userSignedUpForGM;
@property (nonatomic) BOOL confirmSiriInvokedViaEitherCmdTwice;

+ (id)sharedUserDefaultsController;
+ (BOOL)_canAccessUserDefaults;

- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)_isInternal;
- (void)_notifyStatusMenuVisibleDidChange;
- (BOOL)autoDismissHidesCloseButton;
- (BOOL)forceSATEnrolled;
- (BOOL)forceSelectRandomVoiceOption;
- (BOOL)forceVoiceTriggerAvailable;
- (BOOL)forceVoiceTriggerDeviceTypeDistribution:(long long *)a0;
- (id)keyboardShortcutDictionaryWithSAEEnabled:(BOOL)a0;
- (id)migrateCustomizedKeyboardShortcutIfNeeded:(id)a0;
- (id)mostRecentCustomizedKeyboardShorcutDictionaryWithSAEEnabled:(BOOL)a0;
- (void)notifyInvocationSuppressionNoLongerHonored;
- (void)notifyUserDidSwitchOnVoiceTrigger;
- (void)notifyVoiceTriggerSuppressionNoLongerHonored;
- (id)preSAEKeyboardShortcutDictionary;
- (id)saeKeyboardShortcutDictionary;
- (void)setKeyboardShortcutDictionary:(id)a0 saeEnabled:(BOOL)a1;
- (void)setMostRecentCustomizedKeyboardShorcutDictionary:(id)a0 saeEnabled:(BOOL)a1;
- (void)setPreSAEKeyboardShortcutDictionary:(id)a0;
- (void)setSaeKeyboardShortcutDictionary:(id)a0;
- (void)setSkipPausingMedia:(BOOL)a0;
- (BOOL)shouldSkipPausingMedia;
- (void)updateStatusMenuVisibilityForEnablementChangeToState:(BOOL)a0;
- (id)userHotkeyDisabledNonSAE;
- (id)userHotkeyDisabledSAE;

@end
