@interface SpeakerRecognition.CSVTUIKeywordDetectorHelper : NSObject <SpeakerRecognition.CSVTUIKeywordDetectorSwift> {
    void /* unknown type, empty encoding */ keywordAnalyzer;
    void /* unknown type, empty encoding */ lastKeywordScore;
    void /* unknown type, empty encoding */ keywordThreshold;
    void /* unknown type, empty encoding */ audioBuffer;
    void /* unknown type, empty encoding */ extraSamplesAtStart;
}

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithAsset:(id)a0;
- (id)analyzeWithBuffer:(id)a0;
- (id)initWithSecureAsset:(id)a0;
- (id)triggeredUtteranceWithVoiceTriggerEventInfo:(id)a0;

@end
