@class NSData, NSString, NSArray, NSError, CMLClientConfig, CMLPIRConfig, CMLUseCaseGroup, CMLPECConfig, NSDictionary, CMLUseCaseStatus;

@interface CipherML.XPCHandler : _TtCs12_SwiftObject <CMLXPCInterface> {
    void /* unknown type, empty encoding */ requestsManager;
    void /* unknown type, empty encoding */ connection;
}

- (void)asyncResponseDataByKeywords:(NSArray *)a0 clientConfig:(CMLClientConfig *)a1 reply:(void (^)(NSString *, NSError *))a2;
- (void)asyncResponseSimilarityScoresForElements:(NSArray *)a0 shardIndices:(NSArray *)a1 clientConfig:(CMLClientConfig *)a2 reply:(void (^)(NSString *, NSError *))a3;
- (void)configureUseCaseGroupWithName:(NSString *)a0 useCaseGroup:(CMLUseCaseGroup *)a1 reply:(void (^)(NSError *))a2;
- (void)constructPIRBatchRequestWithIndices:(NSArray *)a0 clientConfig:(CMLClientConfig *)a1 reply:(void (^)(NSData *, NSError *))a2;
- (void)constructPIRBatchRequestWithKeywords:(NSArray *)a0 shardIds:(NSArray *)a1 clientConfig:(CMLClientConfig *)a2 reply:(void (^)(NSData *, NSError *))a3;
- (void)constructPIRRequestWithIndex:(unsigned long long)a0 clientConfig:(CMLClientConfig *)a1 reply:(void (^)(NSData *, NSError *))a2;
- (void)constructPIRRequestWithKeyword:(NSData *)a0 withEvaluationKey:(BOOL)a1 shardId:(NSString *)a2 pirConfig:(CMLPIRConfig *)a3 clientConfig:(CMLClientConfig *)a4 reply:(void (^)(NSData *, NSError *))a5;
- (void)constructPIRRequestWithLatitude:(double)a0 longitude:(double)a1 clientConfig:(CMLClientConfig *)a2 reply:(void (^)(NSData *, NSError *))a3;
- (void)decryptBatchOfSimilarityScores:(NSData *)a0 clientConfig:(CMLClientConfig *)a1 reply:(void (^)(NSArray *, NSError *))a2;
- (void)decryptPIRBatchResponse:(NSData *)a0 indices:(NSArray *)a1 clientConfig:(CMLClientConfig *)a2 reply:(void (^)(NSArray *, NSError *))a3;
- (void)decryptPIRBatchResponse:(NSData *)a0 keywords:(NSArray *)a1 clientConfig:(CMLClientConfig *)a2 reply:(void (^)(NSArray *, NSError *))a3;
- (void)decryptPIRResponse:(NSData *)a0 index:(unsigned long long)a1 clientConfig:(CMLClientConfig *)a2 reply:(void (^)(NSData *, NSError *))a3;
- (void)decryptPIRResponse:(NSData *)a0 keyword:(NSData *)a1 shardId:(NSString *)a2 clientConfig:(CMLClientConfig *)a3 reply:(void (^)(NSData *, NSError *))a4;
- (void)decryptPIRResponse:(NSData *)a0 latitude:(double)a1 longitude:(double)a2 clientConfig:(CMLClientConfig *)a3 reply:(void (^)(NSData *, NSError *))a4;
- (void)encryptBatchOfElements:(NSArray *)a0 shardIndices:(NSArray *)a1 clientConfig:(CMLClientConfig *)a2 reply:(void (^)(NSData *, NSError *))a3;
- (void)encryptDifferentiallyPrivateFakes:(NSArray *)a0 shardIndex:(long long)a1 shardCount:(long long)a2 pecConfig:(CMLPECConfig *)a3 clientConfig:(CMLClientConfig *)a4 reply:(void (^)(NSArray *, NSError *))a5;
- (void)generateEvaluationKey:(CMLPIRConfig *)a0 clientConfig:(CMLClientConfig *)a1 reply:(void (^)(NSData *, NSError *))a2;
- (void)listUseCaseGroupsWithReply:(void (^)(NSDictionary *, NSError *))a0;
- (void)queryStatusForClientConfig:(CMLClientConfig *)a0 options:(unsigned long long)a1 reply:(void (^)(CMLUseCaseStatus *, NSError *))a2;
- (void)removeCachedEntriesByKeywords:(NSArray *)a0 clientConfig:(CMLClientConfig *)a1 reply:(void (^)(long long, NSError *))a2;
- (void)requestDataByIndex:(unsigned long long)a0 clientConfig:(CMLClientConfig *)a1 reply:(void (^)(NSData *, NSError *))a2;
- (void)requestDataByIndices:(NSArray *)a0 clientConfig:(CMLClientConfig *)a1 reply:(void (^)(NSArray *, NSError *))a2;
- (void)requestDataByKeywords:(NSArray *)a0 shardIds:(NSArray *)a1 clientConfig:(CMLClientConfig *)a2 reply:(void (^)(NSArray *, NSError *))a3;
- (void)requestDataByLatitude:(double)a0 longitude:(double)a1 clientConfig:(CMLClientConfig *)a2 reply:(void (^)(NSData *, NSError *))a3;
- (void)setPECConfig:(CMLPECConfig *)a0 clientConfig:(CMLClientConfig *)a1 reply:(void (^)(NSData *, NSError *))a2;
- (void)setPIRConfig:(CMLPIRConfig *)a0 clientConfig:(CMLClientConfig *)a1 reply:(void (^)(NSData *, NSError *))a2;
- (void)similarityScoresForElements:(NSArray *)a0 shardIndices:(NSArray *)a1 clientConfig:(CMLClientConfig *)a2 reply:(void (^)(NSArray *, NSError *))a3;

@end
