@class NSString, NSView, NSArray, NSObject;
@protocol AMPFilterableViewModel;

@interface AMPFilterableViewModelForwarder : NSObject <AMPFilterableViewModel>

@property (nonatomic) BOOL filteringIsEnabled;
@property (retain, nonatomic) NSObject<AMPFilterableViewModel> *forwardingTarget;
@property (copy, nonatomic) NSString *filterString;
@property (readonly, nonatomic) NSString *filterStatusString;
@property (readonly, nonatomic) BOOL showDownloadedSongsMessage;
@property (readonly, nonatomic) BOOL showFilterBarBackground;
@property (readonly, nonatomic) NSView *secondaryControlView;
@property (readonly, nonatomic) BOOL goBackButtonEnabled;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *supportedFilterCategories;
@property (nonatomic) unsigned long long currentFilterCategories;
@property (readonly, copy, nonatomic) id /* block */ showAllViewOptionsBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingCurrentFilterCategories;
+ (id)keyPathsForValuesAffectingCurrentSecondarySortOption;
+ (id)keyPathsForValuesAffectingCurrentSortDirection;
+ (id)keyPathsForValuesAffectingCurrentSortOption;
+ (id)keyPathsForValuesAffectingCurrentViewByOptionValue;
+ (id)keyPathsForValuesAffectingEditBarIsEditing;
+ (id)keyPathsForValuesAffectingEditBarRedoEnabled;
+ (id)keyPathsForValuesAffectingEditBarSaveEnabled;
+ (id)keyPathsForValuesAffectingEditBarUndoEnabled;
+ (id)keyPathsForValuesAffectingFilterString;
+ (id)keyPathsForValuesAffectingGoBackButtonEnabled;
+ (id)keyPathsForValuesAffectingSecondaryControlView;
+ (id)keyPathsForValuesAffectingShowAllViewOptionsBlock;
+ (id)keyPathsForValuesAffectingShowDownloadedSongsMessage;
+ (id)keyPathsForValuesAffectingShowFilterBarBackground;
+ (id)keyPathsForValuesAffectingSupportedFilterCategories;
+ (id)keyPathsForValuesAffectingSupportedSortOptions;

- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (id)init;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)getViewByTarget;
- (long long)currentSecondarySortOption;
- (int)currentSortDirection;
- (long long)currentSortOption;
- (long long)currentViewByOptionValue;
- (void)doEditBarCancelAction;
- (void)doEditBarRedoAction;
- (void)doEditBarSaveAction;
- (void)doEditBarUndoAction;
- (void)doGoBackAction;
- (void)doShowAllSongs;
- (BOOL)editBarIsEditing;
- (BOOL)editBarRedoEnabled;
- (BOOL)editBarSaveEnabled;
- (id)editBarTarget;
- (BOOL)editBarUndoEnabled;
- (id)getSortableTarget;
- (id)propertyKeysForViewSpy;
- (void)setCurrentSecondarySortOption:(long long)a0;
- (void)setCurrentSortDirection:(int)a0;
- (void)setCurrentSortOption:(long long)a0;
- (void)setCurrentViewByOptionValue:(long long)a0;
- (id)supportedSecondarySortOptions;
- (id)supportedSortOptions;
- (id)supportedViewByOptions;

@end
