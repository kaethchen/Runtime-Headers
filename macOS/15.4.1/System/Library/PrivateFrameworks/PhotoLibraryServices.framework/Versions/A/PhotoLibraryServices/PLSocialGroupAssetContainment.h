@class PLSocialGroup, NSManagedObjectContext, NSSet;

@interface PLSocialGroupAssetContainment : NSObject {
    NSSet *_members;
}

@property (class) double assetContainmentSmallFaceThreshold;
@property (class) double assetContainmentLargeFaceThreshold;
@property (class) double assetContainmentSmallTorsoThreshold;

@property (readonly, nonatomic) PLSocialGroup *socialGroup;
@property (readonly, nonatomic) NSManagedObjectContext *context;

+ (id)_batchAssetIDs:(id)a0;
+ (int)_detectedFaceSizeFromBodyHeight:(double)a0 bodyWidth:(double)a1 size:(double)a2;
+ (id)_generateFaceSizesByPersonIDByAssetIDForAssetIDs:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (BOOL)_updateAssetPersonEdgesForAssetIDsInBatch:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (BOOL)_updateAssetPersonEdgesForAssetWithID:(id)a0 usingPersonFaceSizes:(id)a1 existingEdges:(id)a2 inContext:(id)a3 error:(id *)a4;
+ (void)_updateEdgeLabelsIfNeededForEdge:(id)a0 expectedLabel:(id)a1;
+ (double)assetContainmentMinPeopleInMomentRatio;
+ (BOOL)updateAndSaveAssetPersonEdgesForAssetsWithIDs:(id)a0 inContext:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)assetIDsIncludedInExclusiveContainment:(id)a0 error:(id *)a1;
- (id)initWithPersons:(id)a0 inContext:(id)a1;
- (id)initWithSocialGroup:(id)a0;
- (id)runAssetContainmentWithMinimumNumberOfSharedAssets:(unsigned long long)a0 error:(id *)a1;
- (id)_assetIDsPassingContainmentRequirementsFromAssetPersonEdgeDictionaries:(id)a0 potentialAssetIDs:(id)a1 personIDsByAssetID:(id)a2 error:(id *)a3;
- (id)_assetIDsWithLargeMemberFacesFromAssetPersonEdgeDictionaries:(id)a0 containmentProgress:(id)a1 error:(id *)a2;
- (id)_assetIDsWithRequiredPersonsPresentWithAssetIDs:(id)a0 minimumNumberOfSharedAssets:(unsigned long long)a1 error:(id *)a2;
- (id)_assetPersonEdgeDictionaries:(id *)a0 forAssetIDs:(id)a1;
- (id)_containmentResultFromPersonIDsByAssetID:(id)a0 exclusivePotentialAssetIDs:(id)a1 error:(id *)a2;
- (id)_edgeIDSetFromAssetPersonEdgeDictionaries:(id)a0;
- (id)_exclusivePotentialAssetIDsFromAssetPersonEdgeDictionaries:(id)a0 potentialInclusiveAssetIDs:(id)a1 containmentProgress:(id)a2 error:(id *)a3;
- (id)_fetchEdgeIDsWithLabel:(id)a0 inEdgeIDSet:(id)a1 containmentProgress:(id)a2 error:(id *)a3;
- (id)_fetchEdgeInfosToMediumAndLargeNonMembersInPotentialAssetIDs:(id)a0 edgeInfosToSmallNonMembers:(id)a1 error:(id *)a2;
- (id)_fetchEdgeInfosToSmallNonMembersInPotentialAssetIDs:(id)a0 error:(id *)a1;
- (BOOL)_foundPersonIDsPassingContainmentRequirements:(id)a0;
- (id)_personIDsByAssetIDFromAssetPersonEdgeDictionaries:(id)a0 potentialAssetIDs:(id)a1 error:(id *)a2;
- (id)_potentialAssetIDsExcludingNonMembersFromAssetIDs:(id)a0 assetIDsWithLargeMemberFaces:(id)a1 error:(id *)a2;
- (id)_runAssetContainmentOnAssetIDs:(id)a0 minimumNumberOfSharedAssets:(unsigned long long)a1 error:(id *)a2;
- (id)runAssetContainment:(id *)a0;
- (id)runAssetContainmentOnAssetIDs:(id)a0 error:(id *)a1;

@end
