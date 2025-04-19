@class SOMicrophonePopUpButton, NSString, NSView, NSPopUpButton, NSButton, SOSRLanguagePopUpButton;

@interface SOCommandPreferencesViewController : NSViewController <NSTextFieldDelegate> {
    BOOL _awoken;
    NSButton *_commandAndControlCheckbox;
    SOSRLanguagePopUpButton *_dictationLanguagePopUpButton;
    SOMicrophonePopUpButton *_microphonePopUpButton;
    NSPopUpButton *_continuousOverlayPopUpButton;
    NSButton *_dictationCommandsButton;
    NSButton *_vocabularyButton;
    NSButton *_playSoundUponRecognitionCheckbox;
    NSButton *_showHintsCheckbox;
    NSView *_constrainedWithSuperview;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultViewController;

- (void)dealloc;
- (void)awakeFromNib;
- (void)hide;
- (void)show;
- (void)didUpdateMicrophonePopUpButton:(id)a0;
- (void)enableCommandAndControlPressed:(id)a0;
- (void)exportCommands:(id)a0;
- (void)importCommands:(id)a0;
- (void)_buildContinuousOverlayPopupMenu;
- (void)_buildOfflineLanguagePopupMenu;
- (void)_enableOfflineDictationAndStartDownloadOfLanguage:(id)a0;
- (void)_setupAccessibilityIdentifiers;
- (void)_updateSettings:(id)a0;
- (void)continuousOverlaySelected:(id)a0;
- (void)customizeDictationCommandsPressed:(id)a0;
- (void)customizeVocabularyPressed:(id)a0;
- (void)deleteAllCustomCommands:(id)a0;
- (void)deleteAllVocabularyForCurrentLocale:(id)a0;
- (void)exportVocabulary:(id)a0;
- (void)importVocabulary:(id)a0;
- (void)languageSelected:(id)a0;
- (void)microphoneSelected:(id)a0;
- (void)openDictationPreferences:(id)a0;
- (void)playSoundUponRecognitionPressed:(id)a0;
- (void)showHintsPressed:(id)a0;
- (void)showInMenuPressed:(id)a0;

@end
