@interface PGFeatureExtractorCLIPprint : PGAssetFeatureExtractor

- (id)name;
- (id)featureNames;
- (id)_floatArrayFromSceneprint:(id)a0;
- (long long)featureLength;
- (id)featureValuesForAssets:(id)a0 error:(id *)a1;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;

@end
