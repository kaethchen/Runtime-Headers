@class NSArray, GKSearchBar;

@interface GKSearchBarView : NSUICollectionReusableView

@property (retain, nonatomic) NSArray *searchBarConstraints;
@property (retain, nonatomic) GKSearchBar *searchBar;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)a0;
- (void)searchTextChanged:(id)a0;

@end
