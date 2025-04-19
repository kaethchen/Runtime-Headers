@interface _TtC20ContactsAutocompleteP33_EBE34D4C21093596BE6E4DA9F1A7E5D28StoreSpy : NSObject <CNAutocompleteFetchDelegate> {
    void /* unknown type, empty encoding */ results;
    void /* unknown type, empty encoding */ streamContinuation;
    void /* unknown type, empty encoding */ store;
}

- (id)init;
- (void).cxx_destruct;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (void)autocompleteFetchDidFinish:(id)a0;

@end
