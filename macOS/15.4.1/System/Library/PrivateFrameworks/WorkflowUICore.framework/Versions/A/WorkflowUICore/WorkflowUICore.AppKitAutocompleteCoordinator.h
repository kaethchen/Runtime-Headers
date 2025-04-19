@interface WorkflowUICore.AppKitAutocompleteCoordinator : NSObject <WFAppKitAutocompleteScrubberProvider> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ autocompleteDataSource;
    void /* unknown type, empty encoding */ scrubber;
    void /* unknown type, empty encoding */ _results;
    void /* unknown type, empty encoding */ _selectedResult;
    void /* unknown type, empty encoding */ resultsWindow;
    void /* unknown type, empty encoding */ scrollProxy;
    void /* unknown type, empty encoding */ updateTask;
}

- (id)init;
- (void).cxx_destruct;
- (id)scrubberForTextView:(id)a0;

@end
