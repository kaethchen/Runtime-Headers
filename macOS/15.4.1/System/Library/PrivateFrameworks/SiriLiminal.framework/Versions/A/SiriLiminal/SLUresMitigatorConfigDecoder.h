@class NSDictionary, NSString;

@interface SLUresMitigatorConfigDecoder : NSObject {
    NSDictionary *_configDict;
    NSString *_resourcePath;
}

- (void).cxx_destruct;
- (id)getVersion;
- (id)getBnnsIrWeightFile;
- (id)getInputOpsMap;
- (id)getModelFile;
- (id)getOutputMap;
- (id)getSupportedInputOrigins;
- (id)initWithConfigFile:(id)a0 errOut:(id *)a1;

@end
