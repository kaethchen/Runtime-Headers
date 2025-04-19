@interface PLSharedManagedObjectContext : PLManagedObjectContext {
    id _changeNotificationObserver;
}

- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;
- (void)performBlockAndWait:(id /* block */)a0;
- (void)_mergeChangesFromDidSaveDictionary:(id)a0 usingObjectIDs:(BOOL)a1;
- (BOOL)_hasChangesForCloudShared:(id)a0;
- (void)_pl_setupStalenessInterval;
- (BOOL)isUserInterfaceContext;
- (void)setupLocalChangeNotifications;
- (BOOL)shouldMergeFromRemoteContextWithChanges:(id)a0;
- (void)tearDownLocalChangeNotifications;

@end
