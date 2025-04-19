@class NSString, NSViewController;

@interface SGEventSuggestion : SGEventSuggestionBase <SuggestedEventPopoverControllerDelegate> {
    NSViewController *_suggestionPrimaryActionViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)suggestionAttributedSubtitle;
- (id)suggestionPrimaryAction;
- (id)suggestionPrimaryActionViewController;
- (void)_dismissViewController:(id)a0 retainBanner:(BOOL)a1;
- (void)cancelSuggestedEventPopoverController:(id)a0;
- (void)preloadPrimaryActionViewController;
- (void)reloadSuggestionPrimaryActionViewController;
- (void)suggestedEventPopoverController:(id)a0 wantsToCommitSuggestedEvent:(id)a1 asEvent:(id)a2;
- (void)suggestedEventPopoverController:(id)a0 wantsToIgnoreSuggestedEvent:(id)a1;

@end
