@interface PGKeywordBasedFeatureExtractor : NSObject <PhotosGraph.MusicFeatureExtractor> {
    void /* unknown type, empty encoding */ weightByKeyword;
    void /* unknown type, empty encoding */ $__lazy_storage_$_consistentHash;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithWeightByKeyword:(id)a0;
- (id)musicCurationFeaturesWithContext:(id)a0 progressReporter:(id)a1 error:(id *)a2;

@end
