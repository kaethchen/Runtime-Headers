@class NSString, PHPhotoLibrary;

@interface VCPPhotosPersistenceDelegate : NSObject <PNPersonPromoterDelegate, PNPersonPromoterDelegate> {
    PHPhotoLibrary *_photoLibrary;
}

@property (nonatomic) BOOL personBuilderMergeCandidatesDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })faceTileSizeAdjustingForImageAspectRatio:(struct CGSize { double x0; double x1; })a0 imgWidth:(double)a1 imgHeight:(double)a2;
+ (void)enumerateFetchResult:(id)a0 withBatchSize:(unsigned long long)a1 handler:(id /* block */)a2;
+ (id)newAllFacesFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)newAllPersonsFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)newAllPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)newAssetFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)newFacesDeterministicSortDescriptors;
+ (id)newVerifiedPersonsFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)newVerifiedPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)newVisibleFacesFetchOptionsWithPhotoLibrary:(id)a0;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (unsigned long long)countOfClusteringEligibleFaces;
- (id)densityClusteringForObjects:(id)a0 maximumDistance:(double)a1 minimumNumberOfObjects:(unsigned long long)a2 withDistanceBlock:(id /* block */)a3;
- (id)suggestedMeIdentifierWithPersonClusterManager:(id)a0 forPersons:(id)a1 updateBlock:(id /* block */)a2;
- (id)_facesFromFaceGroupWithMostNumberOfFacesOnPerson:(id)a0 options:(id)a1 error:(id *)a2;
- (id)_updatedFaceGroupByFGLocalIdentifierFromClusterCSNs:(id /* block */)a0 fetchLimit:(unsigned long long)a1;
- (void)_adjustConfirmingAndRejectionWithFaces:(id)a0 faceCrops:(id)a1 cancelOrExtendTimeoutBlock:(id /* block */)a2;
- (id)_bestVURepresentativeFaceForPerson:(id)a0 qualityMeasureByFace:(id)a1 candidateFaces:(id)a2 cancelOrExtendTimeoutBlock:(id /* block */)a3;
- (void)_buildPersonsFromUpdatedFaceGroups:(id)a0 faceClusterer:(id)a1 keyFaceUpdateBlock:(id /* block */)a2 cancelOrExtendTimeoutBlock:(id /* block */)a3 context:(id)a4;
- (void)_categorizeGroupedFacesInFetchResult:(id)a0 intoFaceLocalIdentifiersByFaceGroup:(id)a1 ungroupedFaceLocalIdentifiers:(id *)a2 cancelOrExtendTimeoutBlock:(id /* block */)a3 photoLibrary:(id)a4;
- (BOOL)_cleanupMergeCandidatesForVerifiedPersons:(id)a0 minimumFaceGroupSize:(unsigned long long)a1 cancelOrExtendTimeoutBlock:(id /* block */)a2 error:(id *)a3;
- (BOOL)_completePersonBuildingWithPersonsToUpdate:(id)a0 facesToRemoveByPerson:(id)a1 facesToAddByPerson:(id)a2 updateFaceGroup:(id)a3 newMergeCandidatePairs:(id)a4 newInvalidMergeCandidatePairs:(id)a5 faceInFaceGroupByCSN:(id)a6 personCache:(id)a7 keyFaceUpdateBlock:(id /* block */)a8 cancelOrExtendTimeoutBlock:(id /* block */)a9 context:(id)a10 error:(id *)a11;
- (void)_detectDuplicationInExistingFaceCrops:(id)a0 withFetchedFaces:(id)a1 faceCropFaceIdentifiersToEvaluate:(id)a2 duplicationResults:(id *)a3 cancelOrExtendTimeoutBlock:(id /* block */)a4;
- (id)_duplicateFaceCSNsOnAssetForPerson:(id)a0 faceCSNsOnPerson:(id)a1 faceByCSNCache:(id)a2;
- (void)_enumeratePersonsWithLocalIdentifiers:(id)a0 fetchOptions:(id)a1 personCache:(id)a2 usingBlock:(id /* block */)a3;
- (id)_faceToFaceCountMapForFaces:(id)a0;
- (id)_fetchResultForGroupedFacesWithClusterSequenceNumberSetToZeroInPhotoLibrary:(id)a0;
- (id)_fetchResultForUngroupedFacesWithNonZeroClusterSequenceNumberInPhotoLibrary:(id)a0;
- (void)_getMergeCandidates:(id)a0 invalidMergeCandidates:(id)a1 forPersonsWithLocalIdentifiers:(id)a2;
- (void)_getRejectedTrainingFaceCSNs:(id *)a0 rejectedFaceCSNs:(id *)a1 rejectedPersonLocalIdentifiers:(id *)a2 forPerson:(id)a3 faceInFaceGroupByCSN:(id)a4;
- (void)_getTrainingFacesByPerson:(id *)a0 confirmedFaceCSNs:(id *)a1 faceCSNsByPerson:(id *)a2 faceCSNsByMigratedPerson:(id *)a3 faceCSNsByQuickClassificationPerson:(id *)a4 mergeCandidates:(id *)a5 invalidMergeCandidates:(id *)a6 rejectedPersonsByPerson:(id *)a7 faceInFaceGroupByCSN:(id *)a8 inFaces:(id)a9 personCache:(id)a10 cancelOrExtendTimeoutBlock:(id /* block */)a11;
- (double)_keyFacePortraitFactorCoefficient;
- (double)_keyFaceSunglassesFactorCoefficient;
- (double)_keyFaceWeightingFactorCoefficient;
- (unsigned long long)_level0ClusterIdForFaceCSN:(unsigned long long)a0 level0Clusters:(id)a1;
- (id)_localIdentifiersOfUnverifiedPersonsAssociatedWithFaceGroups:(id)a0 cancelOrExtendTimeoutBlock:(id /* block */)a1;
- (void)_processNewlyClusteredFaceCropsInFaceGroups:(id)a0 cancelOrExtendTimeoutBlock:(id /* block */)a1;
- (id)_representativenessByFaceCSNFromFaces:(id)a0 cancelOrExtendTimeoutBlock:(id /* block */)a1;
- (BOOL)_resetFaceClusterSequenceNumberOfFacesInFetchResult:(id)a0 inPhotoLibrary:(id)a1 cancelOrExtendTimeoutBlock:(id /* block */)a2 error:(id *)a3;
- (BOOL)_ungroupFaceClusterSequenceNumbers:(id)a0 cancelOrExtendTimeoutBlock:(id /* block */)a1 error:(id *)a2;
- (void)_updateFaceCSNsToAddByPerson:(id)a0 faceCSNsToRemoveByPerson:(id)a1 faceInFaceGroupByCSN:(id)a2 faceCSNsByPersonLocalIdentifier:(id)a3 faceCSNsByMigratedPersonLocalIdentifier:(id)a4 personsToUpdate:(id)a5;
- (id)bestRepresentativeFaceForPerson:(id)a0 qualityMeasureByFace:(id)a1 candidateFaces:(id)a2 cancelOrExtendTimeoutBlock:(id /* block */)a3;
- (void)buildPersonWithFaceClusterer:(id)a0 keyFaceUpdateBlock:(id /* block */)a1 context:(id)a2 cancelOrExtendTimeoutBlock:(id /* block */)a3;
- (BOOL)cleanupGroupedFacesWithClusterSequenceNumberSetToZero:(id /* block */)a0 error:(id *)a1;
- (BOOL)cleanupMergeCandidatesWithMinimumFaceGroupSize:(unsigned long long)a0 cancelOrExtendTimeoutBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)cleanupUngroupedFacesWithNonZeroClusterSequenceNumbers:(id /* block */)a0 error:(id *)a1;
- (unsigned long long)countOfClusteredFaces;
- (unsigned long long)countOfFaces;
- (unsigned long long)countOfUnclusteredClusteringEligibleFaces;
- (void)dedupeGraphVerifiedPersonsInFaceGroup:(id)a0 personCache:(id)a1;
- (BOOL)deleteEmptyGroupsAndReturnError:(id *)a0;
- (id)deterministicallyOrderedFaceIdentifiersWithLocalIdentifiers:(id)a0 faceprintVersion:(int)a1;
- (id)facesForClusteringWithLocalIdentifiers:(id)a0 faceprintVersion:(int)a1 groupingIdentifiers:(id)a2;
- (id)fetchFaceWithClusterSequenceNumber:(id)a0 error:(id *)a1;
- (id)fetchFaceWithLocalIdentifier:(id)a0 error:(id *)a1;
- (id)fetchPersonWithLocalIdentifier:(id)a0 options:(id)a1 error:(id *)a2;
- (id)groupedClusterSequenceNumbersOfFacesInFaceGroupsOfMinimumSize:(unsigned long long)a0 error:(id *)a1;
- (id)identifyConflictingL0Clusters:(id)a0 csnToRejectedPersonForNewlyClusteredFaces:(id)a1 csnToConfirmedPersonForNewlyClusteredFaces:(id)a2;
- (id)invalidFaceClusterSequenceNumbersInClusterSequenceNumbers:(id)a0 cancelOrExtendTimeoutBlock:(id /* block */)a1 error:(id *)a2;
- (id)keyFaceForPerson:(id)a0 qualityMeasureByFace:(id)a1 updateBlock:(id /* block */)a2;
- (BOOL)needsPersonBuilding;
- (id)otherFacesOnAssetWithFace:(id)a0 options:(id)a1;
- (id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)a0 forPersons:(id)a1 overTheYearsComputation:(BOOL)a2 updateBlock:(id /* block */)a3;
- (BOOL)persistChangesToAlgorithmicFaceGroups:(id)a0 l1ClustersByFaceCSNRepresentingFaceGroup:(id)a1 l0ClustersByFaceCSNRepresentingFaceGroup:(id)a2 faceCSNByLocalIdentifierForNewlyClusteredFaces:(id)a3 faceCSNsOfUnclusteredFaces:(id)a4 localIdentifiersOfUnclusteredFaces:(id)a5 persistenceCompletionBlock:(id /* block */)a6 cancelOrExtendTimeoutBlock:(id /* block */)a7 error:(id *)a8;
- (BOOL)removeAutoAssignedFacesFromVerifiedPersonsAndPrepareForPersonBuilding:(id)a0 cancelOrExtendTimeoutBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)resetLibraryClustersWithCancelOrExtendTimeoutBlock:(id /* block */)a0 error:(id *)a1;
- (id)unclusteredClusteringEligibleFaceLocalIdentifiers:(id *)a0;
- (BOOL)ungroupFaceClusterSequenceNumbers:(id)a0 batchSizeForUnclusteringFaces:(unsigned long long)a1 cancelOrExtendTimeoutBlock:(id /* block */)a2 error:(id *)a3;
- (BOOL)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)a0 forceUpdate:(BOOL)a1 cancelOrExtendTimeoutBlock:(id /* block */)a2 error:(id *)a3;

@end
