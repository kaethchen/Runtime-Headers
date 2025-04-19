@class NSDictionary, NSMutableDictionary;

@interface VideoRanker : NSObject {
    NSDictionary *_corpus;
    int _corpusSize;
    float _b;
    float _k1;
    float _similarityThreshold;
    int _topK;
    int _df;
    int _idf;
    float _avgDocumentLength;
    NSMutableDictionary *_tfs;
    NSMutableDictionary *_maxSegments;
}

- (void).cxx_destruct;
- (int)fit;
- (id)initWithCorpus:(id)a0;
- (id)rankingScores;
- (int)termAndDocumentFrequencies;

@end
