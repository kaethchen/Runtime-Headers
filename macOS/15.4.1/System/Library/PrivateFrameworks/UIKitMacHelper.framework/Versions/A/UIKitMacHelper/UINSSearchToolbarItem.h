@class UINSSearchScopeBarController;

@interface UINSSearchToolbarItem : NSSearchToolbarItem {
    UINSSearchScopeBarController *_scopeBarController;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)searchTextField;
- (id)_initWithItemIdentifier:(id)a0 searchTextField:(id)a1;
- (id)_initWithItemIdentifier:(id)a0 searchTextField:(id)a1 shouldObserveSearchField:(BOOL)a2;
- (void)_searchTextFieldDidBeginEditing:(id)a0;
- (void)_searchTextFieldDidEndEditing:(id)a0;
- (void)_setupScopeBarWithSearchBar:(id)a0;

@end
