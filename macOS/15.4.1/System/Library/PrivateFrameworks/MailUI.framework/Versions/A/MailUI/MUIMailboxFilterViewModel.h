@class NSFormatter, NSArray, EFObservable, MUIMailboxFilterContext, MUIMailboxFilter;
@protocol EFObserver, MUIMailboxFilterProvider;

@interface MUIMailboxFilterViewModel : NSObject

@property (retain, nonatomic) NSFormatter *formatter;
@property (retain, nonatomic) id<MUIMailboxFilterProvider> provider;
@property (readonly, nonatomic) NSArray *reducedSelectedFilters;
@property (readonly, nonatomic) EFObservable<EFObserver> *selectedFiltersObservable;
@property (retain, nonatomic) NSArray *selectedFilters;
@property (nonatomic, getter=isFilterEnabled) BOOL filterEnabled;
@property (retain, nonatomic) MUIMailboxFilterContext *filterContext;
@property (nonatomic, getter=isFilterAvailable) BOOL filterAvailable;
@property (retain, nonatomic) MUIMailboxFilter *senderFilter;

- (void).cxx_destruct;
- (id)_compoundPredicateForFilters:(id)a0;
- (void)_notifySelectedFiltersObserver;
- (id)initWithProvider:(id)a0 formatter:(id)a1;
- (id)initWithProvider:(id)a0 formatter:(id)a1 selectedFilters:(id)a2 isFilteringAvailable:(BOOL)a3;
- (id)initWithProvider:(id)a0 formatter:(id)a1 selectedFilters:(id)a2 sortedFilters:(id)a3 isFilteringAvailable:(BOOL)a4;
- (id)observableSelectedFilters;
- (id)predicateForSelectedFilters;
- (void)reselectFocusFilters;
- (id)selectedFiltersDescription;

@end
