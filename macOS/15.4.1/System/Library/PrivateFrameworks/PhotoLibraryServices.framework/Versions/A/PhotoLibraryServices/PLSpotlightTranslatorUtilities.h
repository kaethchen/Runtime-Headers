@interface PLSpotlightTranslatorUtilities : NSObject

+ (id)contentRatingFromScenes:(id)a0 algorithmVersion:(short)a1;
+ (id)spotlightAudioClassificationsFromScenes:(id)a0;
+ (id)spotlightScenesFromDetectionTraits:(id)a0;
+ (id)spotlightScenesFromScenes:(id)a0 sceneTaxonomy:(id)a1;
+ (long long)CSSceneTypeForPLSceneClassificationType:(long long)a0;
+ (id)seasonsForDate:(id)a0 calendar:(id)a1;
+ (id)spotlightPersonsFromPLPersons:(id)a0;
+ (void)tagCSSearchableItem:(id)a0 entityInstanceIdentifier:(id)a1 typeIdentifier:(id)a2 typeDisplayName:(id)a3 displayTitle:(id)a4 displaySubtitle:(id)a5;
+ (id)textFromGraphData:(id)a0 searchIndexCategoryMask:(unsigned long long)a1;
+ (id)textFromGraphData:(id)a0 searchIndexCategoryMask:(unsigned long long)a1 synonymSearchIndexCategoryMask:(unsigned long long)a2 synonyms:(id)a3;

@end
