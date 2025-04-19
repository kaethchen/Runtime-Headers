@class NSDictionary;

@interface ATXComplicationSuggestionParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)alwaysUseFallbackSets;
- (id)appsToPriorsMapping;
- (id)fallbackSetForLandscape;
- (id)fallbackSetsForSet1;
- (id)fallbackSetsForSet2;
- (id)fallbackSetsForSet3;
- (id)inlineComplicationsToPriorsMapping;
- (id)modularComplicationsToPriorsMapping;
- (BOOL)showPreviewsInPosterGallery;

@end
