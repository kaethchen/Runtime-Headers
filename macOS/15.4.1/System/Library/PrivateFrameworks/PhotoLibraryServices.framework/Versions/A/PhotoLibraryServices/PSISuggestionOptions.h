@class NSIndexSet;

@interface PSISuggestionOptions : NSObject <NSCopying>

@property (nonatomic) BOOL _wantsUnscopedSuggestions;
@property (readonly, nonatomic) unsigned long long searchSuggestionType;
@property (readonly, nonatomic) unsigned long long searchSuggestionLimit;
@property (nonatomic) BOOL enableNextTokenSuggestions;
@property (nonatomic) unsigned long long suggestionResultTypes;
@property (nonatomic) BOOL limitSuggestionsToExactTextMatches;
@property (nonatomic) unsigned long long locationInQueryStringForSuggestionGeneration;
@property (retain, nonatomic) NSIndexSet *suggestionCategories;
@property (nonatomic) unsigned long long minNumberOfResultsForNextTokenGeneration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_suggestionCategoriesTypeDescription;
- (id)initWithSuggestionType:(unsigned long long)a0 suggestionLimit:(unsigned long long)a1;
- (BOOL)optionsWantSuggestionsForAssets;
- (BOOL)optionsWantSuggestionsForCollections;

@end
