@class NSString, NSArray, ICAutoCompleteSuggestionsTableView, NSVisualEffectView, NSDictionary, ICAutoCompleteSuggestionsTableViewScrollView, NSLayoutConstraint, NSWindow;
@protocol ICAutoCompleteSuggestionsViewControllerDelegate;

@interface ICAutoCompleteSuggestionsViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource, ICAutoCompleteSuggestionsTableViewDelegate>

@property (weak, nonatomic) ICAutoCompleteSuggestionsTableView *tableView;
@property (weak, nonatomic) ICAutoCompleteSuggestionsTableViewScrollView *scrollView;
@property (weak, nonatomic) NSVisualEffectView *visualEffectView;
@property (weak, nonatomic) NSLayoutConstraint *scrollViewHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *visualEffectLeadingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *visualEffectTopConstraint;
@property (weak, nonatomic) NSLayoutConstraint *visualEffectTrailingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *visualEffectBottomConstraint;
@property (nonatomic) BOOL isEmptyState;
@property (weak, nonatomic) id<ICAutoCompleteSuggestionsViewControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) double maxHeight;
@property (readonly, nonatomic) double heightForContent;
@property (retain, nonatomic) NSWindow *window;
@property (retain, nonatomic) NSDictionary *customTableViewNibs;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) long long selectedRow;
@property (nonatomic) BOOL isShowingNewNoteRow;
@property (nonatomic) BOOL hasNotesSectionHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (void)tableView:(id)a0 didAddRowView:(id)a1 forRow:(long long)a2;
- (BOOL)acceptsFirstResponder;
- (void)hide;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)showForView:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (BOOL)tableView:(id)a0 isGroupRow:(long long)a1;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidLoad;
- (void)windowDidResignKey:(id)a0;
- (void)showForView:(id)a0 width:(double)a1 offset:(struct CGPoint { double x0; double x1; })a2 isRTL:(BOOL)a3;
- (void)adjustScrollViewHeightConstraintIfNecessary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autoCompleteWindowFrameForView:(id)a0 width:(double)a1 offset:(struct CGPoint { double x0; double x1; })a2 isRTL:(BOOL)a3;
- (BOOL)confirmSelectionIfPossible;
- (BOOL)confirmSelectionInTableView:(id)a0;
- (void)ensureConsistentWidthForRightLabelIfNecessary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })insetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)loadCustomTableViewNibsIfNecessary;
- (void)presentWindow:(BOOL)a0 offset:(struct CGPoint { double x0; double x1; })a1 view:(id)a2 width:(double)a3;
- (BOOL)selectItemIfPossible:(id)a0;
- (BOOL)selectNextValidRowIfPossible;
- (BOOL)selectPreviousValidRowIfPossible;
- (BOOL)shouldShowDivider;
- (BOOL)shouldShowSectionHeaders;
- (void)showForView:(id)a0 width:(double)a1;
- (void)showForView:(id)a0 width:(double)a1 offset:(struct CGPoint { double x0; double x1; })a2;
- (void)showPlaceholder:(id)a0 forView:(id)a1 width:(double)a2 offset:(struct CGPoint { double x0; double x1; })a3;
- (void)tableViewDidConfirmSelection:(id)a0;

@end
