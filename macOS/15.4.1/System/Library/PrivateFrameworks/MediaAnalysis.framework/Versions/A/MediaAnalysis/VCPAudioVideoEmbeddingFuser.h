@class NSArray, NSMutableArray, SNLanguageAlignedAVFuser;

@interface VCPAudioVideoEmbeddingFuser : NSObject {
    NSArray *_audioEmbeddingResults;
    NSArray *_videoEmbeddingResults;
    NSMutableArray *_results;
    SNLanguageAlignedAVFuser *_avFuser;
    int _embeddingVersion;
    int _embeddingDim;
}

+ (id)sharedFuser:(id)a0 version:(int)a1;
+ (BOOL)supportFusionForVersion:(int)a0;

- (void).cxx_destruct;
- (id)results;
- (int)fuse:(id /* block */)a0;
- (id)initWithEmbeddingVersion:(unsigned long long)a0;
- (int)loadAudioEmbeddingResults:(id)a0 andVideoEmbeddingResults:(id)a1;

@end
