@interface TextToSpeech.SSMLVoiceTagger : NSObject {
    void /* unknown type, empty encoding */ currentVoiceName;
    void /* unknown type, empty encoding */ currentLanguage;
    void /* unknown type, empty encoding */ leafPiles;
    void /* unknown type, empty encoding */ voiceTagRanges;
}

- (id)init;
- (void).cxx_destruct;
- (id)tagSSML:(id)a0;

@end
