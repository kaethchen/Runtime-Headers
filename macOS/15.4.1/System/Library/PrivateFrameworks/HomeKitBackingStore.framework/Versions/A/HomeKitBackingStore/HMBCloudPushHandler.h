@class NSString, NSMapTable;
@protocol HMBAPSConnection;

@interface HMBCloudPushHandler : HMFObject <HMBAPSConnectionDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _apsLock;
    id<HMBAPSConnection> _apsConnection;
    NSMapTable *_bundleIdentifiersByObservers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)sharedHandlerForEnvironment:(id)a0;

- (void).cxx_destruct;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (id)initWithAPSConnection:(id)a0;
- (void)removeAllObserversForBundleIdentifier:(id)a0;

@end
