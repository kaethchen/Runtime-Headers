@class WBSSQLiteDatabase, NSURL, WBSSafariBookmarksSyncAgentProxy, NSObject;
@protocol OS_dispatch_queue;

@interface WBSPerSitePreferencesSQLiteStore : NSObject {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

@property (retain, nonatomic) WBSSafariBookmarksSyncAgentProxy *syncProxy;

+ (id)sharedStore;
+ (id)defaultDatabaseURL;
+ (BOOL)isPreferenceSyncable:(id)a0;
+ (id)staticSyncablePerSiteSettings;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)closeDatabase;
- (id)initWithDatabaseURL:(id)a0;
- (BOOL)_isDatabaseOpen;
- (int)_createFreshDatabaseSchema;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (void)_setSyncData:(id)a0 forPreference:(id)a1 domain:(id)a2 recordName:(id)a3 completionHandler:(id /* block */)a4;
- (void)_closeDatabase;
- (id)_defaultValueForPreference:(id)a0;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (BOOL)_migrateToSchemaVersion:(int)a0;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion_3;
- (int)_migrateToSchemaVersion_4;
- (int)_migrateToSchemaVersion_5;
- (int)_migrateToSchemaVersion_6;
- (void)_openDatabase;
- (void)_openDatabaseIfNecessary;
- (id)_queryListForPreferences:(id)a0;
- (void)_setDeletedCloudKitSyncData:(id)a0 forRecordName:(id)a1 completionHandler:(id /* block */)a2;
- (void)_setSyncData:(id)a0 forPreference:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_tryToPerformTransactionInBlock:(id /* block */)a0;
- (id)_valueOfPreferences:(id)a0 forDomain:(id)a1;
- (id)defaultValueForPreference:(id)a0;
- (void)getAllDomainsConfiguredForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)getAllPreferenceInformationForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)getDefaultValueForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)getDeletedCloudKitSyncDataForRecordName:(id)a0 completionHandler:(id /* block */)a1;
- (void)getSyncDataForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)getSyncDataForPreference:(id)a0 domain:(id)a1 completionHandler:(id /* block */)a2;
- (void)getTimestampAndValueOfPreference:(id)a0 forDomain:(id)a1 completionHandler:(id /* block */)a2;
- (void)getValueOfPreference:(id)a0 forDomain:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (void)getValuesOfPreference:(id)a0 forDomains:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (void)getValuesOfPreferences:(id)a0 forDomain:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (void)removeAllCloudKitRecordsWithCompletionHandler:(id /* block */)a0;
- (void)removeAllPreferenceValues:(id /* block */)a0;
- (void)removeAllPreferenceValuesFromPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllPreferenceValuesFromPreferences:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllSyncData;
- (void)removePreferenceValueWithRecordName:(id)a0 completionHandler:(id /* block */)a1;
- (void)removePreferenceValuesForDomainPrefixes:(id)a0 fromPreferences:(id)a1 completionHandler:(id /* block */)a2;
- (void)removePreferenceValuesForDomains:(id)a0 fromPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeTombstoneWithRecordName:(id)a0 completionHandler:(id /* block */)a1;
- (void)savePerSiteSettingCloudKitRecordToDisk:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDefaultValue:(id)a0 forPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 completionHandler:(id /* block */)a3;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 includeTimestamp:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 withTimestamp:(id)a3 completionHandler:(id /* block */)a4;
- (id)valueOfPreference:(id)a0 forDomain:(id)a1;

@end
