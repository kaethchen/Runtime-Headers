@interface CKSQLiteDatabaseActivities : CKSQLiteTable

+ (id)dbProperties;
+ (Class)entryClass;

- (id)activitiesStartingBeforeDate:(id)a0;
- (id)deleteCompletedActivities;
- (id)deleteEntriesForDatabase:(id)a0;
- (id)earliestActivityDate;
- (id)fetchActivityForTarget:(id)a0;
- (BOOL)hasPendingActivities:(id *)a0;
- (id)insertOrUpdateActivityDate:(id)a0;
- (id)wakeFromDatabase;

@end
