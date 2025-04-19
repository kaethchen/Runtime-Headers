@class NSMapTable, SGTSuggestion, _SGTQueryScopeMenuOverride, SGTQueryGenius, SGTFadeWindowEffect, SGTCompletionTableView, SGTInput, NSMutableArray, NSProgressIndicator, NSWindowController, NSString, NSDictionary, SGTCompletionWindow, NSTimer, NSMutableSet, NSArray;
@protocol SGTSearchFieldQueryScopeDelegate, SGTSearchFieldDelegate;

@interface SGTSearchFieldReserved : NSObject {
    NSArray *suggesters;
    SGTInput *currentInput;
    NSMutableArray *categories;
    NSMapTable *suggestionsByCategory;
    NSMutableSet *categoriesWithIntermediateResults;
    NSArray *displayCategories;
    NSMapTable *displaySuggestionsByCategory;
    SGTCompletionWindow *completionWindow;
    SGTCompletionTableView *completionTableView;
    BOOL settingValue;
    NSString *userTypedString;
    NSMutableArray *suggestions;
    SGTSuggestion *currentSuggestion;
    NSArray *freeTextSuggestions;
    BOOL abortSearchWhenEmptyString;
    BOOL textChangingProgrammatically;
    BOOL open;
    BOOL isDisplayingStaticSuggestions;
    BOOL observingApplicationState;
    BOOL interactingWithButton;
    BOOL textIsMarked;
    BOOL ignoreNextTextValidation;
    double minimumCompletionWindowWidth;
    unsigned long long textChangedID;
    long long typingScope;
    BOOL acceptsScopeSuggestion;
    SGTQueryGenius *genius;
    id eventMonitor;
    NSTimer *autocloseTimer;
    SGTFadeWindowEffect *autocloseFadeEffect;
    double lastInputStartTime;
    id debugEventMonitor;
    NSWindowController *debugWindowController;
    long long savedSelectionIndex;
    BOOL currentSelectionIsAutofirst;
    BOOL selectingBestSuggestion;
    BOOL enforceSelectionWhenPossible;
    BOOL keepCompletionWindowOnWindowDrag;
    BOOL ignoreWindowResizeNotifications;
    BOOL _highlightsMatches;
    id<SGTSearchFieldQueryScopeDelegate> queryScopeDelegate;
    id<SGTSearchFieldDelegate> delegate;
    _SGTQueryScopeMenuOverride *queryScopeMenuOverride;
    NSProgressIndicator *spinner;
    long long currentRequest;
    double queryScopeMenuSpinTime;
    NSDictionary *searchDelegateUserInfo;
    NSMutableArray *selectionEventCache;
    SEL selectionSelectorCache;
    BOOL queryStringChangesAreTransient;
    unsigned long long oldStringLength;
    unsigned long long maximumEffectiveInputLength;
    long long searchQueryIndex;
    id /* block */ _didFindSuggestionsCallback;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
