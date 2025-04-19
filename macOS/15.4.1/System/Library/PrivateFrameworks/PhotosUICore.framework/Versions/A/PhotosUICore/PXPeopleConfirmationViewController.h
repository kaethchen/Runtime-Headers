@class PXPeopleSuggestionManager, PXPeopleSuggestionView, NSProgressIndicator, PXPeopleConfirmationLoadingView, NSTimer, PXPeopleConfirmationSummaryViewController, UXLabel, PXAnimatedCountView, NSString;

@interface PXPeopleConfirmationViewController : UXViewController <PXPeopleSuggestionManagerDelegate, PXPeopleSummaryDelegate>

@property (retain, nonatomic) PXPeopleSuggestionView *suggestionView;
@property (retain, nonatomic) UXLabel *descriptionLabel;
@property (retain, nonatomic) PXPeopleConfirmationLoadingView *loadingView;
@property (retain, nonatomic) UXLabel *interimLoadingLabel;
@property (retain, nonatomic) NSProgressIndicator *interimLoadingIndicator;
@property (retain, nonatomic) PXPeopleConfirmationSummaryViewController *summaryViewController;
@property (retain, nonatomic) NSTimer *loadingDelayTimer;
@property (nonatomic) BOOL suggestionsPresented;
@property (nonatomic) BOOL showTypeDebugColor;
@property (readonly) PXPeopleSuggestionManager *suggestionManager;
@property (retain, nonatomic) PXAnimatedCountView *countView;
@property (readonly) BOOL isSummaryViewShowing;
@property (nonatomic) unsigned long long viewState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancelOperation:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithPerson:(id)a0;
- (void)performUndo:(id)a0;
- (id)personForSummaryViewController:(id)a0;
- (void)_handleSuggestionCompletionWithSuggestion:(id)a0 success:(BOOL)a1;
- (unsigned long long)autoConfirmedCountForSummaryViewController:(id)a0;
- (void)confirmTapped:(id)a0;
- (void)confirmationCountUpdatedForSuggestionManager:(id)a0 undoing:(BOOL)a1;
- (void)denyTapped:(id)a0;
- (void)dismissSummary;
- (void)displaySummary;
- (void)doneTapped:(id)a0;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)a0;
- (void)presentSuggestion:(id)a0 animated:(BOOL)a1;
- (void)suggestionDidDisplay;
- (void)suggestionManager:(id)a0 hasNewSuggestionsAvailable:(id)a1;
- (void)undoConfirm:(id)a0;
- (void)undoDeny:(id)a0;
- (void)updateViewWithViewState:(unsigned long long)a0;
- (unsigned long long)userConfirmedCountForSummaryViewController:(id)a0;
- (void)willLoadMoreSuggestionsForSuggestionManager:(id)a0;

@end
