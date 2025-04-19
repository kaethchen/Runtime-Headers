@class SearchUIPersonHeaderViewController, NSString, SFPersonHeaderCardSection, SearchUIPersonHeaderBoxView;

@interface SearchUIPersonHeaderCardSectionView : SearchUICardSectionView <CNContactHeaderViewControllerDelegate>

@property (retain) SearchUIPersonHeaderViewController *viewController;
@property (retain) SearchUIPersonHeaderBoxView *boxView;
@property (retain) SFPersonHeaderCardSection *section;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)defaultSeparatorStyleForRowModel:(id)a0;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void).cxx_destruct;
- (id)contact;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (void)contactHeaderViewController:(id)a0 didPerformActionOfType:(id)a1 fromDisambiguation:(BOOL)a2;
- (void)contactHeaderViewController:(id)a0 willPresentDisambiguationUIForActionType:(id)a1;
- (id)setupContentView;
- (id)embeddedViewController;
- (void)sendCommandEngagementFeedbackWithType:(id)a0 didSelectFromOptionsMenu:(BOOL)a1 didDisplayHandleOptions:(BOOL)a2;
- (void)updateWithContact:(id)a0 person:(id)a1;
- (void)updateWithPerson:(id)a0;
- (void)updateWithRowModel:(id)a0;

@end
