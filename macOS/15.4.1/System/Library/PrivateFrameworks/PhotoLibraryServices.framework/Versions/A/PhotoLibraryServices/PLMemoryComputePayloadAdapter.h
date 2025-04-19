@interface PLMemoryComputePayloadAdapter : PLJournalEntryPayloadUpdateAdapter

- (id)memory;
- (BOOL)isValidForJournalPersistence;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;

@end
