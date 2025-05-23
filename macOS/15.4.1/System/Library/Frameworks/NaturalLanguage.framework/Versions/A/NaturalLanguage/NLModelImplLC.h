@class NSDictionary, NLModelConfiguration, NSData;

@interface NLModelImplLC : NLModelImpl {
    const void *_maxEntModel;
    NLModelConfiguration *_configuration;
    NSDictionary *_labelMap;
    NSDictionary *_vocabularyMap;
    NSDictionary *_documentFrequencyMap;
    unsigned long long _numberOfTrainingInstances;
    NSData *_modelData;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)configuration;
- (id)modelData;
- (id)predictedLabelHypothesesForString:(id)a0 maximumCount:(unsigned long long)a1;
- (id)documentFrequencyMap;
- (id)initWithModelData:(id)a0 configuration:(id)a1 labelMap:(id)a2 vocabularyMap:(id)a3 documentFrequencyMap:(id)a4 customEmbeddingData:(id)a5 trainingInfo:(id)a6 error:(id *)a7;
- (id)initWithModelTrainer:(id)a0 error:(id *)a1;
- (id)labelMap;
- (unsigned long long)numberOfTrainingInstances;
- (id)predictedLabelForString:(id)a0;
- (id)predictedLabelHypothesesForTokens:(id)a0 maximumCount:(unsigned long long)a1;
- (id)predictedLabelsForTokens:(id)a0;
- (id)vocabularyMap;

@end
