@interface _SNEBankCustomModel : NSObject <MLCustomModel> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ coefAllocations;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;

@end
