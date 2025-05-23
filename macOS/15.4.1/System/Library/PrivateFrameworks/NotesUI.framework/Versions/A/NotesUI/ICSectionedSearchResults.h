@class NSArray, NSMutableDictionary;

@interface ICSectionedSearchResults : NSObject

@property (retain, nonatomic) NSMutableDictionary *searchResultsBySection;
@property (readonly, nonatomic) NSArray *allSearchResults;
@property (nonatomic) BOOL disableAutomaticUpdates;

+ (id)newSearchResultsBySection;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (BOOL)hasSearchResults;
- (BOOL)hideSearchResultsForIdentifier:(id)a0;
- (void)noteWillBeUndeletedOrUntrashed:(id)a0;
- (void)addSearchResult:(id)a0 toSection:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (unsigned long long)addSearchResults:(id)a0 removingFoundIdentifiers:(id)a1 passingVisibilityTesting:(id)a2;
- (void)addSearchResults:(id)a0 toSection:(unsigned long long)a1;
- (unsigned long long)addSearchResultsBySection:(id)a0;
- (unsigned long long)countForSection:(unsigned long long)a0;
- (void)filterSearchResultsUsingVisiblityTesting:(id)a0;
- (BOOL)hideSearchResultsForObjects:(id)a0;
- (id)indexPathOfObject:(id)a0;
- (id)indexPathOfSearchResult:(id)a0;
- (void)noteWillBeDeletedOrTrashed:(id)a0;
- (void)objectsDidChange:(id)a0;
- (BOOL)passesVisibilityTesting:(id)a0 forSearchResult:(id)a1;
- (id)removeSearchResultAtRow:(long long)a0 section:(unsigned long long)a1;
- (BOOL)removeSearchResultWithIdentifier:(id)a0 forHiding:(BOOL)a1;
- (BOOL)removeSearchResultWithIdentifier:(id)a0 fromSection:(unsigned long long)a1 forHiding:(BOOL)a2;
- (unsigned long long)removeSearchResultsWithIdentifiers:(id)a0 forHiding:(BOOL)a1;
- (BOOL)replaceSearchResultObject:(id)a0 withObject:(id)a1;
- (id)searchResultAtRow:(long long)a0 section:(unsigned long long)a1;
- (id)searchResultObjectsInSection:(unsigned long long)a0;
- (id)searchResultSectionForSectionIndex:(unsigned long long)a0;
- (id)searchResultWithObject:(id)a0;
- (id)searchResultsBySectionForSearchResults:(id)a0 passingVisibilityTesting:(id)a1;
- (id)searchResultsInSection:(unsigned long long)a0;
- (unsigned long long)sectionForSearchResult:(id)a0;
- (void)setSearchResults:(id)a0 forSection:(unsigned long long)a1;
- (void)updateForSortTypeChange;

@end
