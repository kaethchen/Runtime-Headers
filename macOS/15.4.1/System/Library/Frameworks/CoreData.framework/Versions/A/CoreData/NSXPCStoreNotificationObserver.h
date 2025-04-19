@class NSPersistentStoreCoordinator, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface NSXPCStoreNotificationObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    NSPersistentStoreCoordinator *_psc;
    NSString *_storeID;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initForObservationWithName:(id)a0 store:(id)a1;

@end
