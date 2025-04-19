@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface NFStorageController : NSObject <NFStorageInternalMethods> {
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

- (void).cxx_destruct;

@end
