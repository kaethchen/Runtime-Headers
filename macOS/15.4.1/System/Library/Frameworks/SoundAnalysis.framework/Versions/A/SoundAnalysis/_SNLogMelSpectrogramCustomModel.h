@interface _SNLogMelSpectrogramCustomModel : NSObject <MLCustomModel> {
    void /* unknown type, empty encoding */ inputFeatureName;
    void /* unknown type, empty encoding */ outputFeatureName;
    void /* unknown type, empty encoding */ logMelExtractionParameters;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;

@end
