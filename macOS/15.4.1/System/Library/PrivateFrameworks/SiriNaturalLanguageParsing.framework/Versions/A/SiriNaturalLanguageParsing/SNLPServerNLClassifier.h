@interface SNLPServerNLClassifier : SNLPITFMClassifier

+ (id)classifierWithPathURL:(id)a0 error:(id *)a1;
+ (id)_classifierWithModelURL:(id)a0 configURL:(id)a1 spanVocabularyURL:(id)a2 spanMappingURL:(id)a3 contextVocabularyURL:(id)a4 versionURL:(id)a5 error:(id *)a6;
+ (id)_convertITFMResponse:(id)a0;
+ (id)_convertSNLCRequest:(id)a0;
+ (id /* block */)_initializationBlock;

- (id)inferenceResponseForRequest:(id)a0 error:(id *)a1;
- (id)responseForRequest:(id)a0 error:(id *)a1;
- (id)inferenceResponseForRequest:(id)a0;

@end
