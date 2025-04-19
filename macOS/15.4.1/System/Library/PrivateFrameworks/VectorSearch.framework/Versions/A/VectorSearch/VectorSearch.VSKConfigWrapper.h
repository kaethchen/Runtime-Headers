@interface VectorSearch.VSKConfigWrapper : NSObject {
    void /* unknown type, empty encoding */ wrappedConfig;
}

+ (id)clientVersionWithBaseDirectory:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBaseDirectory:(id)a0 distanceMetric:(long long)a1 filterableAttributes:(id)a2 dimension:(long long)a3 averagePartitionSize:(long long)a4 batchSize:(long long)a5 batchFactor:(long long)a6 tradeOffParameterBetweenClusteringAndBalance:(float)a7 enableFTS:(BOOL)a8 dataType:(long long)a9 maxIndexConstructionBatches:(id)a10 readOnly:(BOOL)a11 pretokenizationEnabled:(BOOL)a12 prefixIndices:(id)a13 perConnectionPeakMemory:(id)a14 clientVersion:(id)a15 error:(id *)a16;
- (id)initWithBaseDirectory:(id)a0 readOnly:(BOOL)a1 perConnectionPeakMemory:(id)a2 error:(id *)a3;
- (id)getClientVersion;
- (id)initWithBaseDirectory:(id)a0 distanceMetric:(long long)a1 filterableAttributes:(id)a2 dimension:(long long)a3 includePayload:(BOOL)a4 numberOfProbes:(long long)a5 averagePartitionSize:(long long)a6 batchSize:(long long)a7 batchFactor:(long long)a8 tradeOffParameterBetweenClusteringAndBalance:(float)a9 enableFTS:(BOOL)a10 dataType:(long long)a11 maxIndexConstructionBatches:(id)a12 readOnly:(BOOL)a13 pretokenizationEnabled:(BOOL)a14 prefixIndices:(id)a15 perConnectionPeakMemory:(id)a16 clientVersion:(id)a17 error:(id *)a18;
- (id)initWithBaseDirectory:(id)a0 includePayload:(BOOL)a1 numberOfProbes:(long long)a2 readOnly:(BOOL)a3 perConnectionPeakMemory:(id)a4 error:(id *)a5;

@end
