@class CKRecordZone;

@interface CKDApplyZoneAttributeChangesOperation : CKDDatabaseOperation

@property (retain, nonatomic) CKRecordZone *zone;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long pcsKeysRemoved;

+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)main;
- (id)relevantZoneIDs;
- (void)decryptPCSs;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)makeStateTransition;
- (void)removePCSKeys;
- (void)savePCSChanges;
- (void)updatePCSCache;

@end
