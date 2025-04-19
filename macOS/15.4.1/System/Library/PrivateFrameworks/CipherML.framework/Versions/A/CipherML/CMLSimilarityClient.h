@class CMLPECConfig, NSString, NSXPCConnection, NSObject, CMLClientConfig;
@protocol OS_dispatch_queue;

@interface CMLSimilarityClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) CMLPECConfig *clientPecConfig;
@property (readonly, copy, nonatomic) NSString *useCase;
@property (readonly, copy, nonatomic) CMLClientConfig *clientConfig;

+ (id)new;
+ (id)calculateSimilarityScoresOf:(id)a0 toElements:(id)a1 error:(id *)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithClientConfig:(id)a0;
- (void)requestSimilarityScoresForElement:(id)a0 shardIndex:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)asyncResponseSimilarityScoresForElements:(id)a0 shardIndex:(unsigned long long)a1 error:(id *)a2;
- (id)asyncResponseSimilarityScoresForElements:(id)a0 shardIndices:(id)a1 error:(id *)a2;
- (id)decryptBatchOfSimilarityScores:(id)a0 error:(id *)a1;
- (id)decryptSimilarityScores:(id)a0 error:(id *)a1;
- (id)encryptBatchOfElements:(id)a0 shardIndex:(unsigned long long)a1 error:(id *)a2;
- (id)encryptBatchOfElements:(id)a0 shardIndices:(id)a1 error:(id *)a2;
- (id)encryptDifferentiallyPrivateFakes:(id)a0 shardIndex:(unsigned long long)a1 shardCount:(unsigned long long)a2 error:(id *)a3;
- (id)encryptElement:(id)a0 shardIndex:(unsigned long long)a1 error:(id *)a2;
- (id)encryptElement:(id)a0 shardIndices:(id)a1 error:(id *)a2;
- (id)initWithClientConfig:(id)a0 dispatchQueue:(id)a1;
- (id)initWithClientConfig:(id)a0 dispatchQueue:(id)a1 connection:(id)a2;
- (void)requestSimilarityScoresForElement:(id)a0 shardIndices:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestSimilarityScoresForElements:(id)a0 shardIndex:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)requestSimilarityScoresForElements:(id)a0 shardIndices:(id)a1 completionHandler:(id /* block */)a2;
- (id)setPECConfig:(id)a0 error:(id *)a1;
- (id)similarityScoresForElement:(id)a0 shardIndex:(unsigned long long)a1 error:(id *)a2;
- (id)similarityScoresForElement:(id)a0 shardIndices:(id)a1 error:(id *)a2;
- (id)similarityScoresForElements:(id)a0 shardIndex:(unsigned long long)a1 error:(id *)a2;
- (id)similarityScoresForElements:(id)a0 shardIndices:(id)a1 error:(id *)a2;

@end
