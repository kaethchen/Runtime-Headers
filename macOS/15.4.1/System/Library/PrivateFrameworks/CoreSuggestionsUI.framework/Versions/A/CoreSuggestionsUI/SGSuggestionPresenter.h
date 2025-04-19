@class SGSuggestionAction, NSView, NSArray, NSString, SGSuggestionStore, NSViewController, NSMutableArray, NSPopover;
@protocol SGBannerProtocol, SGSuggestionPresenterDelegate;

@interface SGSuggestionPresenter : NSObject <SGSuggestionDelegate> {
    NSView<SGBannerProtocol> *_banner;
    SGSuggestionAction *_bannerPrimaryAction;
    SGSuggestionAction *_bannerDismissAction;
    NSViewController *_presentedViewController;
    SGSuggestionStore *_suggestionStore;
    NSPopover *_popover;
    NSMutableArray *_filteredSuggestions;
}

@property (nonatomic) BOOL wantsToShowBanner;
@property (weak, nonatomic) id<SGSuggestionPresenterDelegate> delegate;
@property (readonly, nonatomic) NSView<SGBannerProtocol> *banner;
@property (copy, nonatomic) NSArray *suggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)formatList:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)dismissViewController:(id)a0;
- (void)addSuggestion:(id)a0;
- (id)tableViewController;
- (void)presentViewController:(id)a0;
- (id)_tableViewController;
- (void)removeSuggestion:(id)a0;
- (void)_dismissViewControllerAnimated:(BOOL)a0;
- (id)suggestionStore;
- (void)_bannerDismiss;
- (void)_bannerPrimaryAction;
- (void)_dismissPresentedViewController:(id)a0;
- (void)_filterSuggestions;
- (void)_listDidChangeNotification:(id)a0;
- (void)_presentModalViewController:(id)a0 fromSourceView:(id)a1;
- (void)_removeBanner;
- (void)_restoreSuggestions;
- (void)_updateBanner;
- (void)bannerDismissAction;
- (void)bannerPrimaryAction;
- (void)dismissAllSuggestions;
- (id)formatMixedCategoriesSubtitle:(id)a0;
- (id)formatMixedCategoriesTitle:(id)a0;
- (void)presentAlert:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)presentWalletPasses:(id)a0;
- (void)reloadSuggestionsFromSearchableItems;
- (void)suggestion:(id)a0 actionFinished:(BOOL)a1;
- (void)suggestionBatchDismissal;
- (void)suggestionWasUpdated:(id)a0;
- (long long)suggestionsUIContext;
- (id)walletPassesViewController:(id)a0;

@end
