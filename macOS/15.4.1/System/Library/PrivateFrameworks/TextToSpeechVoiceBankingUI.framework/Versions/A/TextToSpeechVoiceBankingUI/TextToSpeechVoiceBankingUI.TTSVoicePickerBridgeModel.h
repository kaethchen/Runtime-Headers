@class NSString, NSDictionary;

@interface TextToSpeechVoiceBankingUI.TTSVoicePickerBridgeModel : NSObject {
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ voicePicker;
    void /* unknown type, empty encoding */ _selectedVoiceId;
    void /* unknown type, empty encoding */ _languageVoiceMap;
    void /* unknown type, empty encoding */ _pickerLanguage;
}

@property (nonatomic, copy) NSString *selectedVoiceId;
@property (nonatomic, copy) NSDictionary *languageVoiceMap;
@property (nonatomic, copy) NSString *pickerLanguage;

- (id)init;
- (void).cxx_destruct;
- (id)initWithVoicePicker:(id)a0;

@end
