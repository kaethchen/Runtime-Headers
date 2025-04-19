@class NSMutableArray, CSSyncKeywordAnalyzerQuasar;

@interface CSSingleCheckerPhraseDetector : NSObject

@property (retain, nonatomic) CSSyncKeywordAnalyzerQuasar *syncKeywordAnalyzerQuasar;
@property (retain, nonatomic) NSMutableArray *phraseDetectorInfos;
@property (retain, nonatomic) NSMutableArray *phraseResult;
@property (nonatomic) unsigned long long processedSampleCount;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)setConfig:(id)a0;
- (id)getAnalyzedResultFromAudioChunk:(id)a0;
- (id)getAnalyzedResultFromFlushedAudio;
- (id)phraseDetectorInfoFromPhId:(unsigned long long)a0;
- (void)setActiveChannel:(unsigned long long)a0;
- (id)_getResultWithPhId:(unsigned long long)a0 phraseDetectorInfo:(id)a1 quasarResult:(id)a2;
- (id)_phraseDetectorResultFromQuasarResult:(id)a0;
- (id)_resultCopyWithKeywordDetectorDecision:(unsigned long long)a0 phraseResult:(id)a1;

@end
