@class NSArray, PHACoreDuetDatasetStorage, PHAPrivateFederatedLearningRecipeOptions;

@interface PHADatasetBuilder : NSObject

@property (retain, nonatomic) NSArray *positiveLocalIdentifiers;
@property (retain, nonatomic) NSArray *negativeLocalIdentifiers;
@property (retain, nonatomic) PHACoreDuetDatasetStorage *datasetStore;
@property (readonly, nonatomic) PHAPrivateFederatedLearningRecipeOptions *options;

+ (id)_randomIndicesWithUpperBound:(unsigned long long)a0 count:(unsigned long long)a1;
+ (id)labelVectorForLabelPolicy:(long long)a0 label:(id)a1 numberOfClasses:(unsigned long long)a2;
+ (id)labelVectorsForLabelPolicy:(long long)a0;

- (void).cxx_destruct;
- (id)_assetPropertiesPredicateForKeywordFromFeatureExtractorFilters:(id)a0;
- (id)_currentFetchOptionPropertySet;
- (id)_datasetBuilderHelperForBiomeStream:(id)a0 error:(id *)a1;
- (id)_datasetBuilderHelperForLocalIdentifiers:(id)a0 positiveFingerprints:(id)a1 negativeFingerprints:(id)a2 error:(id *)a3;
- (id)_datasetForLocalIdentifiers:(id)a0 positiveFingerprints:(id)a1 negativeFingerprints:(id)a2 error:(id *)a3;
- (id)_featureProviderForFingerprintVectors:(id)a0 labelVectors:(id)a1 batchSize:(unsigned long long)a2 error:(id *)a3;
- (id)_fetchObjectsForFingerprintVersion:(long long)a0 options:(id)a1 error:(id *)a2;
- (id)_fetchObjectsForFingerprintVersion:(long long)a0 options:(id)a1 localIdentifiers:(id)a2 error:(id *)a3;
- (id)_filterDataSamples:(id)a0 filters:(id)a1 numberOfSamples:(id)a2 error:(id *)a3;
- (id)_fingerprintsForDatasetName:(id)a0 localIdentifiers:(id)a1 labelName:(id)a2 numberOfSamples:(id)a3 filters:(id)a4 error:(id *)a5;
- (id)_fingerprintsForObjects:(id)a0 fingerprintVersion:(long long)a1 error:(id *)a2;
- (id)_fingerprintsForPhotosStyleWithDataLabelArray:(id)a0 error:(id *)a1;
- (BOOL)_generateError:(id *)a0 errorCode:(long long)a1 errorMessage:(id)a2 underlyingError:(id)a3;
- (BOOL)_isFeatureNameForAssetPredicateWithFeatureName:(id)a0;
- (id)_localIdentifiersForCoreDuetDatasetName:(id)a0 subsetName:(id)a1;
- (id)_localIdentifiersToExcludeForLabel:(id)a0;
- (id)_mergeLocalIdentifiersFromPositiveLocalIdentifiers:(id)a0 negativeLocalIdentifiers:(id)a1 numberOfPositiveSamples:(id)a2 numberOfNegativeSamples:(id)a3 error:(id *)a4;
- (unsigned long long)_minAvailableNumberOfSamples;
- (id)_numberOfSamplesPerClassWithError:(id *)a0;
- (id)_performAugmentationsOnLabeledSamples:(id)a0 error:(id *)a1;
- (id)_randomSamplesOfCount:(unsigned long long)a0 filterPredicateForKeyword:(id)a1 labelName:(id)a2 error:(id *)a3;
- (id)_samplesOfCount:(unsigned long long)a0 fromLocalIdentifiers:(id)a1 filterPredicateForKeyword:(id)a2 error:(id *)a3;
- (id)_trainingDataWithDataLabelArray:(id)a0 fingerprints:(id)a1 error:(id *)a2;
- (long long)_validatePHObject:(id)a0 withFeatureValidator:(id)a1 error:(id *)a2;
- (id)dataLabelArrayForPhotosStyleWithError:(id *)a0;
- (id)datasetBuilderHelperForBinaryTrainingWithError:(id *)a0;
- (id)datasetBuilderHelperForPhotosStyleWithError:(id *)a0;
- (id)datasetForEvaluationForLabel:(id)a0 error:(id *)a1;
- (id)datasetWithError:(id *)a0;
- (id)initWithDatasetOptions:(id)a0;
- (id)readLocalIdentifiersFromBiomeStream:(id)a0 subsetName:(id)a1 type:(id)a2;
- (id)trainingDataBatchWithBiomeStream:(id)a0 error:(id *)a1;

@end
