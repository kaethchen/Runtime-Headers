@interface SNLanguageAlignedAVFuser : NSObject {
    void /* unknown type, empty encoding */ fuserVersion;
    void /* unknown type, empty encoding */ model;
}

+ (BOOL)supportsFusionOfVisionEmbeddingVersion:(long long)a0 audioEmbeddingVersion:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)fuseVisionEmbedding:(id)a0 audioEmbedding:(id)a1 error:(id *)a2;
- (id)initWithVisionEmbeddingVersion:(long long)a0 audioEmbeddingVersion:(long long)a1 error:(id *)a2;

@end
