@interface _TtCV17PasswordManagerUI32PMAddGroupMembersSuggestionsView11Coordinator : NSObject <CNAutocompleteSuggestionsViewControllerDelegate> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ selectedAutocompleteResults;
    void /* unknown type, empty encoding */ handlesToIgnore;
}

- (id)init;
- (void).cxx_destruct;
- (id)selectedResultsForSuggestionsController:(id)a0;
- (void)suggestionsController:(id)a0 didSelectResult:(id)a1;
- (BOOL)suggestionsController:(id)a0 imageDataForRecipient:(id)a1 imageUpdateBlock:(id /* block */)a2;

@end
