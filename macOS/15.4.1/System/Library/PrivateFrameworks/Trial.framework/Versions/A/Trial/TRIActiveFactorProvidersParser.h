@class _PASLock;
@protocol TRIPaths;

@interface TRIActiveFactorProvidersParser : NSObject {
    id<TRIPaths> _paths;
    _PASLock *_lock;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)dispose;
- (id)initWithPaths:(id)a0;
- (id)_deploymentIdForExperiment:(id)a0 fromResolverList:(id)a1;
- (id)_experimentIdForNamespace:(id)a0 fromResolverList:(id)a1;
- (void)_faultOnceWithMessage:(id)a0;
- (id)_getFactorPackPathForNamespaceName:(id)a0 withCandidatePath:(id)a1 parentId:(id)a2 deploymentId:(int)a3 promotable:(BOOL *)a4;
- (char *)_realpathWithFileSystemRepresentation:(const char *)a0 buffer:(char *)a1;
- (id)_resolveCounterfactualTreatmentsMap;
- (id)_resolveTreatmentFactorPackSetIdMap;
- (id)_resolverPropertyListWithResolvedPath:(id *)a0;
- (id)_treatmentIdForExperiment:(id)a0 fromResolverList:(id)a1;
- (id)counterfactualFactorsStatesForNamespace:(id)a0;
- (id)experimentIdentifiersForNamespace:(id)a0;
- (id)factorProviderForNamespaceName:(id)a0 parentId:(id)a1 deploymentId:(int)a2 treatmentId:(id)a3 fromFactorPackSetWithDir:(id)a4 resolvedPath:(id *)a5;
- (id)globalFactorProviderForNamespaceName:(id)a0 parentId:(id)a1 deploymentId:(int)a2 treatmentId:(id)a3 fromFactorPackId:(id)a4 resolvedPath:(id *)a5;
- (id)resolvePropertyListFactorProviderChainForNamespaceName:(id)a0;
- (id)resolvePropertyListGlobalFactorProviderChainForNamespaceName:(id)a0;
- (id)resolveTargetedFactorPackSetForExperimentDeployment:(id)a0;
- (id)resolveTargetedFactorPackSetForExperimentFactorsState:(id)a0;
- (id)resolveTargetedFactorPackSetForRolloutDeployment:(id)a0;

@end
