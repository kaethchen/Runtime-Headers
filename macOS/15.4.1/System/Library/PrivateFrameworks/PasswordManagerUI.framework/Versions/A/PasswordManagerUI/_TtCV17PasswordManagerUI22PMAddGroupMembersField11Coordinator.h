@interface _TtCV17PasswordManagerUI22PMAddGroupMembersField11Coordinator : NSObject <NSControlTextEditingDelegate, NSTokenTextFieldDelegation, NSTokenFieldDelegate, CNAutocompleteFetchDelegate, CNAutocompleteResultWindowDelegate> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ tokenField;
    void /* unknown type, empty encoding */ handlesToIgnore;
    void /* unknown type, empty encoding */ autocompleteWindow;
    void /* unknown type, empty encoding */ autocompleteStore;
    void /* unknown type, empty encoding */ scheduledRequest;
    void /* unknown type, empty encoding */ displayedCompletionResults;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ searchString;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (id)tokenField:(id)a0 displayStringForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 editingStringForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 representedObjectForEditingString:(id)a1;
- (id)tokenField:(id)a0 setUpTokenAttachmentCell:(id)a1 forRepresentedObject:(id)a2;
- (unsigned long long)tokenField:(id)a0 styleForRepresentedObject:(id)a1;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (void)autocompleteFetchDidFinish:(id)a0;
- (void)autocompleteResultWindow:(id)a0 didSelectResult:(id)a1;
- (void)autocompleteResultWindow:(id)a0 willDisplayRowForResult:(id)a1;

@end
