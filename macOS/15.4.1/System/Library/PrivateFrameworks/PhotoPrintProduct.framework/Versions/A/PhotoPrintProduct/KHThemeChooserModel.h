@class NSArray, NSString, NSMutableArray, NSIndexPath;

@interface KHThemeChooserModel : NSObject

@property (readonly, nonatomic) NSMutableArray *filteredThemes;
@property (retain, nonatomic) NSArray *themes;
@property (retain, nonatomic) NSIndexPath *currentlySelectedIndexPath;
@property (readonly, nonatomic) unsigned long long numberOfSections;
@property (retain, nonatomic) NSString *filterString;
@property (readonly, nonatomic) NSArray *themesIfFiltered;

- (void).cxx_destruct;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (id)indexPathMatchingSearchString:(id)a0;
- (id)themeProviderAtIndexPath:(id)a0;

@end
