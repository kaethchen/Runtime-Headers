@interface PSIAssetTranslator : NSObject

+ (void)_appendGEODataToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendPet:(id)a0 fetchHelper:(id)a1 toAsset:(id)a2;
+ (void)_appendAssetTextDataToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendAudioClassificationToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendBusinessCategories:(id)a0 toAsset:(id)a1;
+ (void)_appendBusinessNames:(id)a0 toAsset:(id)a1;
+ (void)_appendContributorToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendDateCreatedToAsset:(id)a0 indexingContext:(id)a1 withSynonyms:(id)a2 forAsset:(id)a3;
+ (void)_appendExifDataToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendFavoriteToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendFilenameToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendGraphDataToAsset:(id)a0 forMomentFromFetchHelper:(id)a1;
+ (void)_appendHolidays:(id)a0 toAsset:(id)a1;
+ (void)_appendHomeToAsset:(id)a0;
+ (void)_appendHumanActionsToAsset:(id)a0 forAsset:(id)a1 fetchHelper:(id)a2;
+ (void)_appendKeywords:(id)a0 toAsset:(id)a1;
+ (void)_appendLibraryScopeToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendMeanings:(id)a0 withSynonyms:(id)a1 toAsset:(id)a2;
+ (void)_appendMediaTypesToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendOCRTextForAsset:(id)a0 documentObservation:(id)a1;
+ (void)_appendPerson:(id)a0 fetchHelper:(id)a1 toAsset:(id)a2 withPersonSynonyms:(id)a3;
+ (void)_appendPersonsAndPetsToAsset:(id)a0 withPersonSynonyms:(id)a1 forAsset:(id)a2 fetchHelper:(id)a3;
+ (void)_appendPrivateEncryptedComputeScenes:(id)a0 forAsset:(id)a1 fetchHelper:(id)a2 csuTaxonomyObjectStore:(id)a3 locale:(id)a4;
+ (void)_appendPublicEventCategories:(id)a0 withSynonyms:(id)a1 toAsset:(id)a2;
+ (void)_appendPublicEventStrings:(id)a0 toAsset:(id)a1 forSearchIndexCategory:(unsigned long long)a2;
+ (void)_appendSavedFromAppToAsset:(id)a0 forAsset:(id)a1;
+ (void)_appendSceneClassificationsToAsset:(id)a0 sceneTaxonomyProvider:(id)a1 forAsset:(id)a2 fetchHelper:(id)a3;
+ (void)_appendSocialGroupIdentifiers:(id)a0 toAsset:(id)a1;
+ (void)_appendStickerSuggestionsToAsset:(id)a0 fetchHelper:(id)a1 sceneTaxonomyProvider:(id)a2 forAsset:(id)a3;
+ (void)_appendUtilityTypesToAsset:(id)a0 forAsset:(id)a1 indexingContext:(id)a2;
+ (void)_appendWorkText:(id)a0 toAsset:(id)a1;
+ (BOOL)_containsPersonWithSceneTaxonomyProvider:(id)a0 forAsset:(id)a1;
+ (id)_nameForContributor:(id)a0;
+ (id)psiAssetFromAsset:(id)a0 fetchHelper:(id)a1 propertySets:(unsigned long long)a2 graphData:(id)a3 indexingContext:(id)a4 documentObservation:(id)a5;
+ (id)psiAssetFromAsset:(id)a0 graphData:(id)a1 indexingContext:(id)a2 documentObservation:(id)a3;

@end
