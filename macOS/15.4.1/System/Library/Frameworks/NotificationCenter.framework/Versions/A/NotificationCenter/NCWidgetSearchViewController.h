@class NSTextField, NSView, NSArray, NSSearchField, NSString, CALayer, NSMutableArray, NCVerticalListController, NCSearchTextItemViewController;
@protocol NCWidgetSearchViewDelegate;

@interface NCWidgetSearchViewController : NSViewController <NCWidgetListItemDelegate, NSTextFieldDelegate, NSSearchFieldDelegate> {
    CALayer *_highlightLayer;
    NSArray *_searchResults;
    NCSearchTextItemViewController *_placeholderViewController;
    NSMutableArray *_contentViewControllers;
    NSMutableArray *_searchItemViewControllers;
    NSString *_searchResultsPlaceholderString;
}

@property (nonatomic) unsigned long long selection;
@property (retain, nonatomic) NCVerticalListController *listView;
@property (weak, nonatomic) NSTextField *titleTextField;
@property (weak, nonatomic) NSSearchField *searchField;
@property (weak, nonatomic) NSView *containerView;
@property (nonatomic) BOOL dividerLineHidden;
@property (weak) id<NCWidgetSearchViewDelegate> delegate;
@property (copy) NSArray *searchResults;
@property (copy) NSString *searchDescription;
@property (copy) NSString *searchResultsPlaceholderString;
@property (copy) NSString *searchResultKeyPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)moveUp:(id)a0;
- (void)scrollLineDown:(id)a0;
- (void)awakeFromNib;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)insertBacktab:(id)a0;
- (void)insertNewline:(id)a0;
- (void)insertTab:(id)a0;
- (void)keyDown:(id)a0;
- (void)moveDown:(id)a0;
- (void)moveToBeginningOfDocument:(id)a0;
- (void)moveToEndOfDocument:(id)a0;
- (id)nibBundle;
- (void)scrollLineUp:(id)a0;
- (void)scrollToBeginningOfDocument:(id)a0;
- (void)scrollToEndOfDocument:(id)a0;
- (void)searchFieldDidEndSearching:(id)a0;
- (void)searchFieldDidStartSearching:(id)a0;
- (void)viewDidAppear;
- (void)_makeSelection:(id)a0;
- (void)_updateSearchResultsPlaceholder;
- (id)_addContentViewController:(id)a0;
- (id)_listItemViewControllerForContentViewController:(id)a0;
- (void)_removeListItemViewController:(id)a0;
- (void)_setDividerLinesVisible:(BOOL)a0 atIndex:(unsigned long long)a1;
- (void)addContentViewController:(id)a0;
- (void)removeContentViewController:(id)a0;
- (void)searchFieldChanged:(id)a0;
- (void)widgetListItem:(id)a0 mouseDown:(id)a1;
- (void)widgetListItem:(id)a0 mouseDragged:(id)a1;
- (void)widgetListItem:(id)a0 mouseUp:(id)a1;

@end
