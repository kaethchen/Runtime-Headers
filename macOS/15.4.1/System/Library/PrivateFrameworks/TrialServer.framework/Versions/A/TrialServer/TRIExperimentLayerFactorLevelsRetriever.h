@class NSString;

@interface TRIExperimentLayerFactorLevelsRetriever : NSObject <TRINamespaceFactorLevelsRetrieving>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)factorLevelsForNamespaceName:(id)a0;

@end
