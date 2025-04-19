@interface CMLKeywordPIRClient : CMLPIRClient

+ (id)new;

- (id)init;
- (id)dataByStringKeyword:(id)a0 error:(id *)a1;
- (id)dataByStringKeywords:(id)a0 error:(id *)a1;
- (void)requestDataByStringKeyword:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestDataByStringKeywords:(id)a0 completionHandler:(id /* block */)a1;
- (id)constructPIRRequestWithKeyword:(id)a0 withEvaluationKey:(BOOL)a1 shardId:(id)a2 error:(id *)a3;
- (id)asyncResponseDataByKeyword:(id)a0 error:(id *)a1;
- (id)asyncResponseDataByKeywords:(id)a0 error:(id *)a1;
- (id)constructPIRBatchRequestWithKeywords:(id)a0 error:(id *)a1;
- (id)constructPIRBatchRequestWithKeywords:(id)a0 shardIds:(id)a1 error:(id *)a2;
- (id)constructPIRRequestWithKeyword:(id)a0 error:(id *)a1;
- (id)constructPIRRequestWithKeyword:(id)a0 shardId:(id)a1 error:(id *)a2;
- (id)dataByKeyword:(id)a0 error:(id *)a1;
- (id)dataByKeyword:(id)a0 shardId:(id)a1 error:(id *)a2;
- (id)dataByKeywords:(id)a0 error:(id *)a1;
- (id)dataByKeywords:(id)a0 shardIds:(id)a1 error:(id *)a2;
- (id)dataByStringKeyword:(id)a0 shardId:(id)a1 error:(id *)a2;
- (id)dataByStringKeywords:(id)a0 shardIds:(id)a1 error:(id *)a2;
- (id)decryptPIRBatchResponse:(id)a0 keywords:(id)a1 error:(id *)a2;
- (id)decryptPIRResponse:(id)a0 keyword:(id)a1 error:(id *)a2;
- (id)decryptPIRResponse:(id)a0 keyword:(id)a1 shardId:(id)a2 error:(id *)a3;
- (id)removeCachedEntriesByKeywords:(id)a0 error:(id *)a1;
- (id)removeCachedEntriesByStringKeywords:(id)a0 error:(id *)a1;
- (void)requestDataByKeyword:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestDataByKeyword:(id)a0 shardId:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestDataByKeywords:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestDataByKeywords:(id)a0 shardIds:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestDataByStringKeyword:(id)a0 shardId:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestDataByStringKeywords:(id)a0 shardIds:(id)a1 completionHandler:(id /* block */)a2;

@end
