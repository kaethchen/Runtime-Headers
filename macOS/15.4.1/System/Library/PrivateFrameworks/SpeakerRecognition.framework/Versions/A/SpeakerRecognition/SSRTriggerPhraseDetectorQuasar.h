@class _EARSyncSpeechRecognizer, NSString;

@interface SSRTriggerPhraseDetectorQuasar : NSObject {
    _EARSyncSpeechRecognizer *_syncRecognizer;
    NSString *_locale;
}

- (void).cxx_destruct;
- (void)reset;
- (id)endAudio;
- (id)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (id)initWithLocale:(id)a0 configPath:(id)a1 resourcePath:(id)a2;

@end
