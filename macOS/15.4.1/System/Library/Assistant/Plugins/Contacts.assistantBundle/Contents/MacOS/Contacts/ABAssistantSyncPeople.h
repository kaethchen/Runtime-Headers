@class NSString, ABAddressBook;

@interface ABAssistantSyncPeople : ABAssistantSyncHandler <ABAssistantSyncDelegate>

@property (readonly, nonatomic) ABAddressBook *addressBook;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)syncKey;
- (struct __CFArray { } *)copyAllRecordsForFullSync;
- (void)copyChangeHistoryAfterAnchor:(id)a0 changedIDs:(const struct __CFArray **)a1 changeTypes:(const struct __CFArray **)a2 sequenceNumbers:(const struct __CFArray **)a3;
- (void)deleteChangeHistoryToAnchor:(id)a0;
- (long long)expectedTotalSyncedRecords;
- (id)fullSyncSnapshotProperty;
- (id)newSADomainObjectFromABRecord:(id)a0;
- (id)newSADomainObjectFromABRecordID:(id)a0;
- (id)newSADomainObjectFromDeletedRecordID:(id)a0;
- (BOOL)shouldSyncSADomainObject:(id)a0;

@end
