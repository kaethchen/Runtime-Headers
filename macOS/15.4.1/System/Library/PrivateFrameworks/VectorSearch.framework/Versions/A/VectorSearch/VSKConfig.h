@class _TtC12VectorSearch16VSKConfigWrapper;

@interface VSKConfig : NSObject {
    _TtC12VectorSearch16VSKConfigWrapper *wrapper;
}

+ (id)clientVersionWithBaseDirectory:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)clientVersion;
- (id)initWithBaseDirectory:(id)a0 distanceMetric:(long long)a1 filterableAttributes:(id)a2 dimension:(long long)a3 averagePartitionSize:(id)a4 batchSize:(id)a5 batchFactor:(id)a6 tradeOffParameterBetweenClusteringAndBalance:(id)a7 enableFTS:(BOOL)a8 dataType:(long long)a9 maxIndexConstructionBatches:(id)a10 readOnly:(BOOL)a11 pretokenizationEnabled:(BOOL)a12 prefixIndices:(id)a13 perConnectionPeakMemory:(id)a14 clientVersion:(id)a15 error:(id *)a16;
- (id)initWithBaseDirectory:(id)a0 readOnly:(BOOL)a1 perConnectionPeakMemory:(id)a2 error:(id *)a3;
- (id)_getWrapper;
- (id)initWithBaseDirectory:(id)a0 distanceMetric:(long long)a1 filterableAttributes:(id)a2 dimension:(long long)a3 includePayload:(BOOL)a4 numberOfProbes:(id)a5 averagePartitionSize:(id)a6 batchSize:(id)a7 batchFactor:(id)a8 tradeOffParameterBetweenClusteringAndBalance:(id)a9 dataType:(long long)a10 error:(id *)a11;
- (id)initWithBaseDirectory:(id)a0 distanceMetric:(long long)a1 filterableAttributes:(id)a2 dimension:(long long)a3 includePayload:(BOOL)a4 numberOfProbes:(id)a5 averagePartitionSize:(id)a6 batchSize:(id)a7 batchFactor:(id)a8 tradeOffParameterBetweenClusteringAndBalance:(id)a9 enableFTS:(BOOL)a10 dataType:(long long)a11 maxIndexConstructionBatches:(id)a12 error:(id *)a13;
- (id)initWithBaseDirectory:(id)a0 distanceMetric:(long long)a1 filterableAttributes:(id)a2 dimension:(long long)a3 includePayload:(BOOL)a4 numberOfProbes:(id)a5 averagePartitionSize:(id)a6 batchSize:(id)a7 batchFactor:(id)a8 tradeOffParameterBetweenClusteringAndBalance:(id)a9 enableFTS:(BOOL)a10 dataType:(long long)a11 maxIndexConstructionBatches:(id)a12 readOnly:(BOOL)a13 error:(id *)a14;
- (id)initWithBaseDirectory:(id)a0 distanceMetric:(long long)a1 filterableAttributes:(id)a2 dimension:(long long)a3 includePayload:(BOOL)a4 numberOfProbes:(id)a5 averagePartitionSize:(id)a6 batchSize:(id)a7 batchFactor:(id)a8 tradeOffParameterBetweenClusteringAndBalance:(id)a9 enableFTS:(BOOL)a10 dataType:(long long)a11 maxIndexConstructionBatches:(id)a12 readOnly:(BOOL)a13 pretokenizationEnabled:(BOOL)a14 prefixIndices:(id)a15 clientVersion:(id)a16 error:(id *)a17;
- (id)initWithBaseDirectory:(id)a0 distanceMetric:(long long)a1 filterableAttributes:(id)a2 dimension:(long long)a3 includePayload:(BOOL)a4 numberOfProbes:(id)a5 averagePartitionSize:(id)a6 batchSize:(id)a7 batchFactor:(id)a8 tradeOffParameterBetweenClusteringAndBalance:(id)a9 enableFTS:(BOOL)a10 dataType:(long long)a11 maxIndexConstructionBatches:(id)a12 readOnly:(BOOL)a13 pretokenizationEnabled:(BOOL)a14 prefixIndices:(id)a15 perConnectionPeakMemory:(id)a16 clientVersion:(id)a17 error:(id *)a18;
- (id)initWithBaseDirectory:(id)a0 includePayload:(BOOL)a1 numberOfProbes:(id)a2 readOnly:(BOOL)a3 error:(id *)a4;
- (id)initWithBaseDirectory:(id)a0 includePayload:(BOOL)a1 numberOfProbes:(id)a2 readOnly:(BOOL)a3 perConnectionPeakMemory:(id)a4 error:(id *)a5;

@end
