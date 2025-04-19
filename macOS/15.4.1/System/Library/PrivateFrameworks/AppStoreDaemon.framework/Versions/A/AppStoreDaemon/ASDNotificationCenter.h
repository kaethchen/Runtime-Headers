@class NSString, NSMutableDictionary, NSMutableSet, NSHashTable, NSObject;
@protocol OS_dispatch_queue, ASDNotificationCenterDialogObserver;

@interface ASDNotificationCenter : NSObject <ASDServiceProvider, ASDNotificationServiceProtocol> {
    NSMutableSet *_activeProgress;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_notificationObservers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerLock;
    NSHashTable *_progressObservers;
}

@property (weak) id<ASDNotificationCenterDialogObserver> dialogObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultCenter;
+ (id)interface;

- (id)init;
- (void).cxx_destruct;
- (void)removeProgressObserver:(id)a0;
- (void)addNotificationObserver:(id)a0 forName:(id)a1;
- (void)addProgressObserver:(id)a0;
- (void)deliverAlertPresentationRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)deliverAuthenticateRequest:(id)a0 withResultHandler:(id /* block */)a1;
- (void)deliverDialogRequest:(id)a0 withResultHandler:(id /* block */)a1;
- (void)deliverEngagementRequest:(id)a0 withResultHandler:(id /* block */)a1;
- (void)deliverNotifications:(id)a0;
- (void)deliverProgress:(id)a0;
- (void)deliverViewPresentationRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)removeNotificationObserver:(id)a0 forName:(id)a1;

@end
