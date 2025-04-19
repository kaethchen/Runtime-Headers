@class ATXPosterDescriptorCache, NSArray, NSDictionary, NSSet, NSString, NSLocale;

@interface ATXFaceSuggestionAssetParameters : NSObject <ATXFaceSuggestionParameters> {
    ATXPosterDescriptorCache *_descriptorCache;
    NSString *_path;
    NSLocale *_locale;
}

@property (readonly, copy) NSDictionary *topLevelDictionary;
@property (readonly, copy, nonatomic) NSArray *heroSectionOrder;
@property (readonly, copy, nonatomic) NSArray *weatherAndAstronomySectionDescriptors;
@property (readonly, copy, nonatomic) NSArray *kaleidoscopeSectionDescriptors;
@property (readonly, copy, nonatomic) NSArray *emojiSectionDescriptors;
@property (readonly, copy, nonatomic) NSArray *unitySectionDescriptors;
@property (readonly, copy, nonatomic) NSArray *prideSectionDescriptors;
@property (readonly, copy, nonatomic) NSArray *collectionsSectionDescriptors;
@property (readonly, copy, nonatomic) NSArray *colorSectionDescriptors;
@property (readonly, copy, nonatomic) NSArray *sectionOrder;
@property (readonly, copy, nonatomic) NSDictionary *uprankedDateIntervals;
@property (readonly, copy, nonatomic) NSDictionary *globalPopularityScores;
@property (readonly, copy, nonatomic) NSArray *dayZeroFeaturedDescriptors;
@property (readonly, copy, nonatomic) NSArray *descriptorsToRemoveFromFeatured;
@property (readonly, copy, nonatomic) NSArray *osVersionSectionDescriptors;
@property (readonly, copy, nonatomic) NSSet *extensionBundleIdsEligibleForComplicationsInFaceGallery;
@property (readonly, copy, nonatomic) NSDictionary *unpromotableRegions;
@property (readonly, copy, nonatomic) NSDictionary *hiddenRegions;
@property (readonly, copy, nonatomic) NSDictionary *allowedDescriptorsForRegions;
@property (readonly, copy, nonatomic) NSArray *descriptorsToRemoveFromCollections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadAssetParametersDictionaryFromPath:(id)a0;
+ (id)posterDescriptorFromKey:(id)a0 withDescriptorCache:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)_currentCountryCode;
- (id)dictionaryStringToSetFromObject:(id)a0;

@end
