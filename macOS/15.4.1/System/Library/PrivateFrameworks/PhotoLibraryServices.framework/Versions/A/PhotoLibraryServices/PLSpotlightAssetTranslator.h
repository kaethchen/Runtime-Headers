@interface PLSpotlightAssetTranslator : NSObject

+ (id)_albumsUUIDsForAsset:(id)a0 fetchHelper:(id)a1 libraryIdentifier:(long long)a2 assetCounts:(out id *)a3;
+ (id)_memoryUUIDsForAsset:(id)a0 fetchHelper:(id)a1 libraryIdentifier:(long long)a2 assetCounts:(out id *)a3;
+ (id)_audioClassificationsForAsset:(id)a0;
+ (id)_contentRatingForAsset:(id)a0 fetchHelper:(id)a1;
+ (void)_getGraphAttributesForMomentFromFetchHelper:(id)a0 businessNames:(out id *)a1 businessCategories:(out id *)a2 eventNames:(out id *)a3 eventCategories:(out id *)a4 eventPerformers:(out id *)a5 meanings:(out id *)a6 holidays:(out id *)a7 locationKeywords:(out id *)a8;
+ (id)_highlightUUIDsForAsset:(id)a0 libraryIdentifier:(long long)a1 assetCounts:(out id *)a2;
+ (id)_humanActionScenesForAsset:(id)a0 fetchHelper:(id)a1;
+ (BOOL)_indexLocalDateCreated;
+ (id)_jsonRepresentationForCSPersons:(id)a0;
+ (id)_jsonRepresentationForScenesFromAsset:(id)a0 fetchHelper:(id)a1 indexingContext:(id)a2 isSensitiveLocation:(out BOOL *)a3;
+ (id)_libraryScopeForAsset:(id)a0;
+ (id)_locationNamesForAsset:(id)a0 graphData:(id)a1;
+ (id)_locationNamesForAsset:(id)a0 graphLocations:(id)a1;
+ (id)_mediaTypesForAsset:(id)a0;
+ (id)_nameForContributor:(id)a0;
+ (id)_partsOfDayForAsset:(id)a0;
+ (id)_partsOfWeekForAsset:(id)a0;
+ (id)_personsForAsset:(id)a0 fetchHelper:(id)a1 personSynonyms:(id)a2;
+ (id)_privateEncryptedComputeScenesForAsset:(id)a0 fetchHelper:(id)a1 csuTaxonomyObjectStore:(id)a2 locale:(id)a3 isSensitiveLocation:(out BOOL *)a4;
+ (id)_revGeoLocationNamesForAsset:(id)a0;
+ (id)_scenesForAsset:(id)a0 fetchHelper:(id)a1 sceneTaxonomyProvider:(id)a2;
+ (id)_sharedLibraryContributorsForAsset:(id)a0;
+ (id)_spotlightSearchableAttributesForAsset:(id)a0 fetchHelper:(id)a1 libraryIdentifier:(long long)a2 graphData:(id)a3 indexingContext:(id)a4 documentObservation:(id)a5 propertySets:(unsigned long long)a6 embeddingsFetcher:(id)a7;
+ (id)_utilityTypesForAsset:(id)a0 indexingContext:(id)a1;
+ (id)jsonDictionaryFromAsset:(id)a0 libraryIdentifier:(long long)a1 graphData:(id)a2 indexingContext:(id)a3 includeEmbeddingData:(BOOL)a4 redacted:(BOOL)a5;
+ (id)jsonRepresentationKeys;
+ (id)partialSpotlightSearchableItemFromAsset:(id)a0 fetchHelper:(id)a1 libraryIdentifier:(long long)a2 propertySets:(unsigned long long)a3 graphData:(id)a4 indexingContext:(id)a5 documentObservation:(id)a6 embeddingsFetcher:(id)a7;
+ (id)spotlightSearchableItemFromAsset:(id)a0 libraryIdentifier:(long long)a1 graphData:(id)a2 indexingContext:(id)a3 documentObservation:(id)a4;

@end
