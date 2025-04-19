@class NSString, NSMutableArray, BRCClientState;

@interface BRCMigrateZonePCSOperation : _BRCOperation <BRCOperationSubclass> {
    NSMutableArray *_interestingZoneIDs;
    BRCClientState *_clientState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (BOOL)shouldRetryForError:(id)a0;
- (void)_createCloudDocsZone:(id /* block */)a0;
- (void)_fetchZonesNeedingMigration:(id /* block */)a0;
- (id)initWithSessionContext:(id)a0 clientState:(id)a1;

@end
