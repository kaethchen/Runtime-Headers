@class NSArray, NSMutableArray;

@interface VCPEmbeddingSummarizationAnalyzer : NSObject {
    NSArray *_videoEmbeddings;
    unsigned long long _embeddingSize;
    NSMutableArray *_summarizedEmbeddingIds;
}

- (void).cxx_destruct;
- (int)findSummarizedEmbeddings:(id)a0;
- (id)summarizedEmbeddings;

@end
