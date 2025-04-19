@interface SNLPPommesServerClassifier : SNLPITFMClassifier

@property (nonatomic) float confidenceThreshold;

+ (id)classifierWithPathURL:(id)a0 error:(id *)a1;
+ (id /* block */)_initializationBlock;

- (id)responseForRequest:(id)a0 error:(id *)a1;

@end
