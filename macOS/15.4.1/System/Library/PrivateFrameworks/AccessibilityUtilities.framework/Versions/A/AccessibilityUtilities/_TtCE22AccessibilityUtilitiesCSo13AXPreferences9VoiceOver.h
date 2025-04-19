@class NSString, AXVoiceOverVoiceRotorItem;

@interface _TtCE22AccessibilityUtilitiesCSo13AXPreferences9VoiceOver : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_resolver;
    void /* unknown type, empty encoding */ _defaultVoiceSelectionsByLanguage;
    void /* unknown type, empty encoding */ _voiceRotors;
    void /* unknown type, empty encoding */ __oldDomainRotors;
    void /* unknown type, empty encoding */ _currentRotorVoiceIdentifier;
    void /* unknown type, empty encoding */ _largeCursorEnabled;
    void /* unknown type, empty encoding */ _contentDescriptionLevel;
    void /* unknown type, empty encoding */ _useDigitalCrownNavigation;
    void /* unknown type, empty encoding */ _imageCaptionsEnabled;
    void /* unknown type, empty encoding */ _useTVToggleStyleNavigation;
    void /* unknown type, empty encoding */ _continuousPathKeyboardStartTimeout;
    void /* unknown type, empty encoding */ _hearingAidRoutingEnabled;
    void /* unknown type, empty encoding */ _useSiriSounds;
    void /* unknown type, empty encoding */ _braillePanningAutoTurnsReadingContent;
    void /* unknown type, empty encoding */ _brailleDisplayOutputMode;
    void /* unknown type, empty encoding */ _brailleDisplayInputMode;
    void /* unknown type, empty encoding */ _brailleGesturesInputMode;
    void /* unknown type, empty encoding */ _brailleDisplaySyncInputOutputTables;
    void /* unknown type, empty encoding */ _brailleDisplayInputTableIdentifier;
    void /* unknown type, empty encoding */ _brailleDisplayOutputTableIdentifier;
    void /* unknown type, empty encoding */ _brailleGesturesInputTableIdentifier;
    void /* unknown type, empty encoding */ _brailleGesturesActivationGestureEnabled;
    void /* unknown type, empty encoding */ _brailleGesturesSoundOption;
    void /* unknown type, empty encoding */ _brailleGesturesUsesHapticFeedback;
    void /* unknown type, empty encoding */ _brailleGesturesUsesTypingSoundFeedback;
    void /* unknown type, empty encoding */ _brailleGesturesDisplayEnteredText;
    void /* unknown type, empty encoding */ _brailleGesturesAutoActivateOnTextFields;
    void /* unknown type, empty encoding */ _perkinsKeyboardInputEnabled;
    void /* unknown type, empty encoding */ _perkinsChordKeyboardInputEnabled;
    void /* unknown type, empty encoding */ _defaultPunctuationGroup;
    void /* unknown type, empty encoding */ _activities;
    void /* unknown type, empty encoding */ _selectedActivityId;
    void /* unknown type, empty encoding */ _languageDetectionEnabled;
    void /* unknown type, empty encoding */ _pitchChangeEnabled;
    void /* unknown type, empty encoding */ _selectedLanguage;
    void /* unknown type, empty encoding */ _speakUpEnabled;
}

- (id)init;
- (void).cxx_destruct;
- (void)effectiveSpeakingRateWithCompletionHandler:(void (^)(float))a0;
- (void)effectiveSpeakingRateWithCurrentRotor:(AXVoiceOverVoiceRotorItem *)a0 completionHandler:(void (^)(float))a1;
- (void)effectiveSpeakingVolumeWithCompletionHandler:(void (^)(float))a0;
- (void)effectiveSpeakingVolumeWithCurrentRotor:(AXVoiceOverVoiceRotorItem *)a0 completionHandler:(void (^)(float))a1;
- (void)setEffectiveSpeakingRate:(float)a0 completionHandler:(void (^)(void))a1;
- (void)setEffectiveSpeakingRateWithCurrentRotor:(AXVoiceOverVoiceRotorItem *)a0 value:(float)a1 completionHandler:(void (^)(void))a2;
- (void)setEffectiveSpeakingVolume:(float)a0 completionHandler:(void (^)(void))a1;
- (void)setEffectiveSpeakingVolumeWithCurrentRotor:(AXVoiceOverVoiceRotorItem *)a0 value:(float)a1 completionHandler:(void (^)(void))a2;
- (void)setWithVoiceId:(NSString *)a0 forLanguage:(NSString *)a1 completionHandler:(void (^)(void))a2;
- (void)setWithVoiceId:(id)a0 forLanguage:(id)a1 rate:(float)a2 volume:(float)a3 pitch:(float)a4;
- (void)speechVoiceIdentifierForLanguage:(NSString *)a0 completionHandler:(void (^)(NSString *))a1;

@end
