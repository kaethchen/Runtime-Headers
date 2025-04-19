@class NSEnumerator, NSArray, NSMutableDictionary, NSMutableArray;

@interface CPLUploadComputeStatesAccumulator : NSObject {
    unsigned long long _capacity;
    NSMutableDictionary *_localComputeStatesToUpload;
    NSMutableDictionary *_cloudComputeStatesToUpload;
    NSMutableDictionary *_cloudComputeStatesNeedingPayload;
    NSMutableArray *_batchedLocalComputeStatesNeedingPayload;
    NSMutableDictionary *_currentBatchOfComputeStatesNeedingPayload;
    NSEnumerator *_batchEnumerator;
}

@property (readonly, nonatomic) unsigned long long maximumPayloadRequestsBatchSize;
@property (readonly, nonatomic) BOOL hasEnqueuedComputeStatesToUpload;
@property (readonly, nonatomic) unsigned long long countOfCloudComputeStatesToUpload;
@property (readonly, nonatomic) NSArray *cloudComputeStatesToUpload;

- (void).cxx_destruct;
- (void)addLocalComputeStateToUpload:(id)a0 cloudComputeState:(id)a1;
- (void)enumerateUploadedComputeStateWithBlock:(id /* block */)a0;
- (id)initWithCapacity:(unsigned long long)a0 maximumPayloadRequestsBatchSize:(unsigned long long)a1;
- (id)localComputeStatesToDropAfterClientProvidedPayloadForLocalComputeStates:(id)a0;
- (id)popNextBatchOfLocalComputeStatesNeedingPayload;
- (void)requestPayloadForLocalComputeState:(id)a0 cloudComputeState:(id)a1;

@end
