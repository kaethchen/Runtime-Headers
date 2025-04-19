@class NSTextField, AMAction, NSSearchField, NSTabView, NSArrayController, AMResultsTableView, NSSlider, NSTextView, IKImageBrowserView, AMImageView, NSMutableArray, NSSegmentedControl;

@interface AMResultsViewController : NSViewController {
    NSMutableArray *_results;
}

@property (weak, nonatomic) NSTabView *_tabView;
@property (weak, nonatomic) NSSegmentedControl *_segmentedControl;
@property (weak, nonatomic) NSSearchField *_searchField;
@property (weak, nonatomic) IKImageBrowserView *_imageBrowserView;
@property (weak, nonatomic) NSSlider *_imageZoomSlider;
@property (weak, nonatomic) AMImageView *_largerMan;
@property (weak, nonatomic) AMImageView *_smallerMan;
@property (weak, nonatomic) AMResultsTableView *_resultsTableView;
@property (weak, nonatomic) NSTextField *_resultsCountField;
@property (weak, nonatomic) NSTextView *_oldViewResultsView;
@property (weak, nonatomic) NSArrayController *_resultsController;
@property (nonatomic) long long selectedSegment;
@property (retain, nonatomic) AMAction *action;
@property (nonatomic) double zoomValue;
@property (readonly, nonatomic) NSMutableArray *results;
@property (readonly, weak, nonatomic) IKImageBrowserView *imageBrowserView;
@property (readonly, weak, nonatomic) NSTabView *tabView;
@property (readonly, weak, nonatomic) NSSlider *imageZoomSlider;
@property (nonatomic, getter=isShowingResultsView, setter=setShowingResultsView:) BOOL showingResultsView;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)tabView:(id)a0 didSelectTabViewItem:(id)a1;
- (BOOL)tableView:(id)a0 writeRowsWithIndexes:(id)a1 toPasteboard:(id)a2;
- (void)clearResults;
- (id)imageBrowser:(id)a0 itemAtIndex:(unsigned long long)a1;
- (unsigned long long)imageBrowser:(id)a0 writeItemsAtIndexes:(id)a1 toPasteboard:(id)a2;
- (unsigned long long)numberOfItemsInImageBrowser:(id)a0;
- (void)search:(id)a0;
- (BOOL)_createTextView;
- (BOOL)_createListView;
- (BOOL)_createIconView;
- (id)_lastActionOutputTypes;
- (void)_updateResultsForOutputChangedOfAction:(id)a0;
- (void)createResults;
- (void)setResultsViewControlsEnabled:(BOOL)a0;
- (id)stringValueForOutputItemsAtIndexes:(id)a0;
- (void)updateResultsCount;

@end
