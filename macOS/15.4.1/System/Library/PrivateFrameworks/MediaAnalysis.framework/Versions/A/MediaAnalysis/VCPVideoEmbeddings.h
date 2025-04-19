@class NSArray, NSMutableArray, NSNumber;

@interface VCPVideoEmbeddings : NSObject {
    NSMutableArray *_videoEmbeddings;
    NSMutableArray *_summarizedEmbeddingIds;
    float *_averageEmbedding;
    float *_currentEmbedding;
    NSNumber *_version;
}

@property (readonly, nonatomic) long long embeddingType;
@property (readonly, nonatomic) unsigned long long embeddingSize;
@property (readonly, nonatomic) NSArray *embeddingsArray;

- (void)dealloc;
- (void).cxx_destruct;
- (int)addEmbeddings:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)convertToFloat16:(id)a0;
- (id)getEmbeddingsForRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 useFP16:(BOOL)a1;
- (id)initWithEmbeddingType:(long long)a0 version:(id)a1;
- (id)videoEmbeddingsFp16;

@end
