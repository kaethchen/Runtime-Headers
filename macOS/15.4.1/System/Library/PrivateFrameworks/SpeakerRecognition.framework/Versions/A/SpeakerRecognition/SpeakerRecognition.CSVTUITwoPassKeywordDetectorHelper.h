@interface SpeakerRecognition.CSVTUITwoPassKeywordDetectorHelper : NSObject <SpeakerRecognition.CSVTUIKeywordDetectorSwift> {
    void /* unknown type, empty encoding */ keywordAnalyzer;
    void /* unknown type, empty encoding */ phraseDetector;
    void /* unknown type, empty encoding */ keywordThreshold;
    void /* unknown type, empty encoding */ audioBuffer;
    void /* unknown type, empty encoding */ extraSamplesAtStart;
    void /* unknown type, empty encoding */ analyzerTrailingSamples;
    void /* unknown type, empty encoding */ supportsMph;
}

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithSecureAsset:(id)a0 supportMph:(BOOL)a1;
- (id)analyzeWithBuffer:(id)a0;
- (id)initWithSecureAsset:(id)a0;
- (id)triggeredUtteranceWithVoiceTriggerEventInfo:(id)a0;

@end
