@class NSView, AssistantPopoverEntityContentView, NSString, SFSearchResult, AssistantPopoverSearchUIResultsViewController, AssistantPopoverResultsCollectionViewController, NSNumber, NSBox;

@interface AssistantPopoverResultCollectionViewEntityItem : NSCollectionViewItem <SearchUIFeedbackDelegate, SearchUIResultsSizingDelegate> {
    AssistantPopoverSearchUIResultsViewController *_searchUIResultsViewController;
    AssistantPopoverEntityContentView *_contentView;
    SFSearchResult *_currentSearchResult;
    NSView *_backgroundView;
}

@property (class, readonly, nonatomic) NSString *identifier;

@property (retain, nonatomic) NSBox *separator;
@property (retain, nonatomic) AssistantPopoverResultsCollectionViewController *resultsCollectionViewController;
@property (copy, nonatomic) NSString *webpageIdentifier;
@property (copy, nonatomic) NSNumber *componentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)didPerformCommand:(id)a0;
- (void)setSearchResult:(id)a0;
- (void)resultsViewController:(id)a0 preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a1 animated:(BOOL)a2;

@end
