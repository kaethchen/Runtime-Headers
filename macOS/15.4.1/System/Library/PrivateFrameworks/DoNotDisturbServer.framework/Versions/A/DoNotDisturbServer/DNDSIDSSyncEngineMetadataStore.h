@class NSString, NSMutableDictionary, NSMutableSet, NSURL;

@interface DNDSIDSSyncEngineMetadataStore : NSObject <DNDSIDSSyncEngineMetadataStoring> {
    NSMutableDictionary *_recordMetadataByRecordID;
    NSMutableDictionary *_recordIDSyncDatesByPairedDeviceIdentifier;
    NSMutableSet *_initialSyncPairedDeviceIdentifiers;
    NSURL *_url;
    double _deviceObsoletionDuration;
    double _tombstoneObsoletionDuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)purge;
- (void)updateMetadata:(id)a0;
- (BOOL)isValidAtDate:(id)a0;
- (void)_write;
- (BOOL)_areSyncDatesValidAtDate:(id)a0;
- (BOOL)_canTombstoneBeRemovedWithRecordID:(id)a0;
- (void)_forgetMetadataForRecordID:(id)a0;
- (void)_forgetObsoleteTombstones;
- (void)_forgetRecordID:(id)a0;
- (void)_forgetSyncDatesForDevicesWithoutInitialSync;
- (void)_forgetSyncDatesForOutdatedDevices;
- (void)_forgetSyncDatesForRecordID:(id)a0;
- (BOOL)_isMetadataValidAtDate:(id)a0;
- (BOOL)_isPairedDeviceOutdated:(id)a0;
- (void)_parseDictionary:(id)a0;
- (void)_read;
- (id)deletedRecordIDsForPairedDeviceIdentifier:(id)a0;
- (void)garbageCollect;
- (BOOL)hasMetadataForPairedDeviceIdentifier:(id)a0;
- (BOOL)hasPerformedInitialSyncForPairedDeviceIdentifier:(id)a0;
- (id)initWithDeviceObsoletionDuration:(double)a0 tombstoneObsoletionDuration:(double)a1;
- (id)modifiedRecordIDsForPairedDeviceIdentifier:(id)a0;
- (id)recordMetadataForRecordID:(id)a0;
- (void)removePairedDeviceIdentifier:(id)a0;
- (void)setDeletedAtDate:(id)a0 forRecordIDs:(id)a1;
- (void)setLastModifiedDate:(id)a0 forRecordIDs:(id)a1;
- (void)setPerformedInitialSyncForPairedDeviceIdentifier:(id)a0;
- (void)setSyncDate:(id)a0 forRecordIDs:(id)a1 forPairedDeviceIdentifier:(id)a2;
- (void)setSyncDate:(id)a0 forRecordsMatchingMetadata:(id)a1 forPairedDeviceIdentifier:(id)a2;
- (id)unknownRecordIDsInRecordIDs:(id)a0;

@end
