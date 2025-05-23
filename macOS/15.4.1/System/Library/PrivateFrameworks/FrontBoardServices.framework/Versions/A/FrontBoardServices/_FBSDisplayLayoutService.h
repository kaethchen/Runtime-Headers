@class BSServiceConnection, NSString, NSMapTable, FBSDisplayLayout, NSObject, BSServiceConnectionEndpoint;
@protocol OS_dispatch_queue;

@interface _FBSDisplayLayoutService : NSObject <BSInvalidatable, FBSDisplayLayoutMonitorClientInterface> {
    BSServiceConnectionEndpoint *_endpoint;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    BSServiceConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_lock_keyedObservers;
    FBSDisplayLayout *_lock_layout;
    unsigned long long _lock_layoutGeneration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)endpoint;
- (id)currentLayout;
- (void)_noteDisconnected;
- (id)_initWithEndpoint:(id)a0 qos:(char)a1;
- (void)addObserver:(id /* block */)a0 forKey:(id)a1;
- (void)removeObserverForKey:(id)a0;
- (oneway void)updateLayout:(id)a0 withTransition:(id)a1;

@end
