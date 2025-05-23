@class _EARSpeechRecognizer, NSString, NSDictionary, NSArray, _EARSpeechRecognitionAudioBuffer, NSObject, NSMutableArray;
@protocol CSKeywordAnalyzerQuasarScoreDelegate, OS_dispatch_queue;

@interface CSKeywordAnalyzerQuasar : NSObject <_EARSpeechRecognitionResultStream> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_previousUtteranceTokens;
    NSArray *_triggerTokenList;
    _EARSpeechRecognizer *_recognizer;
    _EARSpeechRecognitionAudioBuffer *_recognizerBuffer;
    BOOL _useKeywordSpotting;
}

@property (retain, nonatomic) NSDictionary *ctcKwdToPhIdMap;
@property (readonly, nonatomic) double triggerConfidence;
@property (nonatomic) unsigned long long activeChannel;
@property (weak, nonatomic) id<CSKeywordAnalyzerQuasarScoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (void)endAudio;
- (id)initWithConfigPath:(id)a0 triggerTokens:(id)a1 useKeywordSpotting:(BOOL)a2;
- (void)processAudioChunk:(id)a0;
- (void)runRecognition;
- (void)speechRecognizer:(id)a0 didFinishRecognitionWithError:(id)a1;
- (void)speechRecognizer:(id)a0 didRecognizeFinalResults:(id)a1;
- (void)speechRecognizer:(id)a0 didRecognizePartialResult:(id)a1;
- (double)_getConfidence:(id)a0;
- (id)_phIdToCtcScoreMap;
- (void)_recognizeWavData:(const short *)a0 length:(int)a1;

@end
