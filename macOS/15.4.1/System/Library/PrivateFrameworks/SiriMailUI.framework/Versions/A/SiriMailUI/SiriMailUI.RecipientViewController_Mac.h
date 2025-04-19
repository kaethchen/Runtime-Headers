@interface SiriMailUI.RecipientViewController_Mac : NSViewController <CNContactPickerDelegate, CNAutocompleteSuggestionsViewControllerDelegate, CNAutocompleteFetchDelegate, CNAutocompleteResultWindowDelegate, NSTokenFieldDelegate> {
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ composeView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_label;
    void /* unknown type, empty encoding */ addContactButton;
    void /* unknown type, empty encoding */ contactPicker;
    void /* unknown type, empty encoding */ autoCompleteResults;
    void /* unknown type, empty encoding */ selectedCompletionResult;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ currentFetchRequest;
    void /* unknown type, empty encoding */ $__lazy_storage_$_completionWindow;
    void /* unknown type, empty encoding */ $__lazy_storage_$_autoCompleteStore;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (void)loadView;
- (id)tokenField:(id)a0 completionsForSubstring:(id)a1 indexOfToken:(long long)a2 indexOfSelectedItem:(long long *)a3;
- (id)tokenField:(id)a0 displayStringForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 shouldAddObjects:(id)a1 atIndex:(long long)a2;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (id)autocompleteFetch:(id)a0 willAdjustResults:(id)a1;
- (void)autocompleteFetchDidFinish:(id)a0;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)didSelectResult:(id)a0;
- (id)selectedResultsForSuggestionsController:(id)a0;
- (void)suggestionsController:(id)a0 didSelectResult:(id)a1;
- (void)completionWindowDidResize:(id)a0;
- (void)composeRecipientViewRequestAddRecipient;

@end
