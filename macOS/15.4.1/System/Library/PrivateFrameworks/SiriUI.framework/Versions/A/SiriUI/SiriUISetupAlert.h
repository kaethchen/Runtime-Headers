@class SOSRSimpleLanguagePopUpButton, NSView, NSString, NSArray, NSButton;

@interface SiriUISetupAlert : NSAlert

@property BOOL showsPrivacyInformation;
@property BOOL showsLanguageSelection;
@property (retain) NSView *ambiguousLanguageAccessoryView;
@property (retain) NSView *unsupportedLanguageAccessoryView;
@property (weak) NSButton *languageOneButton;
@property (weak) NSButton *languageTwoButton;
@property (weak) SOSRSimpleLanguagePopUpButton *languagePopUp;
@property (retain) NSString *messageTextVTStringKey;
@property (retain) NSString *informativeTextVTStringKey;
@property (retain) NSArray *allSiriLanguageCodes;
@property (retain) NSArray *supportedSiriLanguageCodes;
@property (retain) NSString *bestSupportedLanguageCode;
@property (readonly) NSString *siriLanguageCode;

- (void).cxx_destruct;
- (id)_init;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (long long)runModal;
- (void)_alertWillAppear;
- (void)_setAlertTextFromVoiceTriggerKeys;
- (id)buttonTitleForAmbiguousLanguage:(id)a0;
- (void)clickedSiriPrivacy:(id)a0;
- (id)initDisableAskSiri;
- (id)initEnableAskSiri;
- (id)initEnableHeySiriAudioDevice:(BOOL)a0 withAskSiri:(BOOL)a1;
- (id)initEnableHeySiriBuiltInWithAskSiri:(BOOL)a0;
- (void)languagePopUpSelectionChanged:(id)a0;
- (void)languageRadioButtonPressed:(id)a0;

@end
