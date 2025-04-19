@interface PassKitMacHelper.ContactSearchController : NSObject <CNAutocompleteResultWindowDelegate, CNAutocompleteFetchDelegate, CNAutocompleteSuggestionsViewControllerDelegate, NSControlTextEditingDelegate, NSTextFieldDelegate> {
    void /* unknown type, empty encoding */ searchField;
    void /* unknown type, empty encoding */ parentView;
    void /* unknown type, empty encoding */ autoCompleteSearchResults;
    void /* unknown type, empty encoding */ autoCompleteResults;
    void /* unknown type, empty encoding */ selectedCompletionResult;
    void /* unknown type, empty encoding */ innerAutoCompleteWindow;
    void /* unknown type, empty encoding */ contactEditingType;
    void /* unknown type, empty encoding */ contactFormatValidator;
    void /* unknown type, empty encoding */ _result;
    void /* unknown type, empty encoding */ autoCompleteCancellable;
    void /* unknown type, empty encoding */ innerAutoCompleteStore;
    void /* unknown type, empty encoding */ _searchString;
    void /* unknown type, empty encoding */ currentFetchRequest;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (id)autocompleteFetch:(id)a0 willAdjustResults:(id)a1;
- (void)autocompleteFetchDidFinish:(id)a0;
- (void)didSelectResult:(id)a0;
- (id)selectedResultsForSuggestionsController:(id)a0;
- (void)suggestionsController:(id)a0 didSelectResult:(id)a1;
- (void)completionWindowDidResize:(id)a0;

@end
