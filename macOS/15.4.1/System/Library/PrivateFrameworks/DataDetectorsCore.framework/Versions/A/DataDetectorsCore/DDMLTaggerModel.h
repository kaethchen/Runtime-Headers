@class NSArray, NSDictionary, NSError, NSLocale;

@interface DDMLTaggerModel : NSObject

@property (readonly) struct MontrealNeuralNetwork { } *taggerModel;
@property (readonly) NSLocale *embeddingLocale;
@property (readonly) NSError *error;
@property (readonly) NSDictionary *tokenLabelMap;
@property (readonly) NSArray *supportedTypes;

+ (id)_buildTokenToLabelMap:(id)a0 supportedTypes:(id *)a1;
+ (id)currentTaggerModel;
+ (void)setCurrentTaggerModel:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithEmbeddingLocale:(id)a0 modelDictionary:(id)a1 baseURL:(id)a2;
- (id)tokenTypeForValue:(long long)a0;

@end
