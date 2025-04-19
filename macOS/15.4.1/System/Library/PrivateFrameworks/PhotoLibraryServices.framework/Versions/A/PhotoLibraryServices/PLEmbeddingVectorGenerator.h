@interface PLEmbeddingVectorGenerator : NSObject

+ (id)CLIPEmbeddingVectorForAsset:(id)a0 error:(out id *)a1;
+ (id)_TextCLIPEmbeddingVectorForString:(id)a0 error:(id *)a1;

- (id)embeddingVectorForString:(id)a0 embeddingType:(unsigned long long)a1 error:(id *)a2;

@end
