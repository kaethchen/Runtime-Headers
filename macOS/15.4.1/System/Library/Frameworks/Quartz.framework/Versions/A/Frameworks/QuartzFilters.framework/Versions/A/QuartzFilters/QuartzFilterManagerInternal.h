@class NSArray, QuartzFilterManager, NSPanel, QFilterViewController, NSMutableArray;

@interface QuartzFilterManagerInternal : NSObject <QFilterViewControllerDelegate> {
    NSPanel *mFilterPanel;
    NSMutableArray *mFilterArray;
    NSArray *mFilterDomains;
    NSArray *mFilterCategories;
    NSArray *mFilterObjects;
    QuartzFilterManager *mQuartzFilterManager;
    id mDelegate;
    QFilterViewController *mFilterViewController;
}

+ (id)filtersInDomains:(id)a0 Categories:(id)a1 Objects:(id)a2;
+ (id)internalForDomains:(id)a0 Categories:(id)a1 Objects:(id)a2 Manager:(id)a3;
+ (void)loadFiltersFromDirectory:(id)a0 filterArray:(id)a1;
+ (void)loadFiltersFromLibrary:(id)a0 filterArray:(id)a1;
+ (BOOL)writeFilterXML:(id)a0 toURL:(id)a1;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)submenuAction:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (id)currentFilter;
- (id)addFilterToRegistry:(id)a0 properties:(id)a1;
- (void)_coalescedSaveFilter:(id)a0;
- (id)actionMenuFilter:(id)a0;
- (id)currentFilterURL;
- (void)filterNotification:(id)a0 type:(int)a1 info:(void *)a2;
- (id)filterPanel;
- (id)filterView;
- (id)filterViewController;
- (id)filterViewController:(id)a0 addFilterToRegistry:(id)a1 withProperties:(id)a2;
- (void)filterViewController:(id)a0 didAddFilter:(id)a1;
- (void)filterViewController:(id)a0 didModifyFilter:(id)a1;
- (void)filterViewController:(id)a0 didRemoveFilter:(id)a1;
- (void)filterViewController:(id)a0 didSelectFilter:(id)a1;
- (void)filterViewController:(id)a0 removeFilter:(id)a1 withCompletion:(id /* block */)a2;
- (id)importFilter:(id)a0;
- (id)initWithDomains:(id)a0 Categories:(id)a1 Objects:(id)a2 Manager:(id)a3;
- (void)notifySelectionDidChange;
- (id)quartzFilterManager;
- (BOOL)reallySaveFilter:(id)a0 notification:(id)a1;
- (void)removeFilter:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeFilterFile:(id)a0 completion:(id /* block */)a1;
- (id)saveFilter:(id)a0;
- (BOOL)saveFilter:(id)a0 notification:(id)a1;
- (BOOL)selectFilterByURL:(id)a0;
- (id)writeFilter:(id)a0 toLocation:(id)a1;

@end
