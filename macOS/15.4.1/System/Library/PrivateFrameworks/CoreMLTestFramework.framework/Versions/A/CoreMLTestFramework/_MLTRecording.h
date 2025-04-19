@class NSString, MLPredictionOptions, MLModelConfiguration, MLDictionaryFeatureProvider;

@interface _MLTRecording : NSObject

@property (retain, nonatomic) NSString *recordedModelPathComponent;
@property (retain, nonatomic) NSString *recordedModelPath;
@property (retain, nonatomic) NSString *predictionSpecificPath;
@property (retain, nonatomic) MLModelConfiguration *recordedModelConfiguration;
@property (retain, nonatomic) MLDictionaryFeatureProvider *recordedInputDictionaryFeatureProvider;
@property (retain, nonatomic) MLDictionaryFeatureProvider *recordedOutputDictionaryFeatureProvider;
@property (retain, nonatomic) MLPredictionOptions *recordedModelPredictionOptions;

+ (BOOL)writeEnablingDictionary:(id)a0 recordingResultsDirPath:(id)a1 stopRecordingBundleID:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)initWithSessionPath:(id)a0 recordedModelPathComponent:(id)a1 recordedPredictionPathComponent:(id)a2;
- (BOOL)saveOutputFeatureProvider:(id)a0;

@end
