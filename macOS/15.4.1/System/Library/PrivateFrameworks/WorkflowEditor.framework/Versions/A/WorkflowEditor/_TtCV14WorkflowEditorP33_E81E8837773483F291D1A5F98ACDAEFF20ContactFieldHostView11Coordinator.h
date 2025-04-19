@interface _TtCV14WorkflowEditorP33_E81E8837773483F291D1A5F98ACDAEFF20ContactFieldHostView11Coordinator : NSObject <NSTokenFieldDelegate, CNAutocompleteResultWindowDelegate, CNAutocompleteFetchDelegate, NSWindowDelegate> {
    void /* unknown type, empty encoding */ window;
    void /* unknown type, empty encoding */ tokenView;
    void /* unknown type, empty encoding */ presented;
    void /* unknown type, empty encoding */ $__lazy_storage_$_autocompleteStore;
    void /* unknown type, empty encoding */ currentRequest;
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ searchText;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (id)tokenField:(id)a0 completionsForSubstring:(id)a1 indexOfToken:(long long)a2 indexOfSelectedItem:(long long *)a3;
- (id)tokenField:(id)a0 displayStringForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 shouldAddObjects:(id)a1 atIndex:(long long)a2;
- (unsigned long long)tokenField:(id)a0 styleForRepresentedObject:(id)a1;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (void)autocompleteFetchDidFinish:(id)a0;
- (void)autocompleteResultWindow:(id)a0 didSelectResult:(id)a1;

@end
