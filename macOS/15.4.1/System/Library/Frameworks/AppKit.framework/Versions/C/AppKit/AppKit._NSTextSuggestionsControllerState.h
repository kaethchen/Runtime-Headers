@interface AppKit._NSTextSuggestionsControllerState : NSObject <AppKit._NSSuggestionListTouchBarControllerRetainer> {
    void /* unknown type, empty encoding */ suggestionItems;
    void /* unknown type, empty encoding */ highlightedSuggestionItem;
    void /* unknown type, empty encoding */ accessoryView;
    void /* unknown type, empty encoding */ progressIndicator;
    void /* unknown type, empty encoding */ isShowingSuggestions;
    void /* unknown type, empty encoding */ suggestionsMenu;
    void /* unknown type, empty encoding */ suggestionsMenuDelegate;
    void /* unknown type, empty encoding */ suggestionsRange;
    void /* unknown type, empty encoding */ textChangingViaInsertCompletion;
    void /* unknown type, empty encoding */ isInTextDidChange;
    void /* unknown type, empty encoding */ pauseAutocomplete;
    void /* unknown type, empty encoding */ attributedStringValueMinusCompletion;
    void /* unknown type, empty encoding */ userIsFinishedWithAutocomplete;
    void /* unknown type, empty encoding */ mostRecentSearchString;
    void /* unknown type, empty encoding */ stopMenuItemChanges;
    void /* unknown type, empty encoding */ hasPresentedMenuForSession;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ suggestionListTouchBarController;

- (id)init;
- (void).cxx_destruct;

@end
