@interface NotesEditor.ICSynapseContentItemsCache : NSObject <ICManagedObjectContextChangeControllerDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ changeController;
    void /* unknown type, empty encoding */ cache;
}

- (id)init;
- (void).cxx_destruct;
- (id)managedObjectContextChangeController:(id)a0 managedObjectIDsToUpdateForUpdatedManagedObjects:(id)a1;
- (void)managedObjectContextChangeController:(id)a0 performUpdatesForManagedObjectIDs:(id)a1;
- (BOOL)managedObjectContextChangeControllerShouldUpdateImmediately:(id)a0;

@end
