@class NSString, NSDictionary, NSDate, NSNumber;

@interface PLMigrationHistory : PLManagedObject

@property (nonatomic) long long index;
@property (nonatomic) long long modelVersion;
@property (retain, nonatomic) NSNumber *sourceModelVersion;
@property (retain, nonatomic) NSString *osVersion;
@property (nonatomic) short migrationType;
@property (retain, nonatomic) NSDate *migrationDate;
@property (retain, nonatomic) NSNumber *forceRebuildReason;
@property (retain, nonatomic) NSDictionary *globalKeyValues;
@property (retain, nonatomic) NSString *storeUUID;
@property (retain, nonatomic) NSString *frameworkUUID;
@property (retain, nonatomic) NSString *hardwareModel;
@property (retain, nonatomic) NSString *deviceUniqueID;
@property (nonatomic) BOOL cplEnabled;
@property (retain, nonatomic) NSDate *initialSyncDate;
@property (nonatomic) short origin;

+ (void)initialize;
+ (id)entityName;
+ (id)currentMigrationHistoryWithManagedObjectContext:(id)a0;
+ (long long)_rebuildMigrationHistoryWithJournal:(id)a0 managedObjectContext:(id)a1;
+ (BOOL)currentMigrationHistoryIndex:(long long *)a0 withManagedObjectContext:(id)a1 error:(id *)a2;
+ (id)insertCreatedWithManagedObjectContext:(id)a0 index:(long long)a1 migrationDate:(id)a2 hardwareModel:(id)a3 deviceUniqueID:(id)a4 cplEnabled:(BOOL)a5 initialSyncDate:(id)a6;
+ (id)insertIntoManagedObjectContext:(id)a0 index:(long long)a1 sourceModelVersion:(id)a2 migrationType:(long long)a3 migrationDate:(id)a4 forceRebuildReason:(id)a5 hardwareModel:(id)a6 deviceUniqueID:(id)a7 cplEnabled:(BOOL)a8 initialSyncDate:(id)a9;
+ (id)insertLightweightWithManagedObjectContext:(id)a0 index:(long long)a1 sourceModelVersion:(unsigned long long)a2 migrationDate:(id)a3 hardwareModel:(id)a4 deviceUniqueID:(id)a5 cplEnabled:(BOOL)a6 initialSyncDate:(id)a7;
+ (id)insertNoopWithManagedObjectContext:(id)a0 index:(long long)a1 migrationDate:(id)a2 hardwareModel:(id)a3 deviceUniqueID:(id)a4 cplEnabled:(BOOL)a5 initialSyncDate:(id)a6;
+ (id)insertRebuildWithManagedObjectContext:(id)a0 index:(long long)a1 migrationDate:(id)a2 forceRebuildReason:(id)a3 hardwareModel:(id)a4 deviceUniqueID:(id)a5 cplEnabled:(BOOL)a6 initialSyncDate:(id)a7;
+ (id)migrateLegacyMigrationHistoryWithMetadata:(id)a0 index:(long long)a1 outGlobalKeyValues:(id)a2 managedObjectContext:(id)a3;
+ (id)migrationHistoryWithManagedObjectContext:(id)a0;
+ (BOOL)recordCurrentMigrationStateInManagedObjectContext:(id)a0 withPathManager:(id)a1 migrationType:(long long)a2 forceRebuildReason:(id)a3 sourceModelVersion:(id)a4 updateLegacyMigrationState:(BOOL)a5 journalRebuildRequred:(BOOL)a6 origin:(short)a7 libraryCreateOptions:(unsigned long long)a8 hardwareModel:(id)a9 deviceUniqueID:(id)a10 cplEnabled:(BOOL)a11 initialSyncDate:(id)a12;

- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;
- (BOOL)supportsCloudUpload;

@end
