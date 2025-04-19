@interface VoiceControlUI.VCUIPhoneticVocabularyRecordingManager : NSObject <AFDictationDelegate> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ recognizedPhonemesBlock;
    void /* unknown type, empty encoding */ didStart;
    void /* unknown type, empty encoding */ didEnd;
    void /* unknown type, empty encoding */ didError;
    void /* unknown type, empty encoding */ voiceControlLocaleIdentifier;
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ logger;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)dictationConnection:(id)a0 didRecognizeTranscriptionObjects:(id)a1 languageModel:(id)a2;
- (void)dictationConnection:(id)a0 speechRecognitionDidFail:(id)a1;
- (void)dictationConnection:(id)a0 speechRecordingDidFail:(id)a1;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)a0;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)a0;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)a0;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)a0;

@end
