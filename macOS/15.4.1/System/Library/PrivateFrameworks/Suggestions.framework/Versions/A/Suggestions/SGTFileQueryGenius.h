@class NSDictionary;

@interface SGTFileQueryGenius : SGTQueryGenius

@property (copy) NSDictionary *imagesForTags;

+ (void)initialize;
+ (id)contentCategory;
+ (id)_attributeToScope;
+ (id)applicationsCategory;
+ (id)displayNameForScope:(long long)a0;
+ (id)downloadedFromCategory;
+ (id)filenameCategory;
+ (id)filenameTypingScopeCategory;
+ (id)folderCategory;
+ (id)kindCategory;
+ (id)sentByCategory;
+ (id)sharedByCategory;
+ (id)tagCategory;
+ (id)tokenTitleForScope:(long long)a0 suggestion:(id)a1;
+ (id)topicCategory;
+ (void)updateSuggestionForLegacyLabels:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)identifier;
- (id)allAttributeNamesForSuggestion:(id)a0;
- (id)displayNameForScope:(long long)a0;
- (id)imageForSuggestion:(id)a0;
- (long long)scopeForAttributeName:(id)a0;
- (id)suggester:(id)a0 additionalSuggestionsForInput:(id)a1;
- (id)suggester:(id)a0 filterSuggestion:(id)a1 fromItem:(id)a2 forInput:(id)a3;
- (id)suggester:(id)a0 filterSuggestions:(id)a1 forInput:(id)a2;
- (void)suggester:(id)a0 willStartProcessingResultsForInput:(id)a1;
- (void)suggester:(id)a0 willStartSearchingSuggestionsForInput:(id)a1;
- (void)suggesterBecomesIdle:(id)a0;
- (id)suggestionForString:(id)a0;

@end
