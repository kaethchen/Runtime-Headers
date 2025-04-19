@interface MapsSuggestionsPreferredTransportTypeTrigger : MapsSuggestionsBaseTrigger {
    id _transportTypeChangedListener;
}

- (id)init;
- (void).cxx_destruct;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;

@end
