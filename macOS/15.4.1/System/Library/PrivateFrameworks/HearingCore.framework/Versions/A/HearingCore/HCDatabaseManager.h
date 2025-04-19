@class NSManagedObjectContext;

@interface HCDatabaseManager : NSObject {
    int _contentProtectionNotifyToken;
}

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)containerIdentifier;
- (void)logMessage:(id)a0;
- (id)apsConnectionMachServiceName;
- (id)databaseFilePath;
- (id)cloudKitContainer;
- (void)setupDatabase;
- (id)managedObjectModelName;
- (BOOL)saveIfPossible;
- (void)contentDidUpdate:(id)a0;
- (void)storesWillChange:(id)a0;

@end
