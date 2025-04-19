@class NSArray, SearchUIResultsCollectionViewController, NSString;
@protocol SearchUIResultsSizingDelegate, SearchUICommandDelegate, SFFeedbackListener, SearchUIResultsInteractionDelegate;

@interface SearchUIResultsViewController : NSViewController <SearchUICollectionViewInteractionDelegate, SearchUIResultsCollectionViewSizingDelegate>

@property (retain, nonatomic) SearchUIResultsCollectionViewController *controller;
@property (copy, nonatomic) NSArray *sections;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (retain, nonatomic) NSString *queryString;
@property (nonatomic) BOOL hasSelection;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
@property (nonatomic) BOOL userInteractionEnabled;
@property (weak, nonatomic) id<SearchUIResultsInteractionDelegate> interactionDelegate;
@property (weak, nonatomic) id<SearchUIResultsSizingDelegate> sizingDelegate;
@property (nonatomic) BOOL singleClickExecutesCommands;
@property (nonatomic) BOOL selectionShouldFillWidth;
@property (nonatomic) BOOL disableEmphasizedSelection;
@property (nonatomic) BOOL dragInteractionEnabled;
@property (nonatomic) BOOL scrollEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)contentSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (void)copySelectedItem;
- (void)deselectAllResults;
- (void)didUpdateKeyboardFocusToResult:(id)a0 cardSection:(id)a1;
- (BOOL)doesIndexPathExist:(id)a0;
- (BOOL)executeSelectedResult;
- (BOOL)forwardUnhandledKeyDown:(id)a0;
- (BOOL)getInfoForSelectedItem;
- (void)moveSelectionDown;
- (BOOL)quickLookSelectedItem;
- (BOOL)removeFocus;
- (BOOL)revealSelectedItem;
- (void)selectFirstResult;
- (void)selectIndexPath:(id)a0;
- (BOOL)selectResult:(id)a0 execute:(BOOL)a1;
- (id)testingObject;

@end
