@class NSString, NSArray;

@interface PLSearchEntity : PLGraphNodeContainer

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic) double rankingScore;
@property (retain, nonatomic) NSArray *synonyms;
@property (readonly, nonatomic) NSString *synonymsString;

+ (id)newNodeContainerWithManagedObjectContext:(id)a0;
+ (id)personRelationDictionaryForRelationWithType:(short)a0 label:(id)a1 confidence:(double)a2 relatedPersonUUID:(id)a3;
+ (void)removePersonRelationsMatchingDictionaries:(id)a0 onPerson:(id)a1;
+ (void)setAssetSearchEntitiesFromDictionaries:(id)a0 onMoment:(id)a1;
+ (void)setPersonRelationsFromDictionaries:(id)a0 onPerson:(id)a1;
+ (void)setSearchRankingsFromDictionaries:(id)a0 inLibrary:(id)a1;
+ (void)prepareForDeletingOutgoingEdge:(id)a0;
+ (void)_cleanUpStaleSearchRankingsNotIn:(id)a0 inLibrary:(id)a1;
+ (void)_collectLabels:(id *)a0 identifiers:(id *)a1 types:(id *)a2 fromDictionaries:(id)a3;
+ (void)_disconnectNodes:(id)a0 fromMoment:(id)a1;
+ (id)_fetchEdgesForNodes:(id)a0 toMoment:(id)a1;
+ (id)_fetchEdgesForPersonRelationsOnPerson:(id)a0;
+ (id)_fetchEdgesForPersonRelationsOnSearchEntityForPerson:(id)a0;
+ (id)_fetchGraphNodesForOIDs:(id)a0 inContext:(id)a1;
+ (id)_fetchMeOrSelfEdgeForPerson:(id)a0;
+ (id)_fetchMeOrSelfSearchEntityForPerson:(id)a0;
+ (id)_fetchSearchEntityNodesForMoment:(id)a0;
+ (id)_fetchSearchEntityWithLabel:(id)a0 type:(unsigned long long)a1 identifier:(id)a2 inContext:(id)a3;
+ (void)_findMatchingNodes:(id *)a0 andSearchEntityDictionariesByOID:(id *)a1 inSearchEntityDictionaries:(id)a2 inContext:(id)a3;
+ (id)_groupAndRemoveMatchingDictionariesInSearchEntityDictionaries:(id)a0 byNodeOIDFromValuesByNodeOID:(id)a1;
+ (id)_labelIDWithCode:(unsigned int)a0 inContext:(id)a1;
+ (id)_labelWithCode:(unsigned int)a0 inContext:(id)a1;
+ (id)_newNodeContainerWithManagedObjectContext:(id)a0 dictionary:(id)a1;
+ (void)_nodeValuesByNode:(id)a0 into:(id)a1;
+ (id)_personRelationLabelIDsInContext:(id)a0;
+ (id)_predicateForSearchEntityEdgesToMoment:(id)a0;
+ (void)_removeAllEdgesWithPredicate:(id)a0 inContext:(id)a1;
+ (void)_removeAllPersonRelationEdgesFromNode:(id)a0;
+ (void)_removeAllPersonRelationEdgesFromPerson:(id)a0;
+ (void)_removeAllSearchEntityEdgesFromMoment:(id)a0;
+ (void)_setConfidence:(double)a0 onEdge:(id)a1;
+ (void)_setDateIntervalStart:(id)a0 end:(id)a1 onEdge:(id)a2;
+ (id)decodeIdentifierString:(id)a0 intoLabel:(id *)a1 type:(unsigned long long *)a2 outIdentifier:(id *)a3;
+ (BOOL)enumerateAssetSearchEntitiesForLibrary:(id)a0 error:(id *)a1 withBlock:(id /* block */)a2;
+ (void)enumerateAssetSearchEntitiesForMoment:(id)a0 withBlock:(id /* block */)a1;
+ (void)enumerateAssetSearchEntityPersonRelationsForPerson:(id)a0 withBlock:(id /* block */)a1;
+ (void)enumeratePersonRelationsForPerson:(id)a0 withBlock:(id /* block */)a1;
+ (id)fetchSearchEntityWithEncodedIdentifierString:(id)a0 inLibrary:(id)a1;
+ (id)predicateForSearchEntitySourceNodes;
+ (void)prepareForDeletionWithNode:(id)a0;
+ (id)synonymsFromSynonymsString:(id)a0;
+ (id)synonymsStringFromSynonyms:(id)a0;
+ (void)willInsertOutgoingEdge:(id)a0;
+ (void)willSaveWithNode:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setType:(unsigned long long)a0;
- (void)setIdentifier:(id)a0;
- (void)setLabel:(id)a0;
- (double)confidenceForMoment:(id)a0;
- (id)dateIntervalForMoment:(id)a0;
- (id)_fetchSearchEntityEdgeToMoment:(id)a0;
- (id)_insertMomentEdgeForMoment:(id)a0 confidence:(double)a1 startDate:(id)a2 endDate:(id)a3;
- (id)_insertRelationEdgeForPerson:(id)a0 relationType:(short)a1 confidence:(double)a2;
- (BOOL)_matchesLabel:(id)a0 type:(unsigned long long)a1 identifier:(id)a2;
- (id)_predicateForSearchEntityEdgeToMoment:(id)a0;
- (void)_updateChangeFlagForMoments;
- (void)_updateChangeFlagForProperties;
- (void)_updateChangeFlagForRelations;
- (id)descriptionForMoment:(id)a0;
- (id)encodedIdentifierString;
- (id)fetchAllMomentsWithError:(id *)a0;
- (void)setSynonymsString:(id)a0;

@end
