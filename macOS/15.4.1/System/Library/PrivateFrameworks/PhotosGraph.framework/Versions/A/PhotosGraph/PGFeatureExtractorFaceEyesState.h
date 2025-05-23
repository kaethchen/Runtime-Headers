@interface PGFeatureExtractorFaceEyesState : PGFaceFeatureExtractor

- (id)name;
- (id)featureNames;
- (id)_floatVectorForFaceEyesState:(unsigned short)a0;
- (id)defaultFloatVectorWithError:(id *)a0;
- (long long)featureLength;
- (id)floatMatrixWithEntities:(id)a0 progressReporter:(id)a1 error:(id *)a2;

@end
