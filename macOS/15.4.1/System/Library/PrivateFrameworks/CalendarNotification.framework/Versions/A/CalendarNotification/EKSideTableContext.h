@class NSString;

@interface EKSideTableContext : NSManagedObjectContext {
    NSString *_path;
}

+ (id)sideTableContext;

- (void).cxx_destruct;
- (id)_persistentStoreCoordinator;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (id)_managedObjectModel;
- (id)_settingForKey:(id)a0;
- (id)alarmsBetweenStartDate:(id)a0 endDate:(id)a1;
- (void)deleteAllAlarms;
- (id)_alarmsMatchingPredicate:(id)a0;
- (id)_pathForPersistentStore;
- (BOOL)_removeSqliteFiles;
- (id)_urlForPersistentStore;
- (id)insertNewAlarm;
- (id)nextAlarmFireTime;
- (id)rootDirectory;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (id)settingForKey:(id)a0;

@end
