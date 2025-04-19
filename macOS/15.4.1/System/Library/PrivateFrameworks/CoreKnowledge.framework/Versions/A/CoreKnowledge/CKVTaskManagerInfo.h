@class CCSetChangeRegistry, NSURL, KVDictionaryLog, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface CKVTaskManagerInfo : NSObject {
    KVDictionaryLog *_log;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_migrationStartTime;
}

@property (readonly, nonatomic) NSURL *donateDirectory;
@property (readonly, nonatomic) CCSetChangeRegistry *changeRegistry;

- (void).cxx_destruct;
- (id)schemaVersion;
- (BOOL)clear:(id *)a0;
- (id)siriLanguageCode;
- (id)initWithRootDirectoryURL:(id)a0 error:(id *)a1;
- (id)lastMaintenance;
- (id)dictationLanguageCodes;
- (BOOL)didCompleteMigrationMoreRecentlyThanMaintenance;
- (BOOL)recordMaintenanceCompleted:(id *)a0;
- (BOOL)recordMigrationCompletedWithSettings:(id)a0 error:(id *)a1;
- (BOOL)shouldRunMigration;
- (BOOL)updateSchemaVersion:(id)a0 error:(id *)a1;
- (BOOL)updateSiriLanguageCode:(id)a0 dictationLanguageCodes:(id)a1 error:(id *)a2;

@end
