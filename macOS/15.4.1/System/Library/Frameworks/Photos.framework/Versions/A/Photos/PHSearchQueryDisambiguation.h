@interface PHSearchQueryDisambiguation : NSObject

+ (id)_locationIndexEntitiesForLocationName:(id)a0 expansionStringValues:(id)a1 allowedSearchIndexCategories:(id)a2 matchOptions:(unsigned long long)a3 photoLibrary:(id)a4;
+ (id)_personEntitiesByLookupIdentifierForPersonNames:(id)a0 entityMatchOptions:(unsigned long long)a1 photoLibrary:(id)a2;
+ (id)_personEntitiesByLookupIdentifierForPersonNames:(id)a0 photoLibrary:(id)a1;
+ (id)_personEntitiesByLookupIdentifierForPersonRelationships:(id)a0 photoLibrary:(id)a1;
+ (id)allowedSearchIndexCategoriesForMemoriesLocationPromptBinding;
+ (id)locationSearchIndexCategories;
+ (id)performDisambiguationForLocationName:(id)a0 expansionStringValues:(id)a1 allowedSearchIndexCategories:(id)a2 photoLibrary:(id)a3;
+ (id)performDisambiguationForPersonName:(id)a0 expansionStringValuesByCSAttributedEntityType:(id)a1 photoLibrary:(id)a2;
+ (id)performLocationDisambiguationForFullQueryString:(id)a0 allowedSearchIndexCategories:(id)a1 maxNumberOfResults:(unsigned long long)a2 photoLibrary:(id)a3;
+ (id)personEntitiesByLookupIdentifierForPersonNames:(id)a0 photoLibrary:(id)a1;
+ (id)personRelationshipSearchIndexCategories;
+ (id)personSearchLocationIndexCategories;

@end
