@class NSTimer, NSString, SFSearchResult, NSDate, NSArray, NSMutableDictionary, NSMutableSet, NSObject, NSMutableOrderedSet;
@protocol SearchUIDragAndDropDelegate, SearchUIInteractionDelegate;

@interface SearchUIResultsTableViewController : SearchUITableViewController <NSGestureRecognizerDelegate, NSTableViewDelegate>

@property (retain) NSMutableDictionary *indexPathForRowNumber;
@property (retain) NSMutableOrderedSet *latestVisibleResultsAccountedForInFeedback;
@property double lastScrollLocation;
@property (retain, nonatomic) id monitor;
@property (retain, nonatomic) SFSearchResult *savedSelectedResult;
@property (retain, nonatomic) NSTimer *alternateDetailsTimer;
@property (retain, nonatomic) NSDate *alternateDetailsTimerFireDate;
@property unsigned long long numRows;
@property (retain, nonatomic) NSMutableSet *expandedSections;
@property (retain, nonatomic) NSMutableSet *sectionsThatHaveBeenExpanded;
@property (retain, nonatomic) NSString *queryString;
@property (retain, nonatomic) NSArray *sections;
@property (weak, nonatomic) id<SearchUIDragAndDropDelegate> dragAndDropDelegate;
@property (weak, nonatomic) NSObject<SearchUIInteractionDelegate> *interactionDelegate;
@property (nonatomic) BOOL presentsAlternateDetails;
@property (nonatomic) BOOL selectAlternateResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didScrollInScrollView:(id)a0;
- (void)keyUp:(id)a0;
- (unsigned long long)numberOfRows;
- (BOOL)tableView:(id)a0 isGroupRow:(long long)a1;
- (id)tableView:(id)a0 pasteboardWriterForRow:(long long)a1;
- (void)viewDidAppear;
- (void)viewDidLayout;
- (void)viewWillDisappear;
- (void)mouseMoved;
- (id)selectedResult;
- (id)resultForRow:(unsigned long long)a0;
- (id)selectedSection;
- (id)cellViewForRow:(unsigned long long)a0;
- (id)rowViewForRow:(unsigned long long)a0;
- (void)selectionDidChangeToRow:(long long)a0;
- (void)boundsDidChangeNotificationHandler:(id)a0;
- (BOOL)canSelectRowModel:(id)a0;
- (void)clearMonitor;
- (void)frameDidChangeNotificationHandler:(id)a0;
- (BOOL)isValidResultForFeedback:(id)a0;
- (id)sectionForRow:(unsigned long long)a0;
- (BOOL)selectAlternateResultTemporarily:(BOOL)a0;
- (void)sendEngagmentFeedbackAfterActionPerformedForRowModel:(id)a0 inSection:(id)a1 destination:(id)a2;
- (void)sendResultEngagementFeedbackForResult:(id)a0 inSection:(id)a1 withEvent:(unsigned long long)a2 destination:(unsigned long long)a3;
- (void)sendVisibleFeedbackIfNecessary;
- (void)sendVisibleResultsFeedbackForOnlyNewResults:(BOOL)a0;
- (void)sendVisibleResultsFeedbackWithVisibleResults:(id)a0 withTriggerEvent:(unsigned long long)a1;
- (void)setTableModel:(id)a0;
- (void)setTableModel:(id)a0 reloadData:(BOOL)a1;
- (void)setupMonitor;
- (id)tableModelIndexPathForRow:(unsigned long long)a0;
- (void)unselectAlternateResult;
- (void)updateAlternateDetails;
- (id)visibleResults;

@end
