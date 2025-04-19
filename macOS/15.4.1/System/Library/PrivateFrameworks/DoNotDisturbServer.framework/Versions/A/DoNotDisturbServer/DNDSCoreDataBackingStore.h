@class NSPersistentContainer, NSURL;

@interface DNDSCoreDataBackingStore : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _setupLock;
    NSPersistentContainer *_persistentContainer;
    NSURL *_testDatabaseURL;
}

- (void).cxx_destruct;
- (id)_initWithURL:(id)a0;
- (id)newManagedObjectContext;
- (void)setupPersistentStoreIfNeeded;

@end
