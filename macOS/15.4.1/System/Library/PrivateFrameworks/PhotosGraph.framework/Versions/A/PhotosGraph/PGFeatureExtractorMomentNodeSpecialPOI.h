@interface PGFeatureExtractorMomentNodeSpecialPOI : MAFeatureExtractor

- (id)name;
- (id)featureNames;
- (long long)featureLength;
- (id)floatMatrixWithEntities:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;

@end
