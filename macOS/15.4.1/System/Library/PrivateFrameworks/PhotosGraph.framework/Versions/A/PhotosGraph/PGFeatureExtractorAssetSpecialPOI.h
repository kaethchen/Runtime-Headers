@class PGGraph;

@interface PGFeatureExtractorAssetSpecialPOI : PGAssetFeatureExtractor

@property (readonly, nonatomic) PGGraph *graph;

- (id)name;
- (void).cxx_destruct;
- (id)featureNames;
- (id)initWithGraph:(id)a0;
- (BOOL)_generateError:(id *)a0 withCode:(long long)a1 andMessage:(id)a2;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)floatVectorWithMoment:(id)a0 error:(id *)a1;

@end
