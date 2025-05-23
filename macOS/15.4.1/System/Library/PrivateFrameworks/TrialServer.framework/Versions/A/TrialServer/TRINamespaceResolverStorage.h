@protocol TRIPaths;

@interface TRINamespaceResolverStorage : NSObject {
    id<TRIPaths> _paths;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPaths:(id)a0;
- (BOOL)promoteFactorPackId:(id)a0 forNamespaceName:(id)a1 rolloutDeployment:(id)a2 error:(id *)a3;
- (BOOL)rejectFactorPackId:(id)a0 forNamespaceName:(id)a1 rolloutDeployment:(id)a2 error:(id *)a3;
- (BOOL)setProvisionalFactorPackId:(id)a0 forNamespaceName:(id)a1 error:(id *)a2;
- (BOOL)_createDeploymentDirectoryAndAddFactorPackSetWithTempDirRef:(id)a0 newDeploymentDir:(id)a1 factorPackSetPath:(id)a2;
- (id)_getProvisionalFactorpackMetadataForNamespaceName:(id)a0 mustExist:(BOOL)a1 error:(id *)a2;
- (BOOL)_overwriteActiveFactorProvidersUsingGlobalPath:(BOOL)a0 withNamespaceMap:(id)a1 rolloutDeploymentMap:(id)a2 experimentDeploymentMap:(id)a3 experimentTreatmentMap:(id)a4 treatmentFactorPackSetIdsMap:(id)a5 counterfactualTreatmentsMap:(id)a6 factorPackMap:(id)a7;
- (id)_pathForBMLTDeployment:(id)a0;
- (id)_pathForExperimentDeployment:(id)a0;
- (id)_pathForRolloutDeployment:(id)a0;
- (BOOL)_removeUnreferencedBMLTDeploymentsWithRefStore:(id)a0 parentDir:(id)a1 removedCount:(unsigned int *)a2;
- (BOOL)_removeUnreferencedBMLTDeploymentsWithRefStore:(id)a0 topLevelDir:(id)a1 removedCount:(unsigned int *)a2;
- (BOOL)_removeUnreferencedDeploymentsWithRefStore:(id)a0 parentDir:(id)a1 removedCount:(unsigned int *)a2;
- (BOOL)_removeUnreferencedDeploymentsWithRefStore:(id)a0 topLevelDir:(id)a1 removedCount:(unsigned int *)a2;
- (BOOL)_rewriteExperimentDeployment:(id)a0 targetedTreatmentId:(id)a1 factorPackSetId:(id)a2;
- (BOOL)_rewriteExperimentDeploymentForFPSPath:(id)a0 targetedTreatmentId:(id)a1 factorPackSetId:(id)a2;
- (BOOL)_rewriteExperimentDeploymentForTreatmentPath:(id)a0 targetedTreatmentId:(id)a1;
- (BOOL)_setProvisionalFactorpackMetadata:(id)a0 forNamespaceName:(id)a1 error:(id *)a2;
- (BOOL)_updateTargetedFactorPackSetWithTempDirRef:(id)a0 existingDeploymentDir:(id)a1 factorPackSetPath:(id)a2;
- (BOOL)_writeRampId:(id)a0 parentDir:(id)a1;
- (BOOL)overwriteActiveFactorProvidersUsingTransaction:(id)a0 fromContext:(id)a1;
- (BOOL)overwriteGlobalActiveFactorProvidersWithNamespaceMap:(id)a0 factorPackMap:(id)a1 rolloutDeploymentMap:(id)a2;
- (id)parentDirForBMLTDeployments;
- (id)parentDirForExperimentDeployments;
- (id)parentDirForRolloutDeployments;
- (id)pathForBMLTDeployment:(id)a0;
- (id)pathForExperimentDeployment:(id)a0;
- (id)pathForRolloutDeployment:(id)a0;
- (id)pathForTargetedFactorPackSetWithDeployment:(id)a0;
- (id)pathForTargetedFactorPackSetWithTaskDeployment:(id)a0;
- (BOOL)removeUnneededPromotionsWithRemovedCount:(unsigned int *)a0 removeAll:(BOOL)a1;
- (BOOL)removeUnreferencedBMLTDeploymentsWithServerContext:(id)a0 removedCount:(unsigned int *)a1;
- (BOOL)removeUnreferencedExperimentDeploymentsWithServerContext:(id)a0 removedCount:(unsigned int *)a1;
- (BOOL)removeUnreferencedRolloutDeploymentsWithServerContext:(id)a0 removedCount:(unsigned int *)a1;
- (BOOL)rewriteBMLTDeployment:(id)a0 targetedFactorPackSetId:(id)a1;
- (BOOL)rewriteExperimentDeployment:(id)a0 targetedTreatmentId:(id)a1;
- (BOOL)rewriteExperimentDeployment:(id)a0 targetedTreatmentId:(id)a1 factorPackSetId:(id)a2;
- (BOOL)rewriteRolloutDeployment:(id)a0 rampId:(id)a1 targetedFactorPackSetId:(id)a2;

@end
