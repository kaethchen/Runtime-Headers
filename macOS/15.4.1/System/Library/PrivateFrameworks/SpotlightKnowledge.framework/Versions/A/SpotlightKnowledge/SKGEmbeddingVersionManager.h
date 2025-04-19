@interface SKGEmbeddingVersionManager : NSObject

+ (id)currentEmbeddingVersionDataReturningError:(id *)a0;
+ (id)currentEmbeddingVersion;
+ (id)embeddingVersionDataFromTextVersion:(id)a0 returningError:(id *)a1;
+ (BOOL)embeddingsSupported;

@end
