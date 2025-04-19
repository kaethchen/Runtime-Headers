@class NSArray, NSString, NSSet, PXSearchQueryOptions;

@interface PXSearchQuery : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *queryTokens;
@property (readonly, copy, nonatomic) PXSearchQueryOptions *options;
@property (readonly, copy, nonatomic) NSString *searchText;
@property (readonly, copy, nonatomic) NSArray *searchTokens;
@property (readonly, copy, nonatomic) NSSet *scopedSearchIdentifiers;
@property (readonly, copy, nonatomic) NSString *localizedQueryString;
@property (readonly, copy, nonatomic) NSString *priorityAssetUUID;
@property (readonly, nonatomic) BOOL hasSearchText;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) unsigned long long searchTermCount;
@property (readonly, nonatomic) BOOL supportsRecentSearch;
@property (readonly, nonatomic) unsigned long long searchResultTypes;
@property (readonly, nonatomic) unsigned long long searchSuggestionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithSearchText:(id)a0 searchTokens:(id)a1 scopedSearchIdentifiers:(id)a2 searchResultTypes:(unsigned long long)a3 options:(id)a4;
- (BOOL)isEquivalentToRecentSearchQuery:(id)a0;
- (id)localizedQueryStringWithQuotationDelimitersForSearchText:(BOOL)a0;

@end
