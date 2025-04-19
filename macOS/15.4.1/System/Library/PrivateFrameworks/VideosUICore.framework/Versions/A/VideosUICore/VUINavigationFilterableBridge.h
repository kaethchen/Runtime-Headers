@class NSString, NSView, NSViewController, NSArray;

@interface VUINavigationFilterableBridge : NSObject <AMPFilterableViewModel>

@property (weak, nonatomic) NSViewController *bridgedController;
@property (nonatomic) BOOL contentIsScrolled;
@property (readonly, nonatomic) BOOL filteringIsEnabled;
@property (readonly, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *filterString;
@property (readonly, nonatomic) NSString *filterStatusString;
@property (readonly, nonatomic) BOOL showDownloadedSongsMessage;
@property (readonly, nonatomic) BOOL showFilterBarBackground;
@property (readonly, nonatomic) NSView *secondaryControlView;
@property (readonly, nonatomic) BOOL goBackButtonEnabled;
@property (readonly, nonatomic) NSArray *supportedFilterCategories;
@property (nonatomic) unsigned long long currentFilterCategories;
@property (readonly, copy, nonatomic) id /* block */ showAllViewOptionsBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingSecondaryControlView;
+ (id)keyPathsForValuesAffectingShowFilterBarBackground;
+ (id)bridgeForController:(id)a0;

- (void).cxx_destruct;
- (void)doShowAllSongs;
- (id)_barButtonViewFromItem:(id)a0;
- (id)_createStackViewAddSubViews:(id)a0;

@end
