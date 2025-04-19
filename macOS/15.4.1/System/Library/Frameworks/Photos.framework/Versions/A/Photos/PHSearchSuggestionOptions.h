@class NSIndexSet, NSObject;
@protocol OS_dispatch_queue;

@interface PHSearchSuggestionOptions : NSObject <NSCopying>

@property (nonatomic) unsigned long long suggestionResultTypes;
@property (nonatomic) unsigned long long suggestionLimit;
@property (retain, nonatomic) NSIndexSet *suggestionCategories;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *suggestionsHandlerQueue;
@property (nonatomic) BOOL limitSuggestionsToExactTextMatches;
@property (nonatomic) BOOL wantsUnscopedSuggestions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)_suggestionCategoriesTypeDescription;

@end
