@class PGFeatureTransformersForFeatureExtractors, NSArray, NSString, NSDictionary, PHPhotoLibrary, NSNumber, PGManager;

@interface PHAPrivateFederatedLearningRecipeOptions : NSObject

@property (retain, nonatomic) NSArray *attachmentURLs;
@property (retain, nonatomic) NSArray *layersToTrain;
@property (nonatomic) unsigned long long numberOfEpochs;
@property (nonatomic) double learningRate;
@property (retain, nonatomic) NSString *modelInputName;
@property (retain, nonatomic) NSString *modelOutputName;
@property (retain, nonatomic) NSString *labelName;
@property (retain, nonatomic) NSString *lossName;
@property (retain, nonatomic) NSString *optimizerName;
@property (retain, nonatomic) NSString *trainingTask;
@property (retain, nonatomic) NSString *fingerprintVersionName;
@property (nonatomic) long long fingerprintVersion;
@property (retain, nonatomic) NSString *datasetPolicyString;
@property (nonatomic) long long datasetPolicy;
@property (retain, nonatomic) NSString *labelPolicyString;
@property (nonatomic) long long labelPolicy;
@property (retain, nonatomic) NSString *positivesDatasetName;
@property (retain, nonatomic) NSString *positivesSubsetName;
@property (retain, nonatomic) NSNumber *positivesDatasetType;
@property (retain, nonatomic) NSString *negativesDatasetName;
@property (retain, nonatomic) NSString *negativesSubsetName;
@property (retain, nonatomic) NSNumber *negativesDatasetType;
@property (nonatomic) unsigned long long totalNumberOfSamples;
@property (nonatomic) unsigned long long oversamplingRate;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) PGManager *graphManager;
@property (nonatomic) BOOL shouldValidateModel;
@property (nonatomic) double minProcessedRate;
@property (retain, nonatomic) PGFeatureTransformersForFeatureExtractors *transformersForFeatureExtractors;
@property (retain, nonatomic) NSArray *augmenters;
@property (retain, nonatomic) NSDictionary *filtersByDatasetName;
@property (retain, nonatomic) NSString *datasetSource;
@property (nonatomic) unsigned long long numberOfClasses;
@property (retain, nonatomic) NSString *learningFramework;
@property (retain, nonatomic) NSArray *evaluationMetricNames;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) unsigned long long featureSize;
@property (nonatomic) unsigned long long labelSize;
@property (retain, nonatomic) NSString *biomeInputName;
@property (retain, nonatomic) NSString *biomeLabelName;

+ (void)_generateError:(id *)a0 errorCode:(long long)a1 message:(id)a2 underlyingError:(id)a3;
+ (long long)datasetPolicyForPolicyName:(id)a0;
+ (long long)labelPolicyForLabelPolicyName:(id)a0;
+ (id)validateRecipeOptions:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;

@end
