@interface WFCloudKitSyncEventLogger : NSObject {
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_log_event;
    BOOL _postNotifications;
}

+ (id)createPersistedSyncEventLogger;
+ (id)createInMemorySyncEventLogger;

- (void)dealloc;
- (id)events;
- (void)logError:(id)a0;
- (void)logEvent:(id)a0;
- (void)clearLogs;
- (void)logDatabaseInsert:(id)a0 value:(id)a1;
- (void)logDatabaseModify:(id)a0 value:(id)a1;
- (void)logDatabaseRemove:(id)a0;
- (void)logLibraryMerge:(id)a0 remote:(id)a1 after:(id)a2;
- (void)logRecordDeleteFailed:(id)a0 error:(id)a1;
- (void)logRecordDeleted:(id)a0;
- (void)logRecordFetched:(id)a0;
- (void)logRecordPushFailed:(id)a0 error:(id)a1;
- (void)logRecordPushed:(id)a0;
- (id)eventsWithType:(int)a0;
- (BOOL)_applySchema;
- (BOOL)_applySchemaIfNecessary;
- (id)_eventForDatabaseDescriptor:(id)a0 value:(id)a1;
- (id)_eventForRecord:(id)a0;
- (id)_eventForRecordID:(id)a0;
- (id)_eventsWithFilter:(id)a0;
- (id)_initWithFilename:(const char *)a0 flags:(int)a1 postNotifications:(BOOL)a2;
- (void)_logEventWithType:(int)a0 event:(id)a1;
- (void)clearOldLogs;
- (void)logDeletionFetched:(id)a0;

@end
