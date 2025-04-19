@class TRIExperimentDeployment, NSString, TRIRolloutDeployment, _PASLock, NSSet, TRIBMLTDeployment, TRIActiveFactorProvidersParser, TRIExperimentFactorsState;
@protocol TRIPaths;

@interface TRINamespaceResolver : NSObject <TRINamespaceResolving> {
    id<TRIPaths> _paths;
    _PASLock *_lock;
}

@property (readonly, nonatomic) NSSet *namespacesInFactorsState;
@property (readonly, nonatomic) TRIRolloutDeployment *rolloutDeploymentForFactorsState;
@property (readonly, nonatomic) TRIExperimentDeployment *experimentDeploymentForFactorsState;
@property (readonly, nonatomic) TRIBMLTDeployment *bmltDeploymentForFactorsState;
@property (readonly, nonatomic) TRIExperimentFactorsState *experimentFactorsStateForCounterfactuals;
@property (readonly, nonatomic) TRIActiveFactorProvidersParser *activeFactorProvidersParser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_namespacePathComponentsFromEntitlements;
+ (id)preferredPathForFactorDataWithCandidatePaths:(id)a0;
+ (id)promotionDirForNamespaceName:(id)a0 withPaths:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)dispose;
- (id)initWithPaths:(id)a0;
- (BOOL)_prepareFactorsStateForExperimentsOnTreatmentPathForDeployment:(id)a0;
- (id)_factorProviderForNamespaceName:(id)a0 fromNamespaceDescriptorSetWithDir:(id)a1 resolvedPath:(id *)a2;
- (void)_faultOnceWithMessage:(id)a0;
- (BOOL)_hasBMLTFactorsState;
- (BOOL)_hasCounterfactualFactorsState;
- (BOOL)_hasExperimentFactorsState;
- (BOOL)_hasRolloutFactorsState;
- (BOOL)_prepareFactorsState:(id)a0;
- (BOOL)_prepareFactorsStateForCounterfactualsForFactorsState:(id)a0;
- (BOOL)_prepareFactorsStateForExperimentsOnFactorPackSetPathForDeployment:(id)a0;
- (char *)_realpathWithFileSystemRepresentation:(const char *)a0 buffer:(char *)a1;
- (id)_resolveTargetedFactorPackSetForBMLTDeployment:(id)a0;
- (id)_resolveTargetedNamespaceDescriptorSetForExperimentDeployment:(id)a0;
- (id)counterfactualFactorsStatesForNamespace:(id)a0;
- (id)experimentIdentifiersForNamespace:(id)a0;
- (id)initWithPaths:(id)a0 activeFactorProvidersParser:(id)a1;
- (id)initWithPaths:(id)a0 factorsState:(id)a1;
- (id)initWithPaths:(id)a0 factorsState:(id)a1 activeFactorProvidersParser:(id)a2;
- (id)resolveFactorProviderChainForNamespaceName:(id)a0 faultOnMissingInstalledFactors:(BOOL)a1 installedFactorsAccessible:(BOOL *)a2;

@end
