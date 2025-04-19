@class NSArray, NSDictionary, ATXComplicationSuggestionParameters, NSLocale;
@protocol ATXFaceSuggestionParameters, ATXFaceGalleryLayoutGeneratorComplicationProviding, ATXFaceGalleryLayoutGeneratorComplicationDescriptorProviding;

@interface ATXFaceGalleryLayoutGenerator : NSObject {
    id<ATXFaceGalleryLayoutGeneratorComplicationProviding> _complicationProvider;
    id<ATXFaceGalleryLayoutGeneratorComplicationDescriptorProviding> _complicationDescriptorProvider;
    id<ATXFaceSuggestionParameters> _parameters;
    BOOL _dayZero;
    NSArray *_allHeroDescriptors;
    NSArray *_allNonHeroDescriptors;
    NSDictionary *_nonHeroDescriptorsByExtensionBundleId;
    ATXComplicationSuggestionParameters *_complicationParameters;
    NSLocale *_locale;
}

@property (readonly, copy, nonatomic) NSArray *candidateFeaturedDescriptors;
@property (readonly, copy, nonatomic) NSArray *rankedFeaturedDescriptors;

+ (id)_descriptorsByDeduplicatingExtensionsInDescriptors:(id)a0;

- (void).cxx_destruct;
- (id)_candidateFeaturedDescriptors;
- (BOOL)_complicationExistsOnSystem:(id)a0;
- (BOOL)_descriptorIsEligibleForComplications:(id)a0;
- (id)_generateSectionWithWidgetDescriptorsAdditionalData:(id)a0 aggregatedAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2 assetDescriptors:(id)a3 otherParameters:(id)a4 semanticType:(long long)a5;
- (id)_generatedFeaturedPhotosSectionGivenFeaturedSection:(id)a0 widgetDescriptorsAdditionalData:(id)a1 aggregatedAppLaunchData:(id)a2 bundleIdToCompanionBundleId:(id)a3;
- (id)_generatedFeaturedSectionWithWidgetDescriptorsAdditionalData:(id)a0 aggregatedAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2;
- (id)_generatedFocusSection;
- (id)_generatedHeroSectionWithWidgetDescriptorsAdditionalData:(id)a0 aggregatedAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2 heroSectionOrder:(id)a3;
- (id)_generatedPhotoShuffleSectionWithWidgetDescriptorsAdditionalData:(id)a0 aggregatedAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2;
- (id)_inlineComplicationForDescriptor:(id)a0;
- (BOOL)_isFocusUser;
- (id)_itemFromDescriptor:(id)a0 shouldShowDisplayName:(BOOL)a1 shouldShowComplications:(BOOL)a2 systemSuggestedComplicationSet:(id)a3 systemSuggestedLandscapeComplicationSet:(id)a4;
- (id)_itemsFromDescriptors:(id)a0 widgetDescriptorsAdditionalData:(id)a1 aggregatedAppLaunchData:(id)a2 bundleIdToCompanionBundleId:(id)a3 shouldShowDisplayName:(BOOL)a4 shouldShowComplications:(BOOL)a5 limit:(id)a6;
- (id)_landscapeSetsFromLandscapeSetsDict:(id)a0;
- (id)_localizedSubtitleTextWithSemanticType:(long long)a0;
- (id)_localizedTitleForWeatherAndAstronomySection;
- (id)_localizedTitleTextWithSemanticType:(long long)a0;
- (id)_localizedTitleforOSVersionSection;
- (id)_modularComplicationsForDescriptor:(id)a0 systemSuggestionComplications:(id)a1;
- (id)_modularLandscapeComplicationsForDescriptor:(id)a0 systemSuggestionComplications:(id)a1;
- (void)_processDescriptors:(id)a0;
- (id)_shuffledSuggestableComplicationSetsWithWidgetDescriptorsAdditionalData:(id)a0 aggregatedAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2;
- (id)descriptorsToRemoveFromSectionWithSemanticType:(long long)a0 parameters:(id)a1;
- (id)generatedConfigurationWithWidgetDescriptorsAdditionalData:(id)a0 aggregatedAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2;
- (id)initWithDescriptors:(id)a0 complicationProvider:(id)a1 complicationDescriptorProvider:(id)a2 parameters:(id)a3 dayZero:(BOOL)a4 locale:(id)a5;
- (BOOL)isDescriptor:(id)a0 availableInAssetParameter:(id)a1;
- (BOOL)isDescriptorFromGalleryItem:(id)a0 availableInAssetParameter:(id)a1;
- (BOOL)shouldAddDescriptorFromExtension:(id)a0 descriptorIdentifierInAsset:(id)a1 withSemanticType:(long long)a2 assetParametersToFilterOut:(id)a3;
- (BOOL)shouldRemoveDescriptorFromFeatured:(id)a0 withDescriptorsToRemove:(id)a1;

@end
