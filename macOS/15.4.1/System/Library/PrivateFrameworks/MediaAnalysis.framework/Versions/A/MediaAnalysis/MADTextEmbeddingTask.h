@interface MADTextEmbeddingTask : MADServiceTextProcessingSubtask

+ (BOOL)prewarmRequest:(id)a0 error:(id *)a1;

- (int)run;
- (id)embeddingFromMultiArray:(id)a0 version:(unsigned long long)a1;
- (BOOL)processInput:(id)a0 resource:(id)a1 result:(id *)a2 error:(id *)a3;

@end
