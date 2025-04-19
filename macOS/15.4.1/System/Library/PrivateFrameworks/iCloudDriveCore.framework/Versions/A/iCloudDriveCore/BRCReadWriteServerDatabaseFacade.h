@class NSString;

@interface BRCReadWriteServerDatabaseFacade : BRCDatabaseFacade <BRCServerDatabaseWriteProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getOrCreateUserKeyForOwnerName:(id)a0;
- (BOOL)saveServerZone:(id)a0;
- (id)createDeviceKeyForName:(id)a0;
- (void)deleteSideCarLookAheadInfoForRecordName:(id)a0;
- (id)initWithDB:(id)a0 workloop:(id)a1;
- (void)insertSideCarLookAheadInfo:(id)a0 shareRecordName:(id)a1 sideCarInfo:(id)a2;
- (void)setUserIdentityForUserName:(id)a0 userIdentity:(id)a1;
- (void)updatePCSChainingStateForItemWithUnkownPCSState:(unsigned int)a0 itemID:(id)a1 zoneRowID:(id)a2;
- (BOOL)updateServerItemWithSideCarInfo:(id)a0 sideCarInfo:(id)a1 zoneRowID:(id)a2;

@end
