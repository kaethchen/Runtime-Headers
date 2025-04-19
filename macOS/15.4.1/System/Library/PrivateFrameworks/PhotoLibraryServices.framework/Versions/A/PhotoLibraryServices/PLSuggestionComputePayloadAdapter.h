@class NSSet;

@interface PLSuggestionComputePayloadAdapter : PLJournalEntryPayloadUpdateAdapter {
    NSSet *_suggestionTypes;
}

- (void).cxx_destruct;
- (id)suggestion;
- (id)initWithManagedObject:(id)a0 suggestionTypes:(id)a1;
- (BOOL)isValidForJournalPersistence;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;

@end
