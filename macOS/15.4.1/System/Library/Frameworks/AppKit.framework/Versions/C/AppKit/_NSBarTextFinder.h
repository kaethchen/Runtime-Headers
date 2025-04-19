@class NSString, NSTextFinderBarView, NSResponder;

@interface _NSBarTextFinder : _NSTextFinderImpl <NSSearchFieldDelegate> {
    NSTextFinderBarView *_view;
    NSString *_replacementString;
    BOOL _clientRespondsToReplace;
    BOOL _clientRespondsToReplaceAll;
    BOOL _divergedFromPasteboard;
    BOOL _preventResetSettingsOnDivergeFromPasteboard;
    BOOL _nextSearchFieldActionIsReturn;
    NSResponder *_originalResponder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)activate;
- (long long)style;
- (id)replacementString;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addStringToRecentSearchStrings:(id)a0;
- (void)appDidActivate:(id)a0;
- (void)_loadUI;
- (void)_setMatchCount:(long long)a0;
- (void)_activateWithReplace:(BOOL)a0;
- (void)_changeMatchSettings:(id)a0;
- (void)_changeSearchOptions:(id)a0;
- (void)_clearAllMatches;
- (void)_didFindMatchInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 wrapped:(BOOL)a1 forward:(BOOL)a2;
- (void)_divergeFromPasteboard;
- (void)_findBarViewWillMoveToWindow:(id)a0;
- (void)_findBarWindowDidBecomeKey:(id)a0;
- (id)_findField;
- (void)_findPatternSelected:(id)a0;
- (BOOL)_needToRefreshFromPasteboard;
- (void)_newSearchForString:(id)a0 showFirstMatch:(BOOL)a1;
- (void)_performFindBarAction:(id)a0;
- (void)_registerObserversForWindow:(id)a0;
- (id)_replaceField;
- (id)_replacementString;
- (void)_searchFieldAction:(id)a0;
- (void)_setFinder:(id)a0;
- (void)_setReplacementCount:(long long)a0;
- (void)_setView:(id)a0;
- (id)_statusStringForMatchCount:(long long)a0;
- (void)_unregisterObserversForWindow:(id)a0;
- (void)_updateForwardBackButtons;
- (id)_view;
- (void)addStringToRecentReplaceStrings:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)deactivate;
- (void)handleResult:(long long)a0 forAction:(long long)a1;
- (void)hideReplace;
- (BOOL)isVisible;
- (unsigned long long)searchOptions;
- (id)searchString;
- (void)setSearchOptions:(unsigned long long)a0;
- (void)setSearchString:(id)a0;
- (void)setSubstringMatchType:(long long)a0;
- (void)showReplace;
- (long long)substringMatchType;
- (void)takeSearchString:(id /* block */)a0;
- (BOOL)validateMenuItem:(id)a0;

@end
