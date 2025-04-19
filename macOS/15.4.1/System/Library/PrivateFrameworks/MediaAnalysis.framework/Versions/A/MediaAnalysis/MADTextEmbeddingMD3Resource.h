@interface MADTextEmbeddingMD3Resource : MADTextEmbeddingResource

+ (long long)revision;
+ (id)sharedResource;

- (unsigned long long)version;
- (unsigned long long)calibrationVersion;
- (long long)tokenEmbeddingType;

@end
