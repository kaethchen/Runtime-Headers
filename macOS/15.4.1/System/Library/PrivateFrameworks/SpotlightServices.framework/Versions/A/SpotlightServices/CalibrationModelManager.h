@class calibration;

@interface CalibrationModelManager : NSObject

@property (retain, nonatomic) calibration *model;
@property (nonatomic) unsigned long long chunkSize;
@property (nonatomic) unsigned long long batchSize;
@property (readonly) BOOL loaded;

- (void).cxx_destruct;
- (void)clear;
- (BOOL)loadModel;
- (id)batchPredict:(id)a0 documentEmbeddings:(id)a1 queryID:(long long)a2;
- (id)convertEmbeddingToMLMultiArray:(id)a0 atIndex:(unsigned long long)a1 queryID:(long long)a2;
- (id)initWithChunkSize:(unsigned long long)a0;
- (id)initWithChunkSize:(unsigned long long)a0 batchSize:(unsigned long long)a1;
- (void)performBatchInferenceWithInputs:(id)a0 documentIndices:(id)a1 results:(id)a2 queryID:(long long)a3;
- (id)predict:(id)a0 documentEmbedding:(id)a1 queryID:(long long)a2;

@end
