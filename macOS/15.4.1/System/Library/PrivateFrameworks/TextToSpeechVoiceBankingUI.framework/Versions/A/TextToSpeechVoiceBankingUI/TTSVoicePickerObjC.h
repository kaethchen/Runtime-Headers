@class NSString, NSDictionary, _TtC26TextToSpeechVoiceBankingUI25TTSVoicePickerSwiftBridge, _TtC26TextToSpeechVoiceBankingUI25TTSVoicePickerBridgeModel;

@interface TTSVoicePickerObjC : NSView

@property (retain, nonatomic) _TtC26TextToSpeechVoiceBankingUI25TTSVoicePickerSwiftBridge *bridge;
@property (retain, nonatomic) _TtC26TextToSpeechVoiceBankingUI25TTSVoicePickerBridgeModel *model;
@property (nonatomic) BOOL initialValuesSet;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSString *speechSource;
@property (retain, nonatomic) NSDictionary *extraOptions;
@property (nonatomic) BOOL shouldDisplayNeural;
@property (copy, nonatomic) id /* block */ voiceFilterBlock;
@property (retain, nonatomic) NSString *selectedVoiceIdentifier;
@property (retain, nonatomic) NSDictionary *selectedVoiceLanguageMap;
@property (copy, nonatomic) id /* block */ setSelectedVoicePreferencesCallback;
@property (copy, nonatomic) id /* block */ getSelectedVoicePreferencesCallback;
@property (copy, nonatomic) id /* block */ setSelectedVoiceLanguageMapCallback;
@property (copy, nonatomic) id /* block */ getSelectedVoiceLanguageMapCallback;

- (void).cxx_destruct;
- (void)update;
- (void)reloadView;

@end
