@class MADTextEmbeddingThreshold, NSMutableArray;

@interface VCPFreeFormSearch : NSObject {
    float *_inputData;
    float *_videoEmbedings;
    int _numVideos;
    NSMutableArray *_fileNames;
    NSMutableArray *_fileIndices;
    NSMutableArray *_timeRanges;
    NSMutableArray *_embeddings;
    int _embeddingDim;
    MADTextEmbeddingThreshold *_textEmbeddingThreshold;
}

+ (float)getHighSimilarityThreshold;
+ (float)getMaxSimilarityDiffFor1UP;
+ (float)getMinSimilarity;
+ (float)getMinSimilarityHighRecall;
+ (BOOL)getSearchTesting;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (int)loadEmbeddings:(id)a0;
- (id)searchForQuery:(id)a0 matchingScoreOnly:(BOOL)a1 topK:(int)a2;

@end
