@class NSString;

@interface BRCReadWriteClientDatabaseFacade : BRCClientDatabaseFacade <BRCClientDatabaseWriteProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)saveAppLibrary:(id)a0;
- (void)captureSyncErrorForItemWithRowID:(unsigned long long)a0 error:(id)a1 errorMessage:(id)a2 underlyingError:(id)a3 serviceCode:(int)a4;
- (void)clearSyncErrorForItemWithRowID:(unsigned long long)a0 serviceCode:(int)a1;
- (id)initWithDB:(id)a0 workloop:(id)a1;
- (BOOL)saveAppLibrary:(id)a0 supportsEnhancedDrivePrivacy:(BOOL)a1;
- (void)scheduleFlushWithCheckpoint:(BOOL)a0 whenFlushed:(id /* block */)a1;
- (BOOL)updateClientStateData:(id)a0;
- (BOOL)updateClientStateDictionary:(id)a0;

@end
