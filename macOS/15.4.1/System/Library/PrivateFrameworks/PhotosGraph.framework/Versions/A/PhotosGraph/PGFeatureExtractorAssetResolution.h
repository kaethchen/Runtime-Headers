@interface PGFeatureExtractorAssetResolution : PGAssetFeatureExtractor

- (id)name;
- (id)featureNames;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;

@end
