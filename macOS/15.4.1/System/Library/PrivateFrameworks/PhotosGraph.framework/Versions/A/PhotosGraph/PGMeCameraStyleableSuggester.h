@interface PGMeCameraStyleableSuggester : PGMeWallpaperSuggester

+ (id)suggestionTypes;
+ (BOOL)filtersForTopSuggestions;
+ (id)suggestionSubtypes;

- (void)setupFilteringContexts;

@end
