@class NSString;

@interface CLSSceneModel : CLSTaxonomyBasedModel <CLSClassificationBasedSignalModel>

@property (class, readonly) NSString *name;
@property (class, readonly) unsigned long long latestVersion;

@property (readonly) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)a0;

- (id)initForTesting;
- (id)modelInfo;
- (id)initWithSceneAnalysisVersion:(unsigned long long)a0;
- (BOOL)isResponsibleForSignalIdentifier:(unsigned long long)a0;
- (id)confidenceThresholdBySceneIdentifierForSceneNames:(id)a0 withThresholdType:(unsigned long long)a1;
- (void)processSignals:(id)a0 intoProcessedSignals:(id)a1;
- (BOOL)nodeIsSupported:(id)a0;
- (BOOL)nodeRefIsSupported:(void *)a0;

@end
