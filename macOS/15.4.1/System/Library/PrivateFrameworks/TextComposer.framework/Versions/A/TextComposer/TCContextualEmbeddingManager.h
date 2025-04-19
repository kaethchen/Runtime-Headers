@class NLContextualEmbedding, NSMutableDictionary;

@interface TCContextualEmbeddingManager : NSObject {
    NLContextualEmbedding *_currentEmbedding;
    NSMutableDictionary *_compileCacheForIdentifier;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)contextualEmbeddingWithIdentifier:(id)a0;
- (id)batchDataFromTokenVectorEmbeddingForStrings:(id)a0 language:(id)a1 identifier:(id)a2 tokenDictionaries:(id *)a3 error:(id *)a4;
- (BOOL)compileEmbeddingForIdentifier:(id)a0 error:(id *)a1;
- (id)dataFromSentenceVectorEmbeddingForString:(id)a0 language:(id)a1 identifier:(id)a2 error:(id *)a3;
- (id)dataFromTokenVectorEmbeddingForString:(id)a0 language:(id)a1 identifier:(id)a2 tokenDictionaries:(id *)a3 error:(id *)a4;
- (BOOL)enableE5;
- (BOOL)loadTokenVectorEmbeddingForIdentifier:(id)a0 error:(id *)a1;
- (BOOL)shouldAbortCompileEmbeddingForIdentifier:(id)a0;

@end
