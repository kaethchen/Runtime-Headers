@class NSTextField, NSString, NSView, NSArray, SGSuggestionStore, NSButton, NSViewController;

@interface SGSuggestionsPagingPopoverViewController : NSViewController <NSPageControllerDelegate> {
    NSViewController *_currentSuggestionViewController;
}

@property (nonatomic) NSView *containerView;
@property (nonatomic) NSButton *prevButton;
@property (nonatomic) NSButton *nextButton;
@property (nonatomic) NSTextField *pagingTitleView;
@property (readonly, nonatomic) BOOL hasPreviousSuggestion;
@property (readonly, nonatomic) BOOL hasNextSuggestion;
@property (readonly, nonatomic) NSString *pagingTitle;
@property (readonly, nonatomic) NSArray *suggestions;
@property (nonatomic) long long currentSuggestionIndex;
@property (retain, nonatomic) SGSuggestionStore *suggestionStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingHasNextSuggestion;
+ (id)keyPathsForValuesAffectingHasPreviousSuggestion;
+ (id)keyPathsForValuesAffectingPagingTitle;
+ (id)keyPathsForValuesAffectingPagingUI;

- (void)dealloc;
- (void).cxx_destruct;
- (id)nibBundle;
- (void)viewDidLoad;
- (void)cycleSuggestion;
- (void)nextSuggestion:(id)a0;
- (void)prevSuggestion:(id)a0;
- (void)_updateSuggestion;
- (void)listDidChangeNotification:(id)a0;
- (id)viewControllerForItemAtIndex:(unsigned long long)a0;

@end
