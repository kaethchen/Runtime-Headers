@class NSString;

@interface ISyncRecordViewWithConflicts : ISyncConcreteRecordView {
    NSString *_clientId;
}

- (void)dealloc;
- (id)actualRecordsWithIdentifiers:(id)a0;
- (id)initWithRecordStore:(id)a0 entityNames:(id)a1 clientIdentifier:(id)a2;
- (id)recordByApplyingConflictValuesToRecord:(id)a0 withRecordId:(id)a1;
- (id)recordGraphNodesWithIdentifiers:(id)a0;

@end
