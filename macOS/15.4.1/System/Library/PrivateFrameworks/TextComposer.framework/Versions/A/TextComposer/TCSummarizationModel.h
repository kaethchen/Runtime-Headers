@class NLTagger;

@interface TCSummarizationModel : NSObject {
    NLTagger *_tagger;
    void *_embeddingModel;
    struct MontrealNeuralNetwork { } *_decoderModel;
    unsigned long long _sequenceLength;
    unsigned long long _maxDecoderSteps;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)_decoderPredictions:(float *)a0;
- (id)_tokensForString:(id)a0;
- (id)initWithModelPath:(id)a0 options:(id)a1;
- (id)summarizationForString:(id)a0;
- (BOOL)useANEWithOptions:(id)a0;

@end
