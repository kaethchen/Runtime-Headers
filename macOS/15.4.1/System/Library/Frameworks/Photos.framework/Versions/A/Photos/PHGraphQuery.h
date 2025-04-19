@class PHObject;

@interface PHGraphQuery : PHQuery

@property (retain) PHObject *graphSubject;
@property long long graphQueryType;

+ (BOOL)_shouldExcludeSocialGroupWithVerifiedType:(short)a0 inSocialGroupContext:(long long)a1;
+ (id)_graphBasePredicateWithLabelCode:(unsigned int)a0 options:(id)a1;
+ (id)_graphFetchSocialGroupsObjectIDsSortedWithOptions:(id)a0 library:(id)a1;
+ (id)_nodeTableFromSocialGroupNodeValues:(id)a0 socialGroupContext:(long long)a1;
+ (id)graphQueryForAssetsForPerson:(id)a0 options:(id)a1;
+ (id)graphQueryForExclusiveAssetsForSocialGroup:(id)a0 options:(id)a1;
+ (id)graphQueryForInclusiveAssetsForSocialGroup:(id)a0 options:(id)a1;
+ (id)graphQueryForKeyAssetForSocialGroup:(id)a0 createIfNeeded:(BOOL)a1 options:(id)a2;
+ (id)graphQueryForPersonsInSocialGroup:(id)a0 options:(id)a1;
+ (id)graphQueryForSocialGroupsWithOptions:(id)a0;
+ (id)queryForSearchEntitiesWithOptions:(id)a0;
+ (id)queryForSocialGroupsWithUUIDs:(id)a0 options:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)executeQuery;
- (BOOL)_graphQueryIntersectsWithChange:(id)a0;
- (id)_graphRefetchSocialGroup;
- (id)changeHandlingContainerIdentifier;
- (id)extraBatchFetchingArrayOptions;
- (unsigned long long)possibleChangesForChange:(id)a0;
- (BOOL)requiresFullRefetchForChange:(id)a0;
- (id)updatedQueryWithChange:(id)a0;

@end
