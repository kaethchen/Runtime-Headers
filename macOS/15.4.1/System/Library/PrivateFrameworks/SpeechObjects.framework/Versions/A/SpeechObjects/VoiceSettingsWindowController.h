@class NSImageView, NSString, TTSVoicePickerObjC, NSSlider, NSSpeechSynthesizer, NSButton, SOVoicePopUpButton;

@interface VoiceSettingsWindowController : NSWindowController <NSSpeechSynthesizerDelegate> {
    NSButton *_useCustomRateCheckbox;
    NSButton *_useCustomVolumeCheckbox;
    NSButton *_startStopSpeakingButton;
    NSSlider *_rateSlider;
    NSSlider *_volumeSlider;
    NSImageView *_volumeQuietIcon;
    NSImageView *_volumeLoudIcon;
    SOVoicePopUpButton *_voicePopupMenu;
    TTSVoicePickerObjC *_voicePicker;
    NSSpeechSynthesizer *_speechSynthesizer;
    id _modalDelegate;
    NSString *_playDisplayString;
    NSString *_currentVoiceId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)finalize;
- (void)speechSynthesizer:(id)a0 didFinishSpeaking:(BOOL)a1;
- (void)closeWindow;
- (void)cancelVoiceSettings:(id)a0;
- (float)percentOfNormalFromSlider:(id)a0;
- (void)playStopVoiceSettings:(id)a0;
- (void)rateCheckboxClicked:(id)a0;
- (void)rateSliderChanged:(id)a0;
- (void)saveVoiceSettings:(id)a0;
- (void)setUpWindowWithVoiceSettings:(id)a0 modalDelegate:(id)a1;
- (void)setValueOfSlider:(id)a0 usingPercentOfNormal:(float)a1;
- (void)setValueOfSlider:(id)a0 usingWordsPerMinute:(float)a1;
- (void)voicePopupMenuChanged:(id)a0;
- (id)voiceSettingsFromWindow;
- (void)volumeCheckboxClicked:(id)a0;
- (void)volumeSliderChanged:(id)a0;
- (float)wordsPerMinuteFromSlider:(id)a0;

@end
