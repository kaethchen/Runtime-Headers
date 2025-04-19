@class NSString;
@protocol TRINamespaceResolving, TRIPaths;

@interface TRIPurgeableOnDemandFactorsEnumerator : NSObject <TRIPurgeableOnDemandFactorsEnumerating> {
    id<TRIPaths> _paths;
    id<TRINamespaceResolving> _namespaceResolver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_enumerateExperimentOnDemandFactorsWithNamespaceName:(id)a0 block:(id /* block */)a1;
- (void)_enumerateRolloutOnDemandFactorsWithNamespaceName:(id)a0 block:(id /* block */)a1;
- (void)_filterOndemandAssetsForFactorLevels:(id)a0 forFactorPackId:(id)a1 treatmentId:(id)a2 block:(id /* block */)a3;
- (void)enumerateExperimentOnDemandFactorsPurgeCandidatesFromNamespaceNames:(id)a0 purgeableFactorFilterBlock:(id /* block */)a1 block:(id /* block */)a2;
- (void)enumerateRolloutOnDemandFactorsPurgeCandidatesFromNamespaceNames:(id)a0 purgeableFactorFilterBlock:(id /* block */)a1 block:(id /* block */)a2;
- (id)initWithPaths:(id)a0 namespaceResolver:(id)a1;

@end
