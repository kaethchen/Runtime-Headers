@class NSManagedObjectContext, ICManagedObjectContextUpdater, NSPersistentStoreCoordinator;

@interface NFCrossProcessChangeCoordinator : NSObject

@property (retain, nonatomic) NSPersistentStoreCoordinator *sourceCoordinator;
@property (retain, nonatomic) NSManagedObjectContext *destinationContext;
@property (retain, nonatomic) ICManagedObjectContextUpdater *contextUpdater;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_contextDidSave:(id)a0;
- (id)initWithSourceCoordinator:(id)a0 destinationContext:(id)a1;
- (void)postCrossProcessNotificationName:(id)a0;
- (void)registerForCrossProcessNotificationName:(id)a0 block:(id /* block */)a1;
- (void)_distributedNotificationReceived:(id)a0;

@end
